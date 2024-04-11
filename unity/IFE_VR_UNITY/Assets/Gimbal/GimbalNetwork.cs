using System;
using System.Net.Sockets;
using System.Text;
using Unity.VisualScripting;
using UnityEngine;

public class GimbalNetwork : MonoBehaviour
{
    private TcpClient client;
    private NetworkStream stream;
    private int port = 9999; // Server port
    private float timeCounter = 0f;
    private Vector3 startRotation;
    
    public string serverIp = "158.39.162.249"; // Server IP address
    public float delay = 0.5f; // Delay in seconds
    public GameObject cam;

    void Start()
    {
        ConnectToServer();
        startRotation = cam.transform.rotation.eulerAngles;
        //SendCommand("{\"command\": \"CALIBRATE\"}");
        //SendCommand("{\"command\": \"GOTOZERO\"}");
    }

    private void Update()
    {
        timeCounter += Time.deltaTime;

        if (timeCounter >= delay)
        {
            Vector3 temp = cam.transform.rotation.eulerAngles - startRotation;
            String cmd_str = $"{{\"command\": \"rotate {(int) temp.z} {(int) temp.x} {(int) temp.y}\"}}";
            SendCommand(cmd_str);
            Debug.Log(temp.ToString());
            Debug.Log(cmd_str);
            timeCounter = 0f;
        }
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

            // Receive response
            byte[] bytesToRead = new byte[client.ReceiveBufferSize];
            int bytesRead = stream.Read(bytesToRead, 0, client.ReceiveBufferSize);
            string response = Encoding.ASCII.GetString(bytesToRead, 0, bytesRead);
            Debug.Log($"Server response: {response}");
        }
        catch (Exception e)
        {
            Debug.LogError($"Error sending command to server: {e}");
        }
    }

    void OnDestroy()
    {
        SendCommand("{\"command\": \"EXIT\"}");
        if (stream != null) stream.Close();
        if (client != null) client.Close();
        Debug.Log("Disconnected from server");
    }
}
