using System;
using System.Threading.Tasks;
using UnityEngine;
using Valve.VR;
using Valve.VR.InteractionSystem;


public class Posistion_UR : MonoBehaviour
{
    public SteamVR_Input_Sources handType; // Set this to LeftHand or RightHand in the inspector

    private SteamVR_Behaviour_Pose controllerPose;
    private double treshold_pos = 0.001;
    private double treshold_ang = 90;

    private Vector3 currentControllerPosition;
    private Vector3 previousControllerPosition;
    private Vector3 deltaControllerPosition;

    private Quaternion currentControllerRotation;
    private Quaternion previousControllerRotation;
    private Quaternion deltaControllerRotation;
    //https://docs.unity3d.com/ScriptReference/Quaternion.ToAngleAxis.html
    float axisAngle = 0.0f;
    Vector3 axisVector = Vector3.zero;
    
    private Vector3 unsentDeltaControllerPosition;

    public Socket_robot_arm networkManager;

    public SteamVR_Action_Boolean grabPinchAction;
    public SteamVR_Action_Boolean teleportAction;

    private int gripperButton = -1;
    
    private bool isAsyncTaskRunning = false;
    private bool initalPoseBool = true;

    

    void Start()
    {
        controllerPose = GetComponent<SteamVR_Behaviour_Pose>();
        networkManager = new Socket_robot_arm();
        networkManager.StartListenerAsync();

        if (controllerPose == null)
        {
            Debug.LogWarning("No SteamVR_Behaviour_Pose component found on this game object. Make sure it's attached to a SteamVR controller.");
        }

        
        previousControllerPosition = controllerPose.transform.position;
        previousControllerRotation = controllerPose.transform.localRotation;

        
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
    }
    
    private void OnApplicationQuit()
    {
        networkManager.CloseConnection();
        networkManager.StopListener();
    }

    private async Task rotate()
    {
        
        //Using velocity
        /*if (await networkManager.ReadMessageFromClientAsync() == "ready")
        {
            networkManager.SendMessageToClient(controllerPose.GetVelocity());
            
        }

        else
        { 
            Debug.Log("Read operation timed out");
        }
        */
        
        //Using delta coordinates
        if (initalPoseBool)
        {
            previousControllerPosition = controllerPose.transform.position;
            initalPoseBool = false;
        }


        if (controllerPose == null)
            return;

        currentControllerPosition = controllerPose.transform.position;
        deltaControllerPosition = currentControllerPosition - previousControllerPosition;

        currentControllerRotation = controllerPose.transform.localRotation;
        deltaControllerRotation = currentControllerRotation * Quaternion.Inverse(previousControllerRotation);
        //deltaControllerRotation.ToAngleAxis(out axisAngle, out axisVector);
        currentControllerRotation.ToAngleAxis(out axisAngle, out axisVector);
        axisAngle *= Mathf.Deg2Rad;
        axisVector = axisVector * axisAngle/axisVector.magnitude;
        
        Debug.Log(string.Format("Rotation vector: {0:F4},{1:F4},{2:F4}", axisVector.x, axisVector.y, axisVector.z));

        if (Mathf.Abs(deltaControllerPosition.x) > treshold_pos || Mathf.Abs(deltaControllerPosition.y) > treshold_pos || Mathf.Abs(deltaControllerPosition.z) > treshold_pos) //Sjekker om bevegelsen er større en treshhold
        {
            if (await networkManager.ReadMessageFromClientAsync() == "ready")
            {
                Debug.Log("Difference position: " + deltaControllerPosition);
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
            previousControllerRotation = currentControllerRotation;
        }
        
        
        isAsyncTaskRunning = false;
    }


    private Vector3 AngleDifference(Vector3 euler1, Vector3 euler2)
    {
        return new Vector3(
            AngleCorrection(euler1.x, euler2.x),
            AngleCorrection(euler1.y, euler2.y),
            AngleCorrection(euler1.z, euler2.z)
        );
    }

    private float AngleCorrection(float angle1, float angle2)
    {
        float difference = (angle2 - angle1 + 180) % 360 - 180;
        return difference < -180 ? difference + 360 : difference;
    }

}