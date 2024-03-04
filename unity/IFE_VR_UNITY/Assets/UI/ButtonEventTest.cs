using System;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace Robot
{
    public class ButtonEventTest : MonoBehaviour, IPointerClickHandler, IPointerEnterHandler, IPointerExitHandler
    {
        public void OnPointerClick(PointerEventData eventData)
        {
            //UIManager.ToggleAxis(gameObject.name);
            EventSystem.current.SetSelectedGameObject(null);
        }
        
        public void OnPointerEnter(PointerEventData data)
        {
            
        }
        
        public void OnPointerExit(PointerEventData data)
        {
        }
    }
}
