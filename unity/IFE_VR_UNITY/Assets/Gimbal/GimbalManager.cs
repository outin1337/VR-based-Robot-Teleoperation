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
        public GameObject ObjPointCloud, MainCamera;
        public static bool isGimbalLocked = true;
        public float distance = 0f;
        
        private SteamVR_Input_Sources handType = SteamVR_Input_Sources.RightHand;
        private SteamVR_Action_Boolean gimbalToggle = SteamVR_Actions.default_Teleport;

        void Start()
        {
            MovePointCloud();
        }

        void Update()
        {
            if (!isGimbalLocked)
                MovePointCloud();
            
            if (gimbalToggle.GetStateDown(handType) || Input.GetKeyDown(KeyCode.Space))
                isGimbalLocked = !isGimbalLocked;
        }

        void MovePointCloud()
        {
            float cameraYaw = MainCamera.transform.eulerAngles.y;
            if (distance != 0f)
                Vector3 forwardDirection = new Vector3(Mathf.Sin(Mathf.Deg2Rad * cameraYaw), 0, Mathf.Cos(Mathf.Deg2Rad * cameraYaw));
                ObjPointCloud.transform.position = MainCamera.transform.position + forwardDirection * distance;
            else
                ObjPointCloud.transform.position = MainCamera.transform.position;

            Quaternion yawOnlyRotation = Quaternion.Euler(0, cameraYaw, 0);
            ObjPointCloud.transform.rotation = yawOnlyRotation;
        }
    }
}
