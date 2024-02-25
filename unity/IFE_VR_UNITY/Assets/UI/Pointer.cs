using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Serialization;

public class Pointer : MonoBehaviour
{
    public float length = 5.0f;
    public GameObject m_Dot;
    public VRInputModule m_InputModule;

    private GameObject parent;
    private LineRenderer m_LineRenderer = null;
    private void Awake()
    {
        parent = transform.parent.gameObject;
        m_LineRenderer = GetComponent<LineRenderer>();
    }

    void Update()
    {
        UpdateLine();
    }

    void UpdateLine()
    {
        float targetLength = length;

        RaycastHit hit = CreateRaycast(targetLength);
        Vector3 endPosition = parent.transform.position + parent.transform.forward * targetLength;

        if (hit.collider != null)
            endPosition = hit.point;

        m_Dot.transform.position = endPosition;
        
        m_LineRenderer.SetPosition(0, parent.transform.position);
        m_LineRenderer.SetPosition(1, endPosition);
    }

    RaycastHit CreateRaycast(float length)
    {
        RaycastHit hit;
        Ray ray = new Ray(parent.transform.position, parent.transform.forward);
        Physics.Raycast(ray, out hit, length);
        
        return hit;
    }
}
