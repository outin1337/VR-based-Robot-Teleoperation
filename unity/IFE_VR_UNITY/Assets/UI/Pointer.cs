using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.InputSystem;
using UnityEngine.Serialization;
using UnityEngine.UI;
using Valve.VR;

namespace Robot
{
    public class Pointer : MonoBehaviour
    {
        public float length = 5.0f;
        public GameObject m_Dot;
        public Camera camera;
        public SteamVR_Input_Sources m_TargetSource;
        private SteamVR_Action_Boolean m_ClickAction = SteamVR_Actions.default_GrabPinch;

        private LineRenderer m_LineRenderer = null;

        private void Awake()
        {
            m_LineRenderer = GetComponent<LineRenderer>();
        }

        void Update()
        {
            UpdateLine();
        }

        void UpdateLine()
        {
            float targetLength = length;

            PointerEventData pointerData = new PointerEventData(EventSystem.current)
            {
                position = new Vector2(camera.pixelWidth / 2, camera.pixelHeight / 2)
            };
            
            Vector3 endPosition = camera.transform.position + camera.transform.forward * targetLength;

            var results = new List<RaycastResult>();
            EventSystem.current.RaycastAll(pointerData, results);

            foreach (var result in results)
            {
                GameObject obj = result.gameObject;
                if (obj.CompareTag("Btn")) 
                {
                    if (UIManager.UIOpen && (m_ClickAction.GetStateDown(m_TargetSource) || Input.GetKeyDown(KeyCode.Space)))
                        Click(obj, pointerData);
                    
                    Focus(obj, pointerData); 
                    //UnFocus(obj, pointerData);

                }

                endPosition = camera.transform.position + camera.transform.forward * result.distance;
            }

            m_Dot.transform.position = endPosition;
            m_LineRenderer.SetPosition(0, camera.transform.position);
            m_LineRenderer.SetPosition(1, endPosition);
        }

        void Click(GameObject obj, PointerEventData pointerData)
        {
            ExecuteEvents.Execute(obj, pointerData, ExecuteEvents.pointerClickHandler);
        }
        void Focus(GameObject obj, PointerEventData pointerData)
        {
            ExecuteEvents.Execute(obj, pointerData, ExecuteEvents.pointerEnterHandler);
        }
        async Task UnFocus(GameObject obj, PointerEventData pointerData)
        {
            await Task.Delay(100);
            ExecuteEvents.Execute(obj, pointerData, ExecuteEvents.pointerExitHandler);
        }
    }
}
