using UnityEngine;

public class cameraAngle : MonoBehaviour
{
    private Vector3 previousRotation;
    private const float rotationThreshold = 1.8f;
    private socket socketClient;
    private int min = -7;
    private int max = 7;

    private float deltaYaw, deltaPitch, deltaRoll;

    private void Start()
    {
        socketClient = GetComponent<socket>();
        previousRotation = transform.rotation.eulerAngles;
    }

    private void Update()
    {
        Vector3 currentRotation = transform.rotation.eulerAngles;

        deltaYaw =  (currentRotation.y - previousRotation.y);
        deltaPitch =  (currentRotation.x - previousRotation.x);
        deltaRoll =  (currentRotation.z - previousRotation.z);

        if (deltaYaw < -180) deltaYaw += 360;
        if (deltaYaw > 180) deltaYaw -= 360;


        if (deltaPitch < -180) deltaPitch += 360;
        if (deltaPitch > 180) deltaPitch -= 360;

        if (deltaRoll < -180) deltaRoll += 360;
        if (deltaRoll > 180) deltaRoll -= 360;

        if (Mathf.Abs(deltaYaw) >= rotationThreshold)
        { 
            Debug.Log($"camera yaw {minmax(deltaYaw, -5, 5)} deg");
            socketClient.SendMessageToServer($"camera yaw {minmax(deltaYaw, min, max)} deg");
            previousRotation = currentRotation;
        }
        if (Mathf.Abs(deltaPitch) >= rotationThreshold)
        {
            Debug.Log($"camera pitch {minmax(deltaPitch, -5, 5)} deg");
            socketClient.SendMessageToServer($"camera pitch {minmax(deltaPitch, min, max)} deg");
            previousRotation = currentRotation;
        }
        if (Mathf.Abs(deltaRoll) >= rotationThreshold)
        {
            Debug.Log($"camera roll {minmax(deltaRoll, -5, 5)} deg");
            socketClient.SendMessageToServer($"camera roll {minmax(deltaRoll * -1, min, max)} deg");
            previousRotation = currentRotation;
        }
        
    }

    private float minmax(float value, float min=-5, float max=5)
    {
        if (value > max)
        {
            return max;
        }
        else if(value < min)
        {
            return min;
        }
        return value;
    }
}
