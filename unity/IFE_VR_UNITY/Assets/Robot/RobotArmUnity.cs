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
        
        
        private double _tresholdPos  = 0.0;
        private double TresholdAng { get; set; } = 90;

        public double TresholdPos
        {
            get => _tresholdPos;
            set => _tresholdPos = value; 
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
        
        
        
        
       
        private Quaternion rotationToRobot = Quaternion.Euler(-90, 0, 0);
        private Quaternion xOffsetRotation = Quaternion.Euler(-45, 0, 0);
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

        private bool oneTimeSetupBool = true;
        
        public void UpdateRobotPose()
        {

            if (oneTimeSetupBool)
            {
                constantControllerRotation = rotationToRobot * controllerPose.transform.localRotation * xOffsetRotation;
                totalControllerRotation = constantControllerRotation;
                previousControllerRotation = constantControllerRotation;
                
                oneTimeSetupBool = false;
            }

            if (grabGrip.GetStateDown(handType))
            {
                previousControllerPosition = controllerPose.transform.position;
                previousControllerRotation = rotationToRobot * controllerPose.transform.localRotation * xOffsetRotation;
            }

            
            currentControllerPosition = controllerPose.transform.position;
            deltaControllerPosition = currentControllerPosition - previousControllerPosition;

            currentControllerRotation = rotationToRobot * controllerPose.transform.rotation * xOffsetRotation;
            diffControllerRotation = Quaternion.Inverse(previousControllerRotation) * currentControllerRotation;
            totalControllerRotation *= diffControllerRotation;
            normalizedtotalControllerRotation = totalControllerRotation.normalized;
            normalizedtotalControllerRotation.ToAngleAxis(out axisAngle, out axisVector); //currentControllerRotation.ToAngleAxis(out axisAngle, out axisVector);
            axisAngle *= Mathf.Deg2Rad;
            
            axisVector = axisVector * axisAngle / axisVector.magnitude;
            posVector = deltaControllerPosition;
            
            
            previousControllerPosition = currentControllerPosition;
            previousControllerRotation = currentControllerRotation;
        }

        public bool teleportButtonPressed()
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
