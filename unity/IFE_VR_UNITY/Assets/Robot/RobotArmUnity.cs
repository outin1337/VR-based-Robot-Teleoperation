using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using Valve.VR;


namespace Robot
{
    public class RobotArmUnity
    {
        
        private GameObject vrControllerObject;
        private GameObject vrCamera;
        private SteamVR_Behaviour_Pose controllerPose;
        private SteamVR_Input_Sources handType;

        public bool grabPinchToggle = false;
        private bool grabGripToggle = false;
        private bool resetPos = true;
        public bool freezeRobot = false;
        
        private SteamVR_Action_Boolean grabPinchAction = SteamVR_Actions.default_GrabPinch;
        private SteamVR_Action_Single squeezeGrabPinchAction = SteamVR_Actions.default_Squeeze;
        private SteamVR_Action_Boolean teleportAction = SteamVR_Actions.default_Teleport;
        private SteamVR_Action_Boolean grabGrip = SteamVR_Actions.default_GrabGrip;
        private SteamVR_Action_Vibration forceVibration = SteamVR_Actions.default_Haptic;
        
        public RobotArmUnity(GameObject vrControllerObject, GameObject vrCamera)
        {
            this.vrCamera = vrCamera;
            this.vrControllerObject = vrControllerObject;
            controllerPose = this.vrControllerObject.GetComponent<SteamVR_Behaviour_Pose>();
            handType = controllerPose.inputSource;
            //grabGrip.AddOnUpdateListener(grabGripHandleChange,handType);
            squeezeGrabPinchAction.AddOnUpdateListener(squeezeGrabPinchActionHandleUpdate,handType);
            
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





        //private Quaternion rotationToRobot = Quaternion.AngleAxis(180, Vector3.forward);
        private Quaternion rotationToRobot = Quaternion.AngleAxis(0, Vector3.forward);
        private Quaternion xOffsetRotation = Quaternion.Euler(-50, 0, 0);
        private Quaternion yOffsetRotation = Quaternion.identity;
        private float axisAngle = 0.0f;
        private Vector3 posVector;
        private Vector3 axisVector;
        private float robotArmGripperValue;

        public float RobotArmGripperValue
        {
            get => robotArmGripperValue;
        }

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
        
        
        
        private bool oneTimeSetupBool = true;
        
        public bool UpdateRobotPose()
        {
            
            if (freezeRobot || !gripButtonPressed())
            {
                posVector = Vector3.zero;
                return false; 
            }
 
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
                previousControllerPosition = vrCamera.transform.InverseTransformPoint(controllerPose.transform.position);
                previousControllerRotation = controllerPose.transform.rotation * xOffsetRotation * rotationToRobot;
            }

       

            
            currentControllerPosition = vrCamera.transform.InverseTransformPoint(controllerPose.transform.position);
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

            return true;
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
            posVector = Vector3.zero;
        }

        public bool TeleportButtonPressed()
        {
            return teleportAction.GetStateUp(handType);
        }

        public bool grabGripButtonPressed()
        {
            return grabGripToggle;
        }

        /*public void grabGripHandleChange(SteamVR_Action_Boolean action, SteamVR_Input_Sources source, bool newState)
        {
            if (action.stateDown && !freezeRobot)
            {
                Debug.Log("Toggled");
                grabGripToggle = !grabGripToggle;
                if (grabGripToggle)
                {
                    resetPos = true;
                }
            }
           
        }*/

        public void squeezeGrabPinchActionHandleUpdate(SteamVR_Action_Single action, SteamVR_Input_Sources source, 
            float newAxis, float newDelta)
        {
            if (Mathf.Abs(newDelta) >= 0.01)
            {
                robotArmGripperValue = newAxis * 255;
            }
        }

        public float squeezeGrabPinchValue()
        {
            return squeezeGrabPinchAction.GetAxis(handType)*255;
        }

        
        public bool gripButtonPressed()
        {
            if (grabGrip.GetStateDown(handType) && !freezeRobot ) grabGripToggle = !grabGripToggle;
            return grabGripToggle;
        }
        
        public void SetGripButtonFalse()
        {
            grabGripToggle = false;
        }

        public void FreezeRobot()
        {
            freezeRobot = true;
            grabGripToggle = false;
        }

        public void UnFreezeRobot()
        {
            freezeRobot = false;
        }

        public void VibrationController(double[] force)
        {
            float seconds = Time.fixedDeltaTime / Time.timeScale;
            float maxAbsoluteForce = (float)force.Take(3).Select(Math.Abs).Max();
            maxAbsoluteForce /= 250;
            maxAbsoluteForce =  0.15 < maxAbsoluteForce ? maxAbsoluteForce : 0;
            
            //Debug.Log(string.Format("max force {0:F2}", maxAbsoluteForce));
            forceVibration.Execute(0,seconds, 0.9f, maxAbsoluteForce, handType);
        }
    }
}
