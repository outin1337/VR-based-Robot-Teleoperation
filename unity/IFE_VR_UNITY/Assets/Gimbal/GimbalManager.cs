using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.Events;
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
        public UnityEvent gimbalLocked;
        
        private SteamVR_Input_Sources handType = SteamVR_Input_Sources.RightHand;
        private SteamVR_Action_Boolean gimbalToggle = SteamVR_Actions.default_Teleport;

        void Start()
        {
            if (gimbalLocked == null)
                gimbalLocked = new UnityEvent();
            StartCoroutine(FirstCloud());
            //MoveObject(ObjPointCloud);
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
                

                if (!isGimbalLocked)
                {
                    GimbalNetwork.commandSend = "UPDATEROTATION";
                    //GimbalNetwork.commandSend = "CALIBRATE";
                    
                }
                else
                {
                    gimbalLocked.Invoke();
                    //RobotArmUnity.SetLockedCameraTransform();
                }
                    
            }
                
        }

        IEnumerator FirstCloud()
        {
            yield return new WaitForSeconds(1);
            gimbalLocked.Invoke();
            MoveObject(ObjPointCloud);
        }

        void MoveObject(GameObject obj)
        {
            float cameraYaw = MainCamera.transform.eulerAngles.y;
            if (distance != 0f)
            {
                //Vector3 forwardDirection = new Vector3(Mathf.Sin(Mathf.Deg2Rad * cameraYaw), 0, Mathf.Cos(Mathf.Deg2Rad * cameraYaw));
                //obj.transform.position = MainCamera.transform.position - offset + forwardDirection * distance;
                obj.transform.position = MainCamera.transform.position + MainCamera.transform.forward * distance;
                obj.transform.rotation = MainCamera.transform.rotation;
                //Debug.Log(MainCamera.transform.rotation.eulerAngles);
            }
            else
            {
                obj.transform.position = MainCamera.transform.position - offset + MainCamera.transform.forward * distance;
                obj.transform.rotation = MainCamera.transform.rotation;
            }
            
            //Quaternion yawOnlyRotation = Quaternion.Euler(0, cameraYaw, 0);
            //obj.transform.rotation = yawOnlyRotation;
        }
    }
}
