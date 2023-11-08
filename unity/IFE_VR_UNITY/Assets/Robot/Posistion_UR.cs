using UnityEngine;
using Valve.VR;

public class Posistion_UR : MonoBehaviour
{
    public SteamVR_Input_Sources handType; // Set this to LeftHand or RightHand in the inspector

    private SteamVR_Behaviour_Pose controllerPose;
    private double treshold_pos = 0.2;
    private double treshold_ang = 90;

    private Vector3 currentControllerPosition;
    private Vector3 previousControllerPosition;
    public Vector3 deltaControllerPosition;

    private Vector3 currentControllerRotation;
    private Vector3 previousControllerRotation;
    private Vector3 deltaControllerRotation;

    public Socket_robot_arm msgClient;

    

    void Start()
    {
        controllerPose = GetComponent<SteamVR_Behaviour_Pose>();
        msgClient = GetComponent<Socket_robot_arm>();


        if (controllerPose == null)
        {
            Debug.LogWarning("No SteamVR_Behaviour_Pose component found on this game object. Make sure it's attached to a SteamVR controller.");
        }
         previousControllerPosition = controllerPose.transform.position;
         previousControllerRotation = controllerPose.transform.localEulerAngles;

        
    }

    void Update()
    {
        if (controllerPose == null)
            return;

        currentControllerPosition = controllerPose.transform.position;
        deltaControllerPosition = currentControllerPosition - previousControllerPosition;

        currentControllerRotation = controllerPose.transform.localEulerAngles;
        deltaControllerRotation = AngleDifference(previousControllerRotation, currentControllerRotation);


        if (Mathf.Abs(deltaControllerPosition.x) > treshold_pos || Mathf.Abs(deltaControllerPosition.y) > treshold_pos || Mathf.Abs(deltaControllerPosition.z) > treshold_pos) //Sjekker om bevegelsen er større en treshhold 
        {
            Debug.Log("Difference position: " + deltaControllerPosition);
            msgClient.SendMessageToClient(deltaControllerPosition);
            //Debug.Log("Controller Position: " + currentControllerPosition);
            previousControllerPosition = currentControllerPosition;
        }

        /*if (Mathf.Abs(deltaControllerRotation.x) > treshold_ang || Mathf.Abs(deltaControllerRotation.y) > treshold_ang || Mathf.Abs(deltaControllerRotation.z) > treshold_ang) //Sjekker om rotasjonen er større en treshhold 
        {
            Debug.Log("Difference rotation: " + deltaControllerRotation);
            Debug.Log("Controller rotation: " + currentControllerRotation);
            previousControllerRotation = currentControllerRotation;
        }*/
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