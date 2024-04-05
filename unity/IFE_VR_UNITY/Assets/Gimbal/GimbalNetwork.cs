using System;
using System.Net.Sockets;
using System.Text;
using UnityEngine;

public class GimbalNetwork : MonoBehaviour
{
    private TcpClient client;
    private NetworkStream stream;
    private string serverIp = "192.168.50.140"; // Server IP address
    private int port = 9999; // Server port

    void Start()
    {
        ConnectToServer();
        SendCommand("{\"command\": \"CALIBRATE\"}");
        SendCommand("{\"command\": \"GOTOZERO\"}");
    }

    void ConnectToServer()
    {
        try
        {
            client = new TcpClient(serverIp, port);
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
        if (stream != null) stream.Close();
        if (client != null) client.Close();
        Debug.Log("Disconnected from server");
    }
}
