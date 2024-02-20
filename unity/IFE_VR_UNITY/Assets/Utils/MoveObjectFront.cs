using UnityEngine;

public class MoveObjectFront : MonoBehaviour
{
    public Camera mainCamera;
    public float distanceFromCamera = 0.0f;
    public float horizontalOffset = 0.0f;
    public float verticalOffset = 0.0f;
    public bool isLeftQuad = true;
    public bool samePos = false;
    public bool inverse;
    
    private void Update()
    {
        Transform cameraTransform = mainCamera.transform;
        if (samePos)
        {
            transform.SetPositionAndRotation(cameraTransform.position, cameraTransform.rotation);
        }
        else
        {
            if (inverse)
            {
                transform.rotation = Quaternion.Euler(cameraTransform.rotation.eulerAngles * -1);
            }
            else
            {
                transform.rotation = cameraTransform.rotation;
            }

            Vector3 offsetDirection = isLeftQuad ? -cameraTransform.right : cameraTransform.right;

            transform.position = cameraTransform.position
                                 + cameraTransform.forward * distanceFromCamera
                                 + offsetDirection * horizontalOffset
                                 + cameraTransform.up * verticalOffset;
        }
    }
}
