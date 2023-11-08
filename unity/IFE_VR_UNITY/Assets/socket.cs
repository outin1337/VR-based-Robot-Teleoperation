using UnityEngine;
using System.Net.Sockets;
using System.Text;

public class socket : MonoBehaviour
{
    private const string serverIP = "158.39.162.184"; // IP of the server (use "127.0.0.1" for localhost)
    private const int serverPort = 8083; // Port of the server


    private TcpClient clientSocket;

    void Start()
    {
        clientSocket = new TcpClient();
        // Try to connect to the server
        try
        {
            clientSocket.Connect(serverIP, serverPort);
            Debug.Log("Connected to the server.");
            // Example: Send a message to the server after connecting
            SendMessageToServer("Hello, server, This is Unity Speaking you f");
        }
        catch (SocketException ex)
        {
            Debug.LogError("SocketException: " + ex.ToString());
        }
    }

    public void SendMessageToServer(string message)
    {
        if (clientSocket == null || !clientSocket.Connected)
        {
            Debug.LogWarning("Not connected to the server.");
            return;
        }

        // Convert the message string to byte array and send
        byte[] data = Encoding.ASCII.GetBytes(message);
        clientSocket.GetStream().Write(data, 0, data.Length);

    }

    private void OnDestroy()
    {
        // Close the socket when the script is destroyed or when you're done with it
        if (clientSocket != null)
        {
            clientSocket.Close();
        }
    }
}