using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class UIButtonClickDetector : MonoBehaviour, IPointerClickHandler
{
    public string buttonName;

    // Called when the button is clicked
    public void OnPointerClick(PointerEventData eventData)
    {
        Debug.Log("Clicked on button: " + buttonName);

        // You can perform further actions based on the button clicked
        // For example, call a function to handle button click events
        HandleButtonClick(buttonName);
    }

    // Function to handle button click events
    void HandleButtonClick(string buttonName)
    {
        // Implement your logic here based on the button clicked
        switch (buttonName)
        {
            case "Button1":
                // Do something for Button1
                break;
            case "Button2":
                // Do something for Button2
                break;
            // Add more cases for other buttons if needed
            default:
                break;
        }
    }
}