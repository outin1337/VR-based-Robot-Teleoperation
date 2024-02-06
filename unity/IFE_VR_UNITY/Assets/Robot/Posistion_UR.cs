using System;
using System.Threading.Tasks;
using UnityEngine;
using Valve.VR;
using Valve.VR.InteractionSystem;


public class Posistion_UR : MonoBehaviour
{
    public SteamVR_Input_Sources handType; // Set this to LeftHand or RightHand in the inspector

    private SteamVR_Behaviour_Pose controllerPose;
    private double treshold_pos = 0.0;
    private double treshold_ang = 90;

    private Vector3 currentControllerPosition;
    private Vector3 previousControllerPosition;
    private Vector3 deltaControllerPosition;

    private Quaternion currentControllerRotation;
    private Quaternion previousControllerRotation;

    private Quaternion deltaControllerRotation;
    private Quaternion totalControllerRotation;
    private Quaternion normalizedtotalControllerRotation;
    private Quaternion staticControllerRotation;

    //https://docs.unity3d.com/ScriptReference/Quaternion.ToAngleAxis.html
    float axisAngle = 0.0f;
    Vector3 axisVector = Vector3.zero;
    private Quaternion rotationToRobot = Quaternion.Euler(-90, 0, 0);
    private Quaternion xOffsetRotation = Quaternion.Euler(-45, 0, 0);

    private Vector3 unsentDeltaControllerPosition;

    public Socket_robot_arm networkManager;

    public SteamVR_Action_Boolean grabPinchAction;
    public SteamVR_Action_Boolean teleportAction;

    private int gripperButton = -1;

    private bool isAsyncTaskRunning = false;
    private bool initalPoseBool = true;
    private bool oneTimeSetupBool = true;

    private Vector3 test;



    void Start()
    {
        controllerPose = GetComponent<SteamVR_Behaviour_Pose>();
        networkManager = new Socket_robot_arm();
        networkManager.StartListenerAsync();

        if (controllerPose == null)
        {
            Debug.LogWarning(
                "No SteamVR_Behaviour_Pose component found on this game object. Make sure it's attached to a SteamVR controller.");
        }
        
    }

    void Update()
    {
        if (teleportAction.GetStateUp(handType))
        {
            gripperButton *= -1;
        }

        if (grabPinchAction.GetState(handType))
        {
            if (grabPinchAction.GetStateDown(handType))
            {
                initalPoseBool = true;
            }

            if (!isAsyncTaskRunning)
            {
                isAsyncTaskRunning = true;
                rotate();
            }
        }
        //Debug.Log("CCCCCCCCCCC" + totalControllerRotation.eulerAngles);
    }

    private void OnApplicationQuit()
    {
        networkManager.CloseConnection();
        networkManager.StopListener();
    }

    private async Task rotate()
    {

        if (oneTimeSetupBool)
        { 
            totalControllerRotation = rotationToRobot * controllerPose.transform.localRotation * xOffsetRotation;
            previousControllerRotation = rotationToRobot * controllerPose.transform.localRotation * xOffsetRotation;
            staticControllerRotation = rotationToRobot * controllerPose.transform.localRotation * xOffsetRotation;
            //totalControllerRotation = controllerPose.transform.rotation;
            //totalControllerRotation = Quaternion.identity;
            oneTimeSetupBool = false;
        }
        
        if (initalPoseBool)
        {
            previousControllerPosition = controllerPose.transform.position;
            previousControllerRotation = rotationToRobot * controllerPose.transform.rotation * xOffsetRotation;
            initalPoseBool = false;
        }


        if (controllerPose == null)
            return;

        currentControllerPosition = controllerPose.transform.position;
        deltaControllerPosition = currentControllerPosition - previousControllerPosition;

        currentControllerRotation = rotationToRobot * controllerPose.transform.rotation * xOffsetRotation;
        //currentControllerRotation = controllerPose.transform.rotation;
        deltaControllerRotation =  Quaternion.Inverse(previousControllerRotation) * currentControllerRotation;
        totalControllerRotation *= deltaControllerRotation;

        var lala = totalControllerRotation.eulerAngles;
        lala.x = staticControllerRotation.eulerAngles.x;
        lala.y = staticControllerRotation.eulerAngles.y;
        totalControllerRotation = Quaternion.Euler(lala);
        
        normalizedtotalControllerRotation = totalControllerRotation.normalized;
        normalizedtotalControllerRotation.ToAngleAxis(out axisAngle, out axisVector);
        //currentControllerRotation.ToAngleAxis(out axisAngle, out axisVector);
        axisAngle *= Mathf.Deg2Rad;
        axisVector = axisVector * axisAngle / axisVector.magnitude;

        //Debug.Log(string.Format("Rotation vector: {0:F4},{1:F4},{2:F4}", axisVector.x, axisVector.y, axisVector.z));

        if (Mathf.Abs(deltaControllerPosition.x) > treshold_pos ||
            Mathf.Abs(deltaControllerPosition.y) > treshold_pos ||
            Mathf.Abs(deltaControllerPosition.z) > treshold_pos) //Sjekker om bevegelsen er større en treshhold
        {
            if (await networkManager.ReadMessageFromClientAsync() == "ready")
            {
                //Debug.Log("Difference position: " + deltaControllerPosition);
                deltaControllerPosition += unsentDeltaControllerPosition;
                networkManager.SendMessageToClient(deltaControllerPosition, axisVector, gripperButton);
                unsentDeltaControllerPosition.x = 0;
                unsentDeltaControllerPosition.y = 0;
                unsentDeltaControllerPosition.z = 0;
            }
            else
            {
                Debug.Log("Read operation timed out");
                unsentDeltaControllerPosition += deltaControllerPosition;
            }

            //Debug.Log("Controller Position: " + currentControllerPosition);
            previousControllerPosition = currentControllerPosition;
        }
        previousControllerRotation = currentControllerRotation;


        isAsyncTaskRunning = false;
    }
}