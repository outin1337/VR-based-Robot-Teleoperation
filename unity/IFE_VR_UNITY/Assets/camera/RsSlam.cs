using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Intel.RealSense;
using Valve.VR;

public class RsSlam : MonoBehaviour
{
    public GameObject pointCloudPrefab;
    public int numberOfPointClouds  = 5;
    public int distance = 10;
    
    private List<GameObject> pointClouds = new List<GameObject>();
    private Vector3 originPoint;
    private float lastYaw = 0f;
    private float yawThreshold = 45;
    private GameObject rsDevice;
    
    void Start()
    {
        originPoint = transform.position;
        rsDevice = GameObject.Find("RsDevice");

        if (!RsDevice.HasCamera())
            this.enabled = false;
    }
    
    void Update()
    {
        float currentYaw = transform.eulerAngles.y;
        if (Mathf.Abs(currentYaw - lastYaw) >= yawThreshold && pointClouds.Count < numberOfPointClouds)
        {
            if (!PointCloudExists(currentYaw))
            {
                GameObject newPointCloud = Instantiate(pointCloudPrefab);
                newPointCloud.transform.position = originPoint + (Quaternion.Euler(0, currentYaw, 0) * Vector3.forward) * distance;
                newPointCloud.transform.LookAt(originPoint);
                
                if (rsDevice != null)
                {
                    newPointCloud.transform.SetParent(rsDevice.transform, false);
                }
                
                pointClouds.Add(newPointCloud);
                
                while (pointClouds.Count > numberOfPointClouds)
                {
                    GameObject toRemove = pointClouds[0];
                    pointClouds.RemoveAt(0);
                    Destroy(toRemove);
                }
            }
            lastYaw = currentYaw;
        }
    }

    
    bool PointCloudExists(float yaw)
    {
        foreach (GameObject pointCloud in pointClouds)
        {
            if (Mathf.Abs(yaw - pointCloud.transform.eulerAngles.y) < yawThreshold)
            {
                return true;
            }
        }
        return false;
    }
}
