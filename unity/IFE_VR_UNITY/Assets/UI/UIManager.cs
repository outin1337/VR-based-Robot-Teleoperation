using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using Valve.VR;
using Valve.VR.InteractionSystem;

namespace Robot
{
    public class UIManager : MonoBehaviour
    {

        public GameObject ui;

        public enum Option
        {
            FREEMODE,
            ROTATEMODE,
            MOVEMODE
        }

        public static Option selected = Option.FREEMODE;
        // Locking AXIS
        public static bool PosX=true,PosY=true,PosZ=true,RotX=true,RotY=true,RotZ=true;
        [SerializeField]
        private GameObject X, Y, Z, RX, RY, RZ;
        public static bool UIOpen;
        private GameObject settings;
        public SteamVR_Input_Sources handType;
        public SteamVR_Action_Boolean menuButton = SteamVR_Actions.default_Menu;
        public SteamVR_Action_Boolean leftButton, rightButton, press;
        public Camera pointerCam, MainCamera;
        public Sprite Controller_Enabled, Controller_Disabled;
        public GameObject UIPointer;
        public Canvas canvas;
        
        private Image free_image, rotate_image, move_image, GimbalLockSprite;
        private TMPro.TextMeshProUGUI Mode_text;
        private bool controllerExist;
        public Button[] buttons;
        private int currentIndex = 0;

        void Start()
        {
            settings = ui.transform.Find("Settings").gameObject;
            settings.SetActive(UIOpen);

            GameObject VRController = ui.transform.Find("Status/VR_Controller").gameObject;
            GameObject ModeText = ui.transform.Find("Status/Mode").gameObject;

            GimbalLockSprite = VRController.GetComponent<Image>();
            Mode_text = ModeText.GetComponent<TMPro.TextMeshProUGUI>();

            SetColor(X,true);
            SetColor(Y,true);
            SetColor(Z,true);
            SetColor(RX,true);
            SetColor(RY,true);
            SetColor(RZ,true);

            GimbalLockSprite.sprite = Controller_Disabled;
        }

        void Update()
        {
            bool menuBtn = menuButton.GetStateUp(handType);
            bool EscBtn = Input.GetKeyDown(KeyCode.Escape);
            bool uiPoint = false;
            
            if (menuBtn || EscBtn)
            {
                //canvas.worldCamera = EscBtn ? MainCamera : pointerCam;
                //canvas.renderMode = EscBtn ? RenderMode.ScreenSpaceOverlay : RenderMode.WorldSpace;
                
                uiPoint = !EscBtn; // TEMP for UI change while not having on VR headset
                
                Toggle();

                if (UIOpen)
                    MoveObject(settings);
            }
            
            if (GimbalManager.isGimbalLocked)
            {
                ChangeSprite(GimbalLockSprite, Controller_Disabled);
            }
            else
            {
                ChangeSprite(GimbalLockSprite, Controller_Enabled);
            }
            
            UIPointer.SetActive(UIOpen
            );
            if (UIOpen)
            {
                if (buttons.Length > 0)
                {
                    EventSystem.current.SetSelectedGameObject(buttons[currentIndex].gameObject);
                }
                
                if (leftButton.GetStateDown(handType) || Input.GetKeyDown(KeyCode.UpArrow))
                {
                    MoveOption(-1);

                }
                else if (rightButton.GetStateDown(handType) || Input.GetKeyDown(KeyCode.DownArrow))
                {
                    MoveOption(1);
                }

                /*if (!uiPoint) // TEMP for UI change while not having on VR headset
                {
                    if (press.GetStateDown(handType) || Input.GetKeyDown(KeyCode.C))
                    {
                        buttons[currentIndex].gameObject.GetComponent<Button>().onClick.Invoke();
                    }
                }*/
            }
        }

        void MoveOption(int direction)
        {
            if (currentIndex + direction >= 0 && currentIndex + direction < buttons.Length)
            {
                currentIndex += direction;
            }
        }

        void SetOption(Option option)
        {
            selected = option;
        }

        public static Option GetOption()
        {
            return selected;
        }

        void ChangeSprite(Image image, Sprite sprite)
        {
            image.sprite = sprite;
        }

        public void ClickFree()
        {
            SetOption(Option.FREEMODE);
        }

        public void ClickRotate()
        {
            SetOption(Option.ROTATEMODE);
        }

        public void ClickMove()
        {
            SetOption(Option.MOVEMODE);
        }
        
        Color color_highlighted = new Color(57,62,70);
        Color color_selected = new Color(0,173,181);
        private void SetColor(GameObject obj, bool active)
        {
            Image image = obj.GetComponent<Image>();
            if (active)
                image.color = color_selected;
            else 
                image.color = color_highlighted;
        }

        public void Toggle()
        {
            settings.SetActive(!UIOpen);
            UIOpen = !UIOpen;
        }

        public void ToggleAxis(string axis)
        {
            axis = axis.ToUpper();
            if (axis.Equals("X"))
            {
                PosX = !PosX;
                SetColor(X, PosX);
            }
            else if (axis.Equals("Y"))
            {
                PosY = !PosY;
                SetColor(Y,PosY);
            }
            else if (axis.Equals("Z"))
            {
                PosZ = !PosZ;
                SetColor(Z,PosZ);
            }
            else if (axis.Equals("RX"))
            {
                RotX = !RotX;
                SetColor(RX,RotX);
            }
            else if (axis.Equals("RY"))
            {
                RotY = !RotY;
                SetColor(RY,RotY);
            }
            else if (axis.Equals("RZ"))
            {
                RotZ = !RotZ;
                SetColor(RZ,RotZ);
            }
            else if (axis.Equals("RESET"))
            {
                PosX = true;
                PosY = true;
                PosZ = true;
                RotX = true;
                RotY = true;
                RotZ = true;
                SetColor(X,true);
                SetColor(Y,true);
                SetColor(Z,true);
                SetColor(RX,true);
                SetColor(RY,true);
                SetColor(RZ,true);
            }
        }
        
        void MoveObject(GameObject obj)
        {
            float cameraYaw = MainCamera.transform.eulerAngles.y;

            Vector3 forwardDirection = new Vector3(Mathf.Sin(Mathf.Deg2Rad * cameraYaw), 0,
                Mathf.Cos(Mathf.Deg2Rad * cameraYaw));
            obj.transform.position = MainCamera.transform.position + forwardDirection * 1.5f;

            Quaternion yawOnlyRotation = Quaternion.Euler(0, cameraYaw, 0);
            obj.transform.rotation = yawOnlyRotation;
        }
    }
}