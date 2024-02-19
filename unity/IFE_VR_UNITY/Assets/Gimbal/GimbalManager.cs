using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Valve.VR;
using Valve.VR.InteractionSystem;

namespace Robot
{
    public class GimbalManager : MonoBehaviour
    {
        public GameObject ObjCamera2D, ObjPointCloud, MainCamera;
        
        public SteamVR_Input_Sources handType = SteamVR_Input_Sources.RightHand;
        public SteamVR_Action_Boolean gimbalToggle = SteamVR_Actions.default_Teleport;
        public static bool isGimbalLocked = true;
        private float distance = 2f;

        void Start()
        {
            ObjCamera2D.SetActive(false);
            MovePointCloud();
        }

        void Update()
        {
            if (gimbalToggle.GetStateDown(handType) || Input.GetKeyDown(KeyCode.Space))
            {
                if (isGimbalLocked)
                {
                    // GIMBAL is now no longer locked
                    ObjCamera2D.SetActive(true);
                    ObjPointCloud.SetActive(false);
                }
                else
                {
                    // GIMBAL is now locked
                    ObjCamera2D.SetActive(false);
                    ObjPointCloud.SetActive(true);

                    MovePointCloud();
                }

                isGimbalLocked = !isGimbalLocked;
            }
        }

        void MovePointCloud()
        {
            float cameraYaw = MainCamera.transform.eulerAngles.y;
            Vector3 forwardDirection = new Vector3(Mathf.Sin(Mathf.Deg2Rad * cameraYaw), 0,
                Mathf.Cos(Mathf.Deg2Rad * cameraYaw));
            ObjPointCloud.transform.position = MainCamera.transform.position + forwardDirection * distance;

            Quaternion yawOnlyRotation = Quaternion.Euler(0, cameraYaw, 0);
            ObjPointCloud.transform.rotation = yawOnlyRotation;
        }
    }
}