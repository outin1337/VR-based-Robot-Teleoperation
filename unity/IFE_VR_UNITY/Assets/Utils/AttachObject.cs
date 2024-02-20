using UnityEngine;

public class AttachObject : MonoBehaviour
{
    public Transform targetTransform;
    public Vector3 posOffset;
    public Vector3 rotOffset;

    void Update()
    {
        if (targetTransform != null)
        {
            transform.position = targetTransform.position + posOffset;
            
            Quaternion rotationOffsetQuaternion = Quaternion.Euler(rotOffset);
            transform.rotation = targetTransform.rotation * rotationOffsetQuaternion;
        }
    }
}