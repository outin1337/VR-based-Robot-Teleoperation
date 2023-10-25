using UnityEngine;

public class MoveQuadFront : MonoBehaviour
{
    public Camera mainCamera;    // Reference to your main camera
    public float distanceFromCamera = 2.0f;  // How far in front of the camera the quad should be
    public float horizontalOffset = 1.0f;  // How far to the left or right the quad should be
    public bool isLeftQuad = true;  // Whether this script is controlling the left quad

    private void Update()
    {
        // Set the quad's rotation to match the camera's rotation
        transform.rotation = mainCamera.transform.rotation;

        // Calculate the direction to offset the quad (left or right)
        Vector3 offsetDirection = isLeftQuad ? -mainCamera.transform.right : mainCamera.transform.right;

        // Set the quad's position to be in front of the camera based on the desired distance
        // and offset it to the left or right
        transform.position = mainCamera.transform.position
                           + mainCamera.transform.forward * distanceFromCamera
                           + offsetDirection * horizontalOffset;
    }
}
