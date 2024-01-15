using System;
using UnityEngine;
using System.Net;
using System.Net.Sockets;
using System.Text;
using System.Globalization;
using System.Threading.Tasks;


public class Socket_robot_arm
{
    private IPAddress robotIP = IPAddress.Parse("158.39.163.5");
    private int port = 30002;
    private TcpListener tcpListener;
    private TcpClient connectedClient;
    private NetworkStream networkStream;
    private bool boolSocket = false;

    public async Task StartListenerAsync()
    {
        tcpListener = new TcpListener(robotIP, port);
        tcpListener.Start();
        await WaitForClientConnectAsync();
    }

    private async Task WaitForClientConnectAsync()
    {
        connectedClient = await tcpListener.AcceptTcpClientAsync();
        networkStream = connectedClient.GetStream();
        Debug.Log("Client connected");
        boolSocket = true;

    }


    public bool clientPending()
    {
        if (boolSocket)
        {
            return tcpListener.Pending();
        }
        else
        {
            return false;
        }
    }

    public void SendMessageToClient(Vector3 vectorToSend)
    {
        string messageToSend = string.Format(CultureInfo.InvariantCulture, "({0:F4},{1:F4},{2:F4})", vectorToSend.x, vectorToSend.y, vectorToSend.z);
        byte[] messageBytes = Encoding.ASCII.GetBytes(messageToSend);
        networkStream.Write(messageBytes, 0, messageBytes.Length);
        Debug.Log("Sent: " + messageToSend);
    }

    public async Task<string> ReadMessageFromClientAsync()
    {
        byte[] buffer = new byte[1024];
        int bytesRead;
        
        bytesRead = await networkStream.ReadAsync(buffer, 0, buffer.Length);
         
        if (bytesRead > 0)
        {
            string message = Encoding.ASCII.GetString(buffer, 0, bytesRead);
            Debug.Log(message);
            return message;
        }

        return "";
    }
        
    public void CloseConnection()
    {
        if (networkStream != null)
        {
            try
            {
                networkStream.Close();
            }
            catch (Exception e)
            {
                Debug.LogError("Error closing network stream: " + e.Message);
            }
        }

        if (connectedClient != null)
        {
            try
            {
                connectedClient.Close();
            }
            catch (Exception e)
            {
                Debug.LogError("Error closing TcpClient: " + e.Message);
            }
        }
    }

    public void StopListener()
    {
        if (tcpListener != null)
        {
            try
            {
                tcpListener.Stop();
            }
            catch (Exception e)
            {
                Debug.LogError("Error stopping TcpListener: " + e.Message);
            }
        }
    }
}