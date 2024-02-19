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
        private static bool UIOpen;
        private GameObject settings;
        public SteamVR_Input_Sources handType;
        public SteamVR_Action_Boolean menuButton = SteamVR_Actions.default_Menu;
        public SteamVR_Action_Boolean leftButton, rightButton;
        public GameObject vrController;
        private RobotArmUnity robotArmUnity;

        public Sprite Controller_Enabled, Controller_Disabled;

        private Image free_image, rotate_image, move_image, GimbalLockSprite;
        private TMPro.TextMeshProUGUI Mode_text;
        private bool controllerExist;

        void Start()
        {
            robotArmUnity = new RobotArmUnity(vrController);
            robotArmUnity.TresholdPos = 0.5;

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
            }
            
            if (GimbalManager.isGimbalLocked)
            {
                ChangeSprite(GimbalLockSprite, Controller_Disabled);
            }
            else
            {
                ChangeSprite(GimbalLockSprite, Controller_Enabled);
            }

            if (UIOpen)
            {
                if (leftButton.GetStateDown(handType) || robotArmUnity.PosVector.y > robotArmUnity.TresholdPos ||
                    Input.GetKeyDown(KeyCode.UpArrow))
                {
                    MoveOption(-1);

                }
                else if (rightButton.GetStateDown(handType) || robotArmUnity.PosVector.y < -robotArmUnity.TresholdPos ||
                         Input.GetKeyDown(KeyCode.DownArrow))
                {
                    MoveOption(1);
                }

                if (selected == Option.FREEMODE)
                {
                    free_image.color = Color.white;
                    rotate_image.color = Color.gray;
                    move_image.color = Color.gray;
                    Mode_text.text = "FreeMode";
                }
                else if (selected == Option.ROTATEMODE)
                {
                    free_image.color = Color.gray;
                    rotate_image.color = Color.white;
                    move_image.color = Color.gray;
                    Mode_text.text = "RotateMode";
                }
                else if (selected == Option.MOVEMODE)
                {
                    free_image.color = Color.gray;
                    rotate_image.color = Color.gray;
                    move_image.color = Color.white;
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
    }
}