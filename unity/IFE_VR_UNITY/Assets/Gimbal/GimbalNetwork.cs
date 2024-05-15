using System;
using System.Collections.Generic;
using System.Linq;
using System.Net.Sockets;
using System.Text;
using Robot;
using UnityEngine;
using UnityEngine.XR;
using System.Threading;

public class GimbalNetwork : MonoBehaviour
{
    private TcpClient client;
    private NetworkStream stream;
    private int port = 9999;
    private float timeCounter = 0f;
    private bool isDeviceConnected;
    private Vector3 startRotation, previousRotation, lockedRotation;
    private float rotationThreshold = 1.8f;
    private float scalingFactor = 10f; // Scaling factor to amplify rotation values
    private List<XRDisplaySubsystem> displaySubsystems;
    private Thread receiveThread;
    private bool isReceiving = true;
    private GameObject sensorData;

    public static string commandSend = "";
    public string serverIp = "158.39.162.249";
    public float delay = 0.002f;
    public GameObject cam;

    void Start()
    {
        sensorData = GameObject.Find("GimbalManager/SensorData");
        displaySubsystems = new List<XRDisplaySubsystem>();
        SubsystemManager.GetInstances<XRDisplaySubsystem>(displaySubsystems);
        isDeviceConnected = displaySubsystems.Any(subsystem => subsystem.running && subsystem.displayOpaque);
        ConnectToServer();
        startRotation = cam.transform.rotation.eulerAngles;
        previousRotation = startRotation;
        lockedRotation = startRotation;
        receiveThread = new Thread(ReceiveData);
        receiveThread.Start();
    }

    private void Update()
    {
        timeCounter += Time.deltaTime;
        if (commandSend == "CALIBRATE")
        {
            SendCommand("{\"command\": \"CALIBRATE\"}");
            commandSend = "";
        }
        else if (commandSend == "UPDATEROTATION")
        {
            updateStartRotation();
            commandSend = "";
        }

        if (timeCounter >= delay)
        {
            if (!GimbalManager.isGimbalLocked)
            {
                SendRotationDifferences();
                timeCounter = 0f;
            }
            else
            {
                lockedRotation = cam.transform.rotation.eulerAngles;
                previousRotation = lockedRotation;
            }
        }
        isDeviceConnected = displaySubsystems.Any(subsystem => subsystem.running && subsystem.displayOpaque);
    }

    void ConnectToServer()
    {
        client = new TcpClient();
        var result = client.BeginConnect(serverIp, port, null, null);
        var success = result.AsyncWaitHandle.WaitOne(TimeSpan.FromSeconds(5));
        if (!success)
        {
            Debug.LogError("Connection to server timed out.");
            return;
        }

        try
        {
            client.EndConnect(result);
            stream = client.GetStream();
            Debug.Log("Connected to server");
        }
        catch (Exception e)
        {
            Debug.LogError($"Cannot connect to server: {e}");
        }
    }

    void SendCommand(string jsonCommand)
    {
        if (stream == null)
        {
            Debug.LogError("Not connected to server");
            return;
        }

        try
        {
            byte[] bytesToSend = Encoding.ASCII.GetBytes(jsonCommand);
            stream.Write(bytesToSend, 0, bytesToSend.Length);
        }
        catch (Exception e)
        {
            Debug.LogError($"Error sending command to server: {e}");
        }
    }

    public void updateStartRotation()
    {
        startRotation = cam.transform.rotation.eulerAngles;
        Debug.Log("Startrotation updated: " + startRotation);
    }

    void SendRotationDifferences()
    {
        Vector3 currentRotation = cam.transform.rotation.eulerAngles;
        Vector3 rotationDelta = currentRotation - previousRotation;
        rotationDelta = AdjustRotationDelta(rotationDelta) * scalingFactor; // Apply scaling factor
        if (Mathf.Abs(rotationDelta.x) >= rotationThreshold ||
            Mathf.Abs(rotationDelta.y) >= rotationThreshold ||
            Mathf.Abs(rotationDelta.z) >= rotationThreshold)
        {
            RotateCmd(rotationDelta.x, rotationDelta.y, rotationDelta.z);
            previousRotation = currentRotation;
        }
    }

    Vector3 AdjustRotationDelta(Vector3 delta)
    {
        if (delta.x > 180) delta.x -= 360;
        else if (delta.x < -180) delta.x += 360;
        if (delta.y > 180) delta.y -= 360;
        else if (delta.y < -180) delta.y += 360;
        if (delta.z > 180) delta.z -= 360;
        else if (delta.z < -180) delta.z += 360;
        return delta;
    }

    private void RotateCmd(float x, float y, float z)
    {
        string cmd_str = $"{{\"command\": \"rotate {(int)z} {(int)x} {(int)y}\"}}";
        SendCommand(cmd_str);
    }

    void OnDestroy()
    {
        SendCommand("{\"command\": \"EXIT\"}");
        if (stream != null) stream.Close();
        if (client != null) client.Close();
        Debug.Log("Disconnected from server");
    }

    private void ReceiveData()
    {
        try
        {
            while (isReceiving)
            {
                byte[] bytesToRead = new byte[client.ReceiveBufferSize];
                int bytesRead = stream.Read(bytesToRead, 0, client.ReceiveBufferSize);
                string response = Encoding.ASCII.GetString(bytesToRead, 0, bytesRead);
                Debug.Log($"Server response: {response}");
            }
        }
        catch (Exception e)
        {
            Debug.LogError($"Error receiving data from server: {e}");
        }
    }
}
