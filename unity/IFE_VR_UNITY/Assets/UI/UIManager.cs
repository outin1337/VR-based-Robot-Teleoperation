using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
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
        public static bool UIOpen;
        private GameObject settings;
        public SteamVR_Input_Sources handType;
        public SteamVR_Action_Boolean menuButton = SteamVR_Actions.default_Menu;
        public SteamVR_Action_Boolean leftButton, rightButton;
        public GameObject vrController, MainCamera;
        public Sprite Controller_Enabled, Controller_Disabled;
        public GameObject UIPointer;
        
        private Image free_image, rotate_image, move_image, GimbalLockSprite;
        private TMPro.TextMeshProUGUI Mode_text;
        private bool controllerExist;

        void Start()
        {
            settings = ui.transform.Find("Settings").gameObject;
            settings.SetActive(UIOpen);

            //GameObject title = ui.transform.Find("Settings/Title").gameObject;
            GameObject FreeMode = ui.transform.Find("Settings/FreeMode").gameObject;
            GameObject RotateMode = ui.transform.Find("Settings/RotateMode").gameObject;
            GameObject MoveMode = ui.transform.Find("Settings/MoveMode").gameObject;

            free_image = FreeMode.GetComponent<Image>();
            rotate_image = RotateMode.GetComponent<Image>();
            move_image = MoveMode.GetComponent<Image>();

            GameObject VRController = ui.transform.Find("Status/VR_Controller").gameObject;
            GameObject ModeText = ui.transform.Find("Status/Mode").gameObject;

            GimbalLockSprite = VRController.GetComponent<Image>();
            Mode_text = ModeText.GetComponent<TMPro.TextMeshProUGUI>();

            GimbalLockSprite.sprite = Controller_Disabled;
        }

        void Update()
        {
            
            if (menuButton.GetStateUp(handType) || Input.GetKeyDown(KeyCode.Escape))
            {
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
            
            UIPointer.SetActive(UIOpen);
            if (UIOpen)
            {
                if (leftButton.GetStateDown(handType) || Input.GetKeyDown(KeyCode.UpArrow))
                {
                    MoveOption(-1);

                }
                else if (rightButton.GetStateDown(handType) || Input.GetKeyDown(KeyCode.DownArrow))
                {
                    MoveOption(1);
                }

                Color color_highlighted = new Color(57,62,70);
                Color color_selected = new Color(0,173,181);
                if (selected == Option.FREEMODE)
                {
                    free_image.color = color_selected;
                    rotate_image.color = color_highlighted;
                    move_image.color = color_highlighted;
                    Mode_text.text = "FreeMode";
                }
                else if (selected == Option.ROTATEMODE)
                {
                    free_image.color = color_highlighted;
                    rotate_image.color = color_selected;
                    move_image.color = color_highlighted;
                    Mode_text.text = "RotateMode";
                }
                else if (selected == Option.MOVEMODE)
                {
                    free_image.color = color_highlighted;
                    rotate_image.color = color_highlighted;
                    move_image.color = color_selected;
                    Mode_text.text = "MoveMode";
                }
            }
        }

        void MoveOption(int direction)
        {
            int newIndex = (int)selected + direction;
            int total = Enum.GetNames(typeof(Option)).Length;
            if (newIndex >= 0 && newIndex < total)
            {
                selected = (Option)newIndex;
            }
            else
            {
                selected = newIndex >= total ? (Option) 0 : (Option)total-1;
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

        public void Toggle()
        {
            settings.SetActive(!UIOpen);
            UIOpen = !UIOpen;
        }
        
        void MoveObject(GameObject obj)
        {
            float cameraYaw = MainCamera.transform.eulerAngles.y;

            Vector3 forwardDirection = new Vector3(Mathf.Sin(Mathf.Deg2Rad * cameraYaw), 0,
                Mathf.Cos(Mathf.Deg2Rad * cameraYaw));
            obj.transform.position = MainCamera.transform.position + forwardDirection * 0.5f;

            Quaternion yawOnlyRotation = Quaternion.Euler(0, cameraYaw, 0);
            obj.transform.rotation = yawOnlyRotation;
        }
    }
}