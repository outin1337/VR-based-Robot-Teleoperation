using System;
using System.Threading.Tasks;
using UnityEngine;
using Valve.VR;


public class Posistion_UR_RTDE : MonoBehaviour
{
    public SteamVR_Input_Sources handType; // Set this to LeftHand or RightHand in the inspector

    private SteamVR_Behaviour_Pose controllerPose;
    private double treshold_pos = 0.001;
    private double treshold_ang = 90;

    private Vector3 currentControllerPosition;
    private Vector3 previousControllerPosition;
    private Vector3 deltaControllerPosition;

    private Vector3 currentControllerRotation;
    private Vector3 previousControllerRotation;
    private Vector3 deltaControllerRotation;
    private Vector3 unsentDeltaControllerPosition;

    public Socket_robot_arm networkManager;

    public SteamVR_Action_Boolean grabPinchAction;
    
    private bool isAsyncTaskRunning = false;

    

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
         previousControllerRotation = controllerPose.transform.localEulerAngles;

        
    }

    void Update()
    {
        if (grabPinchAction.GetState(handType))
        {
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
        if (controllerPose == null)
            return;

        currentControllerPosition = controllerPose.transform.position;
        deltaControllerPosition = currentControllerPosition - previousControllerPosition;

        currentControllerRotation = controllerPose.transform.localEulerAngles;
        deltaControllerRotation = AngleDifference(previousControllerRotation, currentControllerRotation);


        if (Mathf.Abs(deltaControllerPosition.x) > treshold_pos || Mathf.Abs(deltaControllerPosition.y) > treshold_pos || Mathf.Abs(deltaControllerPosition.z) > treshold_pos) //Sjekker om bevegelsen er større en treshhold 
        {
            
            if (await networkManager.ReadMessageFromClientAsync() == "ready")
            {
                Debug.Log("Difference position: " + deltaControllerPosition);
                deltaControllerPosition += unsentDeltaControllerPosition;
                networkManager.SendMessageToClient(deltaControllerPosition);
                unsentDeltaControllerPosition.x = 0;
                unsentDeltaControllerPosition.y = 0;
                unsentDeltaControllerPosition.z = 0;
            }
            else
            {
                Debug.Log("No client pending");
                unsentDeltaControllerPosition += deltaControllerPosition;
            }
            //Debug.Log("Controller Position: " + currentControllerPosition);
            previousControllerPosition = currentControllerPosition;
        }

        /*if (Mathf.Abs(deltaControllerRotation.x) > treshold_ang || Mathf.Abs(deltaControllerRotation.y) > treshold_ang || Mathf.Abs(deltaControllerRotation.z) > treshold_ang) //Sjekker om rotasjonen er st�rre en treshhold 
        {
            Debug.Log("Difference rotation: " + deltaControllerRotation);
            Debug.Log("Controller rotation: " + currentControllerRotation);
            previousControllerRotation = currentControllerRotation;
        }*/
        
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
