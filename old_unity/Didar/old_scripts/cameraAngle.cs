using UnityEngine;

public class cameraAngle : MonoBehaviour
{
    private Vector3 previousRotation;
    private const float rotationThreshold = 20f;
    public socket socketClient;

    private void Start()
    {
        socketClient = GetComponent<socket>();
        previousRotation = transform.rotation.eulerAngles;
    }

    private void Update()
    {
        Vector3 currentRotation = transform.rotation.eulerAngles;

        float deltaYaw = currentRotation.y - previousRotation.y;
        float deltaPitch = currentRotation.x - previousRotation.x;

        if (deltaYaw < -180) deltaYaw += 360;
        if (deltaYaw > 180) deltaYaw -= 360;

        if (deltaPitch < -180) deltaPitch += 360;
        if (deltaPitch > 180) deltaPitch -= 360;

        if (Mathf.Abs(deltaYaw) >= rotationThreshold)
        {
            Debug.Log($"Yaw{deltaYaw}");
            socketClient.SendMessageToServer($"Yaw {deltaYaw}");
            previousRotation = currentRotation;
        }
        if (Mathf.Abs(deltaPitch) >= rotationThreshold)
        {
            Debug.Log($"Pitch: {deltaPitch}");
            socketClient.SendMessageToServer($"Pitch {deltaPitch}");
            previousRotation = currentRotation;
        }
        
    }
}
