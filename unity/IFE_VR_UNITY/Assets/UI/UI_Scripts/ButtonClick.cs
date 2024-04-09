using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ButtonClick : MonoBehaviour
{
    public Button button;

    // Start is called before the first frame update
    void Start()
    {
        Color newColor = new Color(Random.value, Random.value, Random.value);
        button.image.color = newColor;

        Debug.LogWarning("Button clicked: " + gameObject.name);
    }

}
