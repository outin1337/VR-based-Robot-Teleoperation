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
    public static bool PosX = true, PosY = true, PosZ = true, RotX = true, RotY = true, RotZ = true;
    public GameObject X, Y, Z, RX, RY, RZ;
    public Button[] buttons;
    public int numberOfButtons;

    void Start()
    {
        for (int i = 0; i < transform.childCount; i++)
        {
            buttons[i] = transform.GetChild(i).GetComponent<Button>();
        }
        int numberOfButtons = buttons.Length;
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
            float newXPosition = 85f;
            Vector3 newPosition = txt.rectTransform.localPosition;
            newPosition.x = newXPosition;
            txt.rectTransform.localPosition = newPosition;
            txt.rectTransform.Rotate(Vector3.forward, 90f);

            angle += angleStep;
        }
    }


    private void Update()
    {
        Debug.Log(numberOfButtons);
        var stepLength = 360f / numberOfButtons;
        var mouseAngle = NormalizeAngle(Vector3.SignedAngle(Vector3.up, Input.mousePosition - transform.position, Vector3.forward) + stepLength / 2f);
        var activeElement = (int)(mouseAngle / stepLength);

        for (int i = 0; i < numberOfButtons; i++)
        {
            Transform buttonTransform = buttons[i].transform;
            Image img = buttonTransform.GetComponent<Image>();

            if (i == activeElement)
            {
                img.color = new Color(1f, 1f, 1f, 0.75f);
                if (Input.GetMouseButtonDown(0))
                {
                    img.color = new Color(0, 255, 0, 0.75f);
                }
            }
            else
                img.color = new Color(1f, 1f, 1f, 0.5f);



        }
    }
    float NormalizeAngle(float a) => (a + 360f) % 360f;

    Color color_normal = new Color(1f, 1f, 1f, 0.5f);
    Color color_highlighted = new Color(1f, 1f, 1f, 0.75f);
    Color color_selected = new Color(0, 255, 0, 1f);
    private void SetColor(GameObject obj, bool active)
    {
        Image image = obj.GetComponent<Image>();
        if (active)
            image.color = color_selected;
        else
            image.color = color_highlighted;
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
            SetColor(Y, PosY);
        }
        else if (axis.Equals("Z"))
        {
            PosZ = !PosZ;
            SetColor(Z, PosZ);
        }
        else if (axis.Equals("RX"))
        {
            RotX = !RotX;
            SetColor(RX, RotX);
        }
        else if (axis.Equals("RY"))
        {
            RotY = !RotY;
            SetColor(RY, RotY);
        }
        else if (axis.Equals("RZ"))
        {
            RotZ = !RotZ;
            SetColor(RZ, RotZ);
        }
        else if (axis.Equals("RESET"))
        {
            PosX = true;
            PosY = true;
            PosZ = true;
            RotX = true;
            RotY = true;
            RotZ = true;
            SetColor(X, true);
            SetColor(Y, true);
            SetColor(Z, true);
            SetColor(RX, true);
            SetColor(RY, true);
            SetColor(RZ, true);
        }
    }
}