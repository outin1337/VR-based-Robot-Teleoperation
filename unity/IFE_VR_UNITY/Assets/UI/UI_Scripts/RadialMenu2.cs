using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class RadialMenu2 : MonoBehaviour
{
    public Image Menu;
    public float FillAmount;
    public float radius = 100f;
    TextMeshProUGUI txt;

    void Start()
    {

        int numberOfButtons = transform.childCount;
        float angleStep = 360f / numberOfButtons;
        float angle = 0f;
        FillAmount = (float)((1.0 / numberOfButtons) - 0.01);

        for (int i = 0; i < numberOfButtons; i++)
        {

            Transform buttonTransform = transform.GetChild(i);

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
        var stepLength = 360f / transform.childCount;
        var mouseAngle = NormalizeAngle(Vector3.SignedAngle(Vector3.up, Input.mousePosition - transform.position, Vector3.forward) + stepLength / 2f);
        var activeElement = (int)(mouseAngle / stepLength);
        
        for (int i = 0; i < transform.childCount; i++)
        {
            Transform buttonTransform = transform.GetChild(i);
            Image img = buttonTransform.GetComponent<Image>();

            if (i == activeElement)
                img.color = new Color(1f, 1f, 1f, 0.75f);
            else
                img.color = new Color(1f, 1f, 1f, 0.5f);
            

        }
        float NormalizeAngle(float a) => (a + 360f) % 360f;
    }
}
