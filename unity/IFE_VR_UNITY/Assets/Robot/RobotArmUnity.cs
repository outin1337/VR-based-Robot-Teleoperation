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
            deltaControllerRotation, 
            totalControllerRotation, 
            initialControllerRotation, 
            inverseInitalControllerRotation,
            fixedReferenceControllerRotation,
            currentRotationLocalRef,
            prevRotationsGlobalRef,
            totalRotationsLocalRef,
            normalizedTotalRotLocalRef;





        //private Quaternion rotationToRobot = Quaternion.Euler(-90, 0, 0);// * Quaternion.Euler(0,0,90);
        private Quaternion rotationToRobot = Quaternion.AngleAxis(180, Vector3.forward);
        private Quaternion xOffsetRotation = Quaternion.Euler(-50, 0, 0);
        private Quaternion yOffsetRotation = Quaternion.identity;
        private float axisAngle = 0.0f;
        private Vector3 axisVector;
        private Vector3 posVector;
        
        public Vector3 AxisVector
        {
            get => axisVector;
            set => axisVector = value;
        }

        public Vector3 PosVector
        {
            get => posVector;
            set => posVector = value; 
        }
        
        
        private readonly SteamVR_Action_Boolean grabPinchAction = SteamVR_Actions.default_GrabPinch;
        private readonly SteamVR_Action_Single squeezeGrabPinchAction = SteamVR_Actions.default_Squeeze;
        private readonly SteamVR_Action_Boolean teleportAction = SteamVR_Actions.default_Teleport;
        private readonly SteamVR_Action_Boolean grabGrip = SteamVR_Actions.default_GrabGrip;
        //private Vector3 axsisAngleTest = new Vector3(0, 3.14f, 0);
        

        private bool oneTimeSetupBool = true;
        
        public void UpdateRobotPose()
        {

            if (oneTimeSetupBool)
            {
                //constantControllerRotation = rotationToRobot * Quaternion.Euler(0, 180, 0);
                initialControllerRotation =  Quaternion.Euler(0, 180, 0);  //This is based on starting position of robot arm. TODO: make dynamic. 
                inverseInitalControllerRotation = Quaternion.Inverse(initialControllerRotation);
                xOffsetRotation = Quaternion.Euler(controllerPose.transform.rotation.eulerAngles.x, 0, 0);
                //yOffsetRotation = Quaternion.Euler(0, -controllerPose.transform.rotation.eulerAngles.y ,0);
                totalRotationsLocalRef = initialControllerRotation;
                previousControllerRotation = initialControllerRotation;
                
                
                oneTimeSetupBool = false;
            }

            if (grabGrip.GetStateDown(handType))
            {
                xOffsetRotation = Quaternion.Euler(controllerPose.transform.rotation.eulerAngles.x, 0, 0);
                previousControllerPosition = controllerPose.transform.position;
                previousControllerRotation = controllerPose.transform.rotation * xOffsetRotation * rotationToRobot;
            }

       

            
            currentControllerPosition = controllerPose.transform.position;
            deltaControllerPosition = currentControllerPosition - previousControllerPosition;

            

            currentControllerRotation = controllerPose.transform.rotation * xOffsetRotation  * rotationToRobot;
            deltaControllerRotation =  Quaternion.Inverse(previousControllerRotation) * currentControllerRotation; //Quaternion.Inverse(previousControllerRotation) * currentControllerRotation;
          

            if (!UIManager.PosX)
            {
                deltaControllerPosition.x = 0;
            }

            if (!UIManager.PosY)
            {
                deltaControllerPosition.y = 0;
            }

            if (!UIManager.PosZ)
            {
                deltaControllerPosition.z = 0;
            }

            Vector3 eulerAngles; 
            
            if (!UIManager.RotX)
            {
                eulerAngles = deltaControllerRotation.eulerAngles;

                deltaControllerRotation = Quaternion.Euler(0, eulerAngles.y, eulerAngles.z);
            }

            if (!UIManager.RotY)
            {
                eulerAngles = deltaControllerRotation.eulerAngles;

                deltaControllerRotation = Quaternion.Euler(eulerAngles.x, 0, eulerAngles.z);
            }

            if (!UIManager.RotZ)
            {
                eulerAngles = deltaControllerRotation.eulerAngles;

                deltaControllerRotation = Quaternion.Euler(eulerAngles.x, eulerAngles.y, 0);
            }
            
            
            
            
            currentRotationLocalRef = initialControllerRotation * deltaControllerRotation; 
            prevRotationsGlobalRef = inverseInitalControllerRotation * totalRotationsLocalRef;
            totalRotationsLocalRef = currentRotationLocalRef * prevRotationsGlobalRef;
            normalizedTotalRotLocalRef = totalRotationsLocalRef.normalized;
            normalizedTotalRotLocalRef.ToAngleAxis(out axisAngle, out axisVector); //currentControllerRotation.ToAngleAxis(out axisAngle, out axisVector);
            
            axisAngle *= Mathf.Deg2Rad;
            axisVector = (axisVector * axisAngle) / axisVector.magnitude;
            
            posVector = deltaControllerPosition;
            
            
            previousControllerPosition = currentControllerPosition;
            previousControllerRotation = currentControllerRotation;
        }
        
        
        /*private Quaternion IsolateQuaternionRotAxis(Quaternion rotation, Vector3 axisToIsolate)  Need to research more before use.
        {
            axisToIsolate = axisToIsolate.normalized;

            Vector3 rotationAxis = new Vector3(rotation.x, rotation.y, rotation.z);
            Vector3 projectedAxis = Vector3.Project(rotationAxis, axisToIsolate);

            Quaternion twist = new Quaternion(projectedAxis.x, projectedAxis.y, projectedAxis.z, rotation.w);
            twist.Normalize();

            return twist;
        }*/
        
        

        public void ResetPose()
        {
            oneTimeSetupBool = true;
        }

        public bool TeleportButtonPressed()
        {
            return teleportAction.GetStateUp(handType);
        }

        public bool grabPinchButtonPressed()
        {
            return grabPinchAction.GetStateDown(handType);
        }

        public float squeezeGrabPinchValue()
        {
            return squeezeGrabPinchAction.GetAxis(handType)*255;
        }

        private bool grabGripToggle;
        private bool grabGripForcedOff = false;
        public bool gripButtonPressed()
        {
            if (grabGrip.GetStateDown(handType) & !grabGripForcedOff ) grabGripToggle = !grabGripToggle;
            return grabGripToggle;
        }
        public void SetGripButtonFalse()
        {
            grabGripToggle = false;
        }

        public void ForceGrabGripOff()
        {
            grabGripForcedOff = true;
            SetGripButtonFalse();
        }

        public void ResetForceGrabGripOff()
        {
            grabGripForcedOff = false;
        }
    }
}
