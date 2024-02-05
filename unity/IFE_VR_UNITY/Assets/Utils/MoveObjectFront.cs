using UnityEngine;

public class MoveObjectFront : MonoBehaviour
{
    public Camera mainCamera;
    public float distanceFromCamera = 2.0f;
    public float horizontalOffset = 1.0f;
    public bool isLeftQuad = true; 

    private void Update()
    {
        transform.rotation = mainCamera.transform.rotation;

        Vector3 offsetDirection = isLeftQuad ? -mainCamera.transform.right : mainCamera.transform.right;

        transform.position = mainCamera.transform.position
                           + mainCamera.transform.forward * distanceFromCamera
                           + offsetDirection * horizontalOffset;
    }
}
