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
        if (tcpListener.Pending())
        {
            {
                Debug.Log("Accepted new client");
                string messageToSend = string.Format(CultureInfo.InvariantCulture, "{0:F2},{1:F2},{2:F2},{3:F2}", "r",
                    vectorToSend.x, vectorToSend.y, vectorToSend.z);
                byte[] messageBytes = Encoding.ASCII.GetBytes(messageToSend);
                networkStream.Write(messageBytes, 0, messageBytes.Length);
                Debug.Log("Sent: " + messageToSend);
            }
        }
        else
        {
            Debug.LogWarning("No client connection pending.");
        }
    }
}