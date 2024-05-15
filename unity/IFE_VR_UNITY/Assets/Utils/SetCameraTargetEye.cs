using UnityEngine;

public class SetCameraTargetEye : MonoBehaviour
{
    public Camera targetCamera;
    public string targetEye; // "Left" or "Right"

    void Start()
    {
        if (targetCamera != null)
        {
            Camera.StereoscopicEye eye;
            if (System.Enum.TryParse(targetEye, out eye))
            {
                switch (eye)
                {
                    case Camera.StereoscopicEye.Left:
                        targetCamera.stereoTargetEye = StereoTargetEyeMask.Left;
                        break;
                    case Camera.StereoscopicEye.Right:
                        targetCamera.stereoTargetEye = StereoTargetEyeMask.Right;
                        break;
                    default:
                        Debug.LogError("Invalid target eye value");
                        break;
                }
            }
            else
            {
                Debug.LogError("Failed to parse target eye value");
            }
        }
        else
        {
            Debug.LogError("Target camera is not assigned");
        }
    }
}