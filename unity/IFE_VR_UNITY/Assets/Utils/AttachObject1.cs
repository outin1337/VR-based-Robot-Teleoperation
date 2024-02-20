using UnityEngine;

public class AttachObject1 : MonoBehaviour
{
    public Transform targetTransform;
    public Vector3 posOffset;
    public Vector3 rotOffset;

    void Update()
    {
        if (targetTransform != null)
        {
            transform.position = targetTransform.position + posOffset;
        }
    }
}