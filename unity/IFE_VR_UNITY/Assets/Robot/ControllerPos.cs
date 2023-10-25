using UnityEngine;

public class ControllerPos : MonoBehaviour
{
    private Vector3 lastPosition;
    private Vector3 previousRotation;

    private Vector3 positionDelta;
    private Vector3 rotationDeltaEuler;

    private const float positionThreshold = 100f;  // Threshold for position change
    private const float rotationThreshold = 20f;  // Threshold for rotation change in degrees

    private void Start()
    {
        lastPosition = transform.position;
        previousRotation = transform.rotation.eulerAngles;
    }

    private void Update()
    {
        Vector3 currentRotation = transform.rotation.eulerAngles;

        int deltaX = (int)(currentRotation.y - previousRotation.y);
        int deltaY = (int)(currentRotation.z - previousRotation.z);
        int deltaZ = (int)(currentRotation.y - previousRotation.y);

        if (deltaX < -180) deltaX += 360;
        if (deltaX > 180) deltaX -= 360;

        if (deltaY < -180) deltaY += 360;
        if (deltaY > 180) deltaY -= 360;

        if (deltaZ < -180) deltaZ += 360;
        if (deltaZ > 180) deltaZ -= 360;

        if (Mathf.Abs(deltaX) >= rotationThreshold)
        {
            Debug.Log($"rx {deltaX} deg");
            //socketClient.SendMessageToServer($"camera yaw {deltaX} deg");
            previousRotation = currentRotation;
        }
        if (Mathf.Abs(deltaY) >= rotationThreshold)
        {
            Debug.Log($"ry {deltaY} deg");
            //socketClient.SendMessageToServer($"camera pitch {deltaY} deg");
            previousRotation = currentRotation;
        }
        if (Mathf.Abs(deltaZ) >= rotationThreshold)
        {
            Debug.Log($"rz {deltaZ} deg");
           // socketClient.SendMessageToServer($"camera roll {deltaZ} deg");
            previousRotation = currentRotation;
        }
    }
}
