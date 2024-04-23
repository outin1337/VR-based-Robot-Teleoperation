using System;
using System.Collections.Generic;
using System.Linq;
using System.Net.Sockets;
using System.Text;
using Robot;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.XR;
using System.Threading;

public class GimbalNetwork : MonoBehaviour
{
    private TcpClient client;
    private NetworkStream stream;
    private int port = 9999; // Server port
    private float timeCounter = 0f;
    private bool isDeviceConnected;
    private Vector3 startRotation;
    private bool systemReady = false;
    private List<XRDisplaySubsystem> displaySubsystems;
    private Thread receiveThread;
    private bool isReceiving = true;
    
    public static string commandSend = ""; 
    public string serverIp = "158.39.162.249"; // Server IP address
    public float delay = 0.002f; // 500 frequency
    public GameObject cam;

    void Start()
    {
        displaySubsystems = new List<XRDisplaySubsystem>();
        SubsystemManager.GetInstances<XRDisplaySubsystem>(displaySubsystems);
        
        isDeviceConnected = displaySubsystems.Any(subsystem => subsystem.running && subsystem.displayOpaque);
        
        ConnectToServer();
        //SendCommand("{\"command\": \"CALIBRATE\"}");

        startRotation = cam.transform.rotation.eulerAngles;
        
        receiveThread = new Thread(ReceiveData);
        receiveThread.Start();
    }

    private void Update()
    {
        timeCounter += Time.deltaTime;

        if (commandSend.Equals("CALIBRATE"))
        {
            SendCommand("{\"command\": \"CALIBRATE\"}");
            commandSend = "";
        } else if (commandSend.Equals("UPDATEROTATION"))
        {
            updateStartRotation();
            //SendCommand("{\"command\": \"CALIBRATE\"}");
            commandSend = "";
        }

		if (timeCounter >= delay && !GimbalManager.isGimbalLocked)
        {
            Vector3 temp = cam.transform.rotation.eulerAngles - startRotation;
            // UNITY : Z is ROLL, X is pitch, Y is yaw
            String cmd_str = $"{{\"command\": \"rotate {(int) -temp.z} {(int) temp.x} {(int) -temp.y}\"}}";
            //String cmd_str = $"{{\"command\": \"rotate {0} {(int) -temp.x} {(int) -temp.y}\"}}";
            SendCommand(cmd_str);
            //Debug.Log(temp.ToString());
            Debug.Log(startRotation);
            //Debug.Log(cmd_str);
            timeCounter = 0f;
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
            if (isDeviceConnected)
            {
                //updateStartRotation();
                //systemReady = true;
            }
                
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
        Debug.Log("Startrotation" + startRotation);
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
                // Process received data here
            }
        }
        catch (Exception e)
        {
            Debug.LogError($"Error receiving data from server: {e}");
        }
    }
}