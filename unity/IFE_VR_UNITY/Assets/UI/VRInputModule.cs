using System.Collections;
using System.Collections.Generic;
using System.Drawing;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.Networking;
using UnityEngine.UI;
using Valve.VR;

public class VRInputModule : BaseInputModule
{
    public Camera m_Camera;
    public SteamVR_Input_Sources m_TargetSource;
    public SteamVR_Action_Boolean m_ClickAction;

    private GameObject m_CurrentObject;
    private PointerEventData m_Data;

    protected override void Awake()
    {
        base.Awake();

        m_Data = new PointerEventData(eventSystem);
    }

    public override void Process()
    {
        m_Data.Reset();
        m_Data.position = new Vector2(m_Camera.pixelWidth/2, m_Camera.pixelHeight/2);
        
        eventSystem.RaycastAll(m_Data, m_RaycastResultCache);
        m_Data.pointerCurrentRaycast = FindFirstRaycast(m_RaycastResultCache);
        m_CurrentObject = m_Data.pointerCurrentRaycast.gameObject;
        
        m_RaycastResultCache.Clear();
        
        HandlePointerExitAndEnter(m_Data, m_CurrentObject);
        
        if(/*m_ClickAction.GetStateDown(m_TargetSource) ||*/ Input.GetKey(KeyCode.T))
            ProcessPress(m_Data);
        
        /*
        if(m_ClickAction.GetStateUp(m_TargetSource))
            ProcessRelease(m_Data);

        Button btn = m_Data.pointerCurrentRaycast.gameObject.GetComponent<Button>();
        if(btn != null)
            btn.onClick.Invoke();
        */
        
    }

    public PointerEventData GetData()
    {
        return m_Data;
    }

    private void ProcessPress(PointerEventData data)
    {
        Button btn = data.pointerCurrentRaycast.gameObject.GetComponent<Button>();
        if(btn != null)
            btn.onClick.Invoke();
    }
    
    private void ProcessRelease(PointerEventData data)
    {
        
    }
}
