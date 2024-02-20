using UnityEngine;

public class MoveObjectFront : MonoBehaviour
{
    public Camera mainCamera;
    public float distanceFromCamera = 0.0f;
    public Vector3 posOffset;
    public Vector3 rotOffset;
    public bool samePos = false;
    
    private void Update()
    {
        Transform cameraTransform = mainCamera.transform;
        if (samePos)
        {
            transform.SetPositionAndRotation(cameraTransform.position, cameraTransform.rotation);
        }
        else
        {
            Quaternion rotationOffsetQuaternion = Quaternion.Euler(rotOffset);
            transform.rotation = cameraTransform.rotation * rotationOffsetQuaternion;

            transform.position = cameraTransform.position + posOffset
                                                          + cameraTransform.forward * distanceFromCamera;
        }
    }
}
