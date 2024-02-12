using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Valve.VR;
using Valve.VR.InteractionSystem;

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
    private static bool UIOpen = false;
    private GameObject settings;

    public SteamVR_Input_Sources handType; 
    public SteamVR_Behaviour_Pose controllerPos;
    private Vector3 currentControllerPos, previousControllerPos, deltaControllerPos;
    public SteamVR_Action_Boolean menuButton;

    public Sprite Controller_Enabled, Controller_Disabled;
    private double treshold = 0.5;

    private Image free_image, rotate_image, move_image;
    private Image VR_Controller;
    private TMPro.TextMeshProUGUI Mode_text;
    private bool controllerExist;


    void Start()
    {
        settings = ui.transform.Find("Settings").gameObject;
        settings.SetActive(UIOpen);

        GameObject title = ui.transform.Find("Settings/Title").gameObject;
        GameObject FreeMode = ui.transform.Find("Settings/FreeMode").gameObject;
        GameObject RotateMode = ui.transform.Find("Settings/RotateMode").gameObject;
        GameObject MoveMode = ui.transform.Find("Settings/MoveMode").gameObject;

        free_image = FreeMode.GetComponent<Image>();
        rotate_image = RotateMode.GetComponent<Image>();
        move_image = MoveMode.GetComponent<Image>();

        GameObject VRController = ui.transform.Find("Status/VR_Controller").gameObject;
        GameObject ModeText = ui.transform.Find("Status/Mode").gameObject;

        VR_Controller = VRController.GetComponent<Image>();
        Mode_text = ModeText.GetComponent<TMPro.TextMeshProUGUI>();

        VR_Controller.sprite = Controller_Disabled;

        controllerPos = GetComponent<SteamVR_Behaviour_Pose>();
        controllerExist = controllerPos != null;

        if (controllerExist)
        {
            currentControllerPos = controllerPos.transform.position;
            previousControllerPos = controllerPos.transform.position;
        }
    }

    void Update()
    {

        if (menuButton.GetStateDown(handType) || Input.GetKeyDown(KeyCode.Escape))
        {
            Toggle();
        }

        if (UIOpen)
        {

            currentControllerPos = controllerExist ? controllerPos.transform.position : Vector3.zero;
            deltaControllerPos = controllerExist ? currentControllerPos - previousControllerPos : Vector3.zero;
            

            if (deltaControllerPos.y > treshold || Input.GetKeyDown(KeyCode.UpArrow)) 
            {
                MoveOption(-1);
                ChangeSprite(VR_Controller, Controller_Enabled);
                
            }
            else if (deltaControllerPos.y < -treshold || Input.GetKeyDown(KeyCode.DownArrow))
            {
                MoveOption(1);
                ChangeSprite(VR_Controller, Controller_Enabled);
            } 
            else 
            {
                ChangeSprite(VR_Controller, Controller_Disabled);
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

            previousControllerPos = controllerExist ? controllerPos.transform.position : Vector3.zero;
        }
    }
    
    void MoveOption(int direction)
    {
        int newIndex = (int)selected + direction;
        if (newIndex >= 0 && newIndex < Enum.GetNames(typeof(Option)).Length)
        {
            selected = (Option)newIndex;
        }
    }

    void setOption(Option option)
    {
        selected = option;
    }

    void ChangeSprite(Image image, Sprite sprite)
    {
        image.sprite = sprite;
    }

    public void ClickFree()
    {
        setOption(Option.FREEMODE);
    }

    public void ClickRotate()
    {
        setOption(Option.ROTATEMODE);
    }

    public void ClickMove()
    {
        setOption(Option.MOVEMODE);
    }

    public void Toggle()
    {
        settings.SetActive(!UIOpen);
        UIOpen = !UIOpen;
    }
}
