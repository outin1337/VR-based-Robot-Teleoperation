using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Valve.VR;
using Valve.VR.InteractionSystem;

namespace Robot
{
    public class GimbalManager : MonoBehaviour
    {
        public GameObject ObjPointCloud, MainCamera, SettingsUI;
        public static bool isGimbalLocked = true;
        public float distance = 0f;
        public Vector3 offset;
        
        private SteamVR_Input_Sources handType = SteamVR_Input_Sources.RightHand;
        private SteamVR_Action_Boolean gimbalToggle = SteamVR_Actions.default_Teleport;

        void Start()
        {
            MoveObject(ObjPointCloud);
        }

        void Update()
        {
            if (UIManager.UIOpen)
            {
                isGimbalLocked = true;
                ObjPointCloud.SetActive(false);
            }
            else
            {
                ObjPointCloud.SetActive(true);
            }
                
            
            if (!isGimbalLocked)
                MoveObject(ObjPointCloud);

            if (gimbalToggle.GetStateDown(handType) || Input.GetKeyDown(KeyCode.Space))
            {
                isGimbalLocked = !isGimbalLocked;
            }
                
        }

        void MoveObject(GameObject obj)
        {
            float cameraYaw = MainCamera.transform.eulerAngles.y;
            if (distance != 0f)
            {
                Vector3 forwardDirection = new Vector3(Mathf.Sin(Mathf.Deg2Rad * cameraYaw), 0, Mathf.Cos(Mathf.Deg2Rad * cameraYaw));
                obj.transform.position = MainCamera.transform.position - offset + forwardDirection * distance;
            }
            else
            {
                obj.transform.position = MainCamera.transform.position - offset;
            }
            
            Quaternion yawOnlyRotation = Quaternion.Euler(0, cameraYaw, 0);
            obj.transform.rotation = yawOnlyRotation;
        }
    }
}
