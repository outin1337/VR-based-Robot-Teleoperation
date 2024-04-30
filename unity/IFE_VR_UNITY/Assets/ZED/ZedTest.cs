using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using sl;

public class ZedTest : MonoBehaviour
{
    public sl.ZEDCamera zedCamera = null;
    private bool isZedReady = false;
    private sl.ERROR_CODE err;
    private Quaternion rot;
    private Vector3 pos;

    void Start()
    {
        zedCamera = new sl.ZEDCamera();
        lock (zedCamera.grabLock)
        {
            err = zedCamera.EnableTracking(ref rot, ref pos);
        }
    }

    void Update()
    {
        Debug.Log(err);
    }

    void OnDestroy()
    {
        if (zedCamera != null)
        {
            zedCamera.Close();
        }
    }
}