using UnityEngine;
using UnityEngine.UI;
using System.Collections.Generic;

public class ChangeBtnColor : MonoBehaviour
{
    public List<Button> buttons;
    private Dictionary<Button, bool> buttonPressedState = new Dictionary<Button, bool>();

    void Start()
    {
        foreach (Button btn in buttons)
        {
            buttonPressedState.Add(btn, false);
            btn.onClick.AddListener(() => ChangeColor(btn));
        }

    }

    void ChangeColor(Button btn)
    {
        buttonPressedState[btn] = !buttonPressedState[btn];

        ColorBlock cb = btn.colors;

        if (buttonPressedState[btn])
        {
            cb.normalColor = Color.red;
        }
        else
        {
            cb.normalColor = Color.green;
        }
        
        btn.colors = cb;
    }
}


