using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using Robot;

public class MousePointer : MonoBehaviour
{
    private HashSet<GameObject> currentTargets = new HashSet<GameObject>();
    private void Update()
    {
        HandleMouseInput();
    }

    private void HandleMouseInput()
    {
        PointerEventData pointerData = new PointerEventData(EventSystem.current)
        {
            position = Input.mousePosition
        };

        List<RaycastResult> raycastResults = new List<RaycastResult>();
        EventSystem.current.RaycastAll(pointerData, raycastResults);
        
        HashSet<GameObject> newTargets = new HashSet<GameObject>();
        
        foreach (var result in raycastResults)
        {
            GameObject obj = result.gameObject;

            newTargets.Add(obj);
            if (UIManager.UIOpen && Input.GetMouseButtonDown(0))
            {
                if(obj.CompareTag("Btn"))
                {
                    //Click(obj, pointerData);
                    Debug.Log(obj.name);
                }
            }
                
            //if (!currentTargets.Contains(obj))
            //    Focus(obj, pointerData);
        }
        
        foreach (var target in currentTargets)
        {
            if (!newTargets.Contains(target))
            {
                UnFocus(target, pointerData);
            }
        }
            
        currentTargets = newTargets;
    }
    
    void Click(GameObject obj, PointerEventData pointerData)
    {
        ExecuteEvents.Execute(obj, pointerData, ExecuteEvents.pointerClickHandler);
    }
    void Focus(GameObject obj, PointerEventData pointerData)
    {
        ExecuteEvents.Execute(obj, pointerData, ExecuteEvents.pointerEnterHandler);
    }
    void UnFocus(GameObject obj, PointerEventData pointerData)
    {
        //await Task.Delay(100);
        ExecuteEvents.Execute(obj, pointerData, ExecuteEvents.pointerExitHandler);
    }
    
}
