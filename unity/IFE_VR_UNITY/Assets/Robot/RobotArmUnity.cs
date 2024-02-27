using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Valve.VR;


namespace Robot
{
    public class RobotArmUnity
    {
        
        private GameObject vrControllerObject;
        private SteamVR_Behaviour_Pose controllerPose;
        private SteamVR_Input_Sources handType;
        
        public RobotArmUnity(GameObject vrControllerObject)
        {
            this.vrControllerObject = vrControllerObject;
            controllerPose = this.vrControllerObject.GetComponent<SteamVR_Behaviour_Pose>();
            handType = controllerPose.inputSource;
        }


        private double tresholdPos;
        private double TresholdAng { get; set; } = 90;

        public double TresholdPos
        {
            get => tresholdPos;
            set => tresholdPos = value; 
        }
    
        
        private Vector3 
            currentControllerPosition, 
            previousControllerPosition, 
            deltaControllerPosition;
        
        private Quaternion 
            currentControllerRotation, 
            previousControllerRotation;

        private Quaternion 
            diffControllerRotation, 
            totalControllerRotation, 
            constantControllerRotation, 
            normalizedtotalControllerRotation;





        //private Quaternion rotationToRobot = Quaternion.Euler(-90, 0, 0);// * Quaternion.Euler(0,0,90);
        private Quaternion rotationToRobot = Quaternion.AngleAxis(180, Vector3.forward);
        private Quaternion xOffsetRotation = Quaternion.Euler(-50, 0, 0);
        private float axisAngle = 0.0f;
        private Vector3 axisVector;
        private Vector3 posVector;
        
        public Vector3 AxisVector => axisVector;
        
        public Vector3 PosVector
        {
            get => posVector;
            set => posVector = value; 
        }
        
        
        private readonly SteamVR_Action_Boolean grabPinchAction = SteamVR_Actions.default_GrabPinch;
        private readonly SteamVR_Action_Boolean teleportAction = SteamVR_Actions.default_Teleport;
        private readonly SteamVR_Action_Boolean grabGrip = SteamVR_Actions.default_GrabGrip;
        //private Vector3 axsisAngleTest = new Vector3(0, 3.14f, 0);
        

        private bool oneTimeSetupBool = true;
        
        public void UpdateRobotPose()
        {

            if (oneTimeSetupBool)
            {
                //constantControllerRotation = rotationToRobot * Quaternion.Euler(0, 180, 0);
                constantControllerRotation =  Quaternion.Euler(0, 180, 0);
                xOffsetRotation = Quaternion.Euler(controllerPose.transform.rotation.eulerAngles.x, 0, 0);
                totalControllerRotation = constantControllerRotation;
                previousControllerRotation = constantControllerRotation;
                
                oneTimeSetupBool = false;
            }

            if (grabGrip.GetStateDown(handType))
            {
                previousControllerPosition = controllerPose.transform.position;
                previousControllerRotation = controllerPose.transform.rotation * xOffsetRotation * rotationToRobot;
            }

            
            currentControllerPosition = controllerPose.transform.position;
            deltaControllerPosition = currentControllerPosition - previousControllerPosition;

            currentControllerRotation =  controllerPose.transform.rotation * xOffsetRotation * rotationToRobot;
            diffControllerRotation =  Quaternion.Inverse(previousControllerRotation) * currentControllerRotation;
            totalControllerRotation *= diffControllerRotation;
            normalizedtotalControllerRotation = totalControllerRotation.normalized;
            normalizedtotalControllerRotation.ToAngleAxis(out axisAngle, out axisVector); //currentControllerRotation.ToAngleAxis(out axisAngle, out axisVector);
            axisAngle *= Mathf.Deg2Rad;
            
            axisVector = (axisVector * axisAngle) / axisVector.magnitude;
            posVector = deltaControllerPosition;
            
            
            previousControllerPosition = currentControllerPosition;
            previousControllerRotation = currentControllerRotation;
        }

        public bool TeleportButtonPressed()
        {
            return teleportAction.GetStateUp(handType);
        }

        public bool grabPinchButtonPressed()
        {
            return grabPinchAction.GetStateDown(handType);
        }

        private bool grabToggle;
        public bool gripButtonPressed()
        {
            if (grabGrip.GetStateDown(handType)) grabToggle = !grabToggle;
            return grabToggle;
        }
    }
}
