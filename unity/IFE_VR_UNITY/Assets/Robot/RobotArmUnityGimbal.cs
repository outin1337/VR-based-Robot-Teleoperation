using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using Valve.VR;


namespace Robot
{
    public class RobotArmUnityGimbal
    {
        
        private GameObject vrControllerObject;
        private GameObject vrCamera;
        private GameObject lockedVrCameraCopy;
        private GameObject controller;
        private GameObject controllerPose;
        private SteamVR_Behaviour_Pose controllerRealPose;
        private SteamVR_Input_Sources handType;
        private SteamVR_Input_Sources controllerType;

        public bool grabPinchToggle = false;
        private bool grabGripToggle = false;
        private bool resetPos = true;
        public bool freezeRobot = false;
        
        private SteamVR_Action_Boolean grabPinchAction = SteamVR_Actions.default_GrabPinch;
        private SteamVR_Action_Single squeezeGrabPinchAction = SteamVR_Actions.default_Squeeze;
        private SteamVR_Action_Boolean teleportAction = SteamVR_Actions.default_Teleport;
        private SteamVR_Action_Boolean grabGrip = SteamVR_Actions.default_Teleport;
        private SteamVR_Action_Vibration forceVibration = SteamVR_Actions.default_Haptic;
        
        public RobotArmUnityGimbal(GameObject vrControllerObject, GameObject vrCamera, GameObject lockedVrCameraCopy, GameObject controller)
        {
            this.vrCamera = vrCamera;
            this.vrControllerObject = vrControllerObject;
            this.controller = controller;
            controllerRealPose = this.controller.GetComponent<SteamVR_Behaviour_Pose>();
            controllerPose = this.vrControllerObject;
            controllerType = controllerRealPose.inputSource;
            //grabGrip.AddOnUpdateListener(grabGripHandleChange,handType);
            squeezeGrabPinchAction.AddOnUpdateListener(squeezeGrabPinchActionHandleUpdate,controllerType);
            lockedVrCameraTransform = lockedVrCameraCopy.transform;

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

        private Quaternion
            gimbalPlacement = Quaternion.Euler(0, 0, 0); //gimbalPlacement = Quaternion.Euler(0, -90, 0);





        //private Quaternion rotationToRobot = Quaternion.AngleAxis(180, Vector3.forward);
        private Quaternion rotationToRobot = Quaternion.Euler(0, 180, 0) * Quaternion.Euler(-90,0,0); //Quaternion.AngleAxis(0, Vector3.forward); // Quaternion.AngleAxis(90, Vector3.forward); When placed facing robot opposite side use this.
        private Quaternion xOffsetRotation = Quaternion.Euler(-50, 0, 0);
        private Quaternion yOffsetRotation = Quaternion.identity;
        private float axisAngle = 0.0f;
        private Vector3 posVector;
        private Vector3 axisVector;
        private Vector3 forwardHorizontal;
        private float robotArmGripperValue;
        private Transform lockedVrCameraTransform;

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

            if (grabGrip.GetStateDown(controllerType))
            {
                xOffsetRotation = Quaternion.Euler(controllerPose.transform.rotation.eulerAngles.x, 0, 0);
                previousControllerPosition = controllerPose.transform.position;
                previousControllerRotation = controllerPose.transform.rotation * xOffsetRotation * rotationToRobot;
            }

       

            
            currentControllerPosition = controllerPose.transform.position;
            
            if (GimbalManager.isGimbalLocked)
            {
                forwardHorizontal = new Vector3(lockedVrCameraTransform.forward.x, 0,
                    lockedVrCameraTransform.forward.z).normalized;
            }
            else
            {
                forwardHorizontal = new Vector3(vrCamera.transform.forward.x, 0, vrCamera.transform.forward.z).normalized;
            }
            
            Quaternion yOnlyCameraRotation = Quaternion.LookRotation(forwardHorizontal, Vector3.up);
            yOnlyCameraRotation = Quaternion.Inverse(yOnlyCameraRotation);
            deltaControllerPosition = gimbalPlacement *(yOnlyCameraRotation * currentControllerPosition) 
                                      - gimbalPlacement * (yOnlyCameraRotation * previousControllerPosition);
            //deltaControllerPosition = Quaternion.Euler(0, 90, 0) * deltaControllerPosition;
     
            currentControllerRotation = controllerPose.transform.rotation * xOffsetRotation  * rotationToRobot;
            
            deltaControllerRotation = Quaternion.Inverse(yOnlyCameraRotation*previousControllerRotation) * (yOnlyCameraRotation*currentControllerRotation); //Quaternion.Inverse(previousControllerRotation) * currentControllerRotation;
              

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
            return teleportAction.GetStateUp(controllerType);
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
            return squeezeGrabPinchAction.GetAxis(controllerType)*255;
        }

        
        public bool gripButtonPressed()
        {
            if (grabGrip.GetStateDown(controllerType) && !freezeRobot ) grabGripToggle = !grabGripToggle;
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
            forceVibration.Execute(0,seconds, 0.9f, maxAbsoluteForce, controllerType);
        }


        public void SetLockedCameraTransform()
        {
            lockedVrCameraTransform.position = vrCamera.transform.position;
            lockedVrCameraTransform.rotation = vrCamera.transform.rotation;
        }
    }
}
