using UnityEngine;

public class cameraAngle : MonoBehaviour
{
    private Vector3 previousRotation;
    private const float rotationThreshold = 5f;
    public socket socketClient;

    private void Start()
    {
        socketClient = GetComponent<socket>();
        previousRotation = transform.rotation.eulerAngles;
    }

    private void Update()
    {
        Vector3 currentRotation = transform.rotation.eulerAngles;

        int deltaYaw = (int) (currentRotation.y - previousRotation.y);
        int deltaPitch = (int) (currentRotation.x - previousRotation.x);
        int deltaRoll = (int) (currentRotation.z - previousRotation.z);

        if (deltaYaw < -180) deltaYaw += 360;
        if (deltaYaw > 180) deltaYaw -= 360;

        if (deltaPitch < -180) deltaPitch += 360;
        if (deltaPitch > 180) deltaPitch -= 360;

        if (deltaRoll < -180) deltaRoll += 360;
        if (deltaRoll > 180) deltaRoll -= 360;

        if (Mathf.Abs(deltaYaw) >= rotationThreshold)
        { 
            Debug.Log($"camera yaw {deltaYaw} deg");
            socketClient.SendMessageToServer($"camera yaw {deltaYaw} deg");
            previousRotation = currentRotation;
        }
        if (Mathf.Abs(deltaPitch) >= rotationThreshold)
        {
            Debug.Log($"camera pitch {deltaPitch} deg");
            socketClient.SendMessageToServer($"camera pitch {deltaPitch} deg");
            previousRotation = currentRotation;
        }
        if (Mathf.Abs(deltaRoll) >= rotationThreshold)
        {
            Debug.Log($"camera roll {deltaRoll} deg");
            socketClient.SendMessageToServer($"camera roll {deltaRoll} deg");
            previousRotation = currentRotation;
        }
        
    }
}
