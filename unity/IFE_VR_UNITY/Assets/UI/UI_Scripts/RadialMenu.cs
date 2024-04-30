using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class RadialMenu : MonoBehaviour
{
    public Image Menu;
    public float FillAmount;
    public float radius = 100f;
    TextMeshProUGUI txt;
    public Button[] buttons;
    public Button[] middleButtons;
    public int numberOfButtons;
    public Button[] allButtons;

    void Start()
    {
        /*for (int i = 0; i < transform.childCount; i++)
        {
            allButtons[i] = transform.GetChild(i).GetComponent<Button>();
        }*/
        numberOfButtons = buttons.Length;
        float angleStep = 360f / numberOfButtons;
        float angle = 0f;
        FillAmount = (float)((1.0 / numberOfButtons) - 0.01);

        for (int i = 0; i < numberOfButtons; i++)
        {

            Transform buttonTransform = buttons[i].transform;

            buttonTransform.transform.Rotate(Vector3.forward * (angle + 30f));

            Image img = buttonTransform.GetComponent<Image>();
            img.fillAmount = FillAmount;
            img.alphaHitTestMinimumThreshold = 0.5f;

            RectTransform buttonRectTransform = buttonTransform.GetComponent<RectTransform>();

            buttonRectTransform.sizeDelta = new Vector2(200f, 200f);

            txt = buttonTransform.GetComponentInChildren<TextMeshProUGUI>();
            float newXPosition = 40f;
            float newYPosition = 75f;
            Vector3 newPosition = txt.rectTransform.localPosition;
            newPosition.x = newXPosition;
            newPosition.y = newYPosition;
            txt.rectTransform.localPosition = newPosition;
            txt.rectTransform.Rotate(Vector3.forward, -30f);

            angle += angleStep;
        }
        for (int i = 0; i < middleButtons.Length; i++)
        {
            Transform buttonTransform = middleButtons[i].transform;

            Image img = buttonTransform.GetComponent<Image>();
            img.alphaHitTestMinimumThreshold = 0.5f;
            RectTransform buttonRectTransform = buttonTransform.GetComponent<RectTransform>();
            buttonRectTransform.sizeDelta = new Vector2(165f, 105f);
        }

    }


    private void Update()
    {
        var stepLength = 360f / numberOfButtons;
        var mouseAngle = NormalizeAngle(Vector3.SignedAngle(Vector3.up, Input.mousePosition - transform.position, Vector3.forward) + stepLength / 2f);
        var activeElement = (int)(mouseAngle / stepLength);
        
        Vector2 radiusFromCenter = Input.mousePosition - transform.position;
        
        float absoluteValueRadius = radiusFromCenter.magnitude;
        Debug.Log(radiusFromCenter);
        if (absoluteValueRadius > 65f)
        {
            for (int i = 0; i < numberOfButtons; i++)
            {
                    Transform buttonTransform = buttons[i].transform;
                    Image img = buttonTransform.GetComponent<Image>();
                    ButtonInfo buttonInfo = buttonTransform.GetComponent<ButtonInfo>();

                    if (i == activeElement)
                    {
                        if (img.color == color_normal)
                        {
                            img.color = new Color(1f, 1f, 1f, 0.75f);
                        }
                        if (Input.GetMouseButtonDown(0))
                        {
                            if (img.color == color_selected)
                            {
                                img.color = color_highlighted;
                                buttonInfo.active = false;
                            }
                            else
                            {
                                img.color = color_selected;
                                buttonInfo.active = true;
                            }
                        }


                    }
                    else if (img.color != color_selected)
                        img.color = color_normal;
            }
        }
        else
        {
            int i;
            if (radiusFromCenter.y > 0)
            {
                i = 1;
            }
            else
            {
                i = 0;
            }
            
            Transform buttonTransform = middleButtons[i].transform;
            Image img = buttonTransform.GetComponent<Image>();
            ButtonInfo buttonInfo = buttonTransform.GetComponent<ButtonInfo>();
            
            
            if (img.color == color_normal)
            {
                img.color = new Color(1f, 1f, 1f, 0.75f);
            }
            if (Input.GetMouseButtonDown(0))
            {
                if (img.color == color_selected)
                {
                    img.color = color_highlighted;
                    buttonInfo.active = false;
                }
                else
                {
                    img.color = color_selected;
                    buttonInfo.active = true;
                }
                


            }
            else if (img.color != color_selected)
                img.color = color_normal;
        }
        
    }
    float NormalizeAngle(float a) => (a + 360f) % 360f;

    Color color_normal = new Color(1f, 1f, 1f, 0.5f);
    Color color_highlighted = new Color(1f, 1f, 1f, 0.75f);
    Color color_selected = new Color(0, 200, 0, 0.75f);
}