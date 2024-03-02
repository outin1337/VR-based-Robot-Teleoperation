using UnityEngine;
using UnityEngine.EventSystems;

public class ButtonEventTest : MonoBehaviour, IPointerClickHandler, IPointerEnterHandler, IPointerExitHandler
{
    public void OnPointerClick(PointerEventData eventData)
    {
        Debug.Log(gameObject.name + " clicked.");
    }

    public void OnPointerEnter(PointerEventData eventData)
    {
        Debug.Log("Pointer entered " + gameObject.name + " area.");
    }

    public void OnPointerExit(PointerEventData eventData)
    {
        Debug.Log("Pointer exited " + gameObject.name + " area.");
    }
}