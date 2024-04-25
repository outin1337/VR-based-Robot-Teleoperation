/*using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using sl;

public class ZedTest : MonoBehaviour
{
    private ZEDCamera zedCamera;
    private bool isZedReady = false;

    void Start()
    {
        zedCamera = new ZEDCamera();
        if (zedCamera != null)
        {
            sl.ERROR_CODE err = zedCamera.Open();
            if (err == sl.ERROR_CODE.SUCCESS)
            {
                isZedReady = true;
            }
        }
    }

    void Update()
    {
        if (isZedReady)
        {
            if (zedCamera.IsCameraReady)
            {
                sl.IMUData imuData = new sl.IMUData();
                sl.ERROR_CODE imuStatus = zedCamera.GetInternalSensorsData(ref imuData, sl.TIME_REFERENCE.CURRENT);
                
                if (imuStatus == sl.ERROR_CODE.SUCCESS)
                {
                    Debug.Log("Orientation: " + imuData.pose.getOrientation());
                    Debug.Log("Angular Velocity: " + imuData.angularVelocity);
                    Debug.Log("Linear Acceleration: " + imuData.linearAcceleration);
                }
            }
        }
    }

    void OnDestroy()
    {
        if (zedCamera != null)
        {
            zedCamera.Close();
        }
    }
}*/