using UnityEngine;
using System.Net;
using System.Net.Sockets;
using System.Text;
using System.Globalization;


public class Socket_robot_arm : MonoBehaviour
{
    private IPAddress robotIP = IPAddress.Parse("158.39.163.5");
    private int port = 30002;
    private TcpListener tcpListener;

    void Start()
    {
        tcpListener = new TcpListener(robotIP, port);
        tcpListener.Start();
    }

    void OnDestroy()
    {
        tcpListener.Stop();
    }

    public bool clientPending()
    {
        return tcpListener.Pending();
    }

    public void SendMessageToClient(Vector3 vectorToSend)
    {
        if (tcpListener.Pending())
        {
            using (TcpClient tcpClient = tcpListener.AcceptTcpClient())
            using (NetworkStream stream = tcpClient.GetStream())
            {


                Debug.Log("Accepted new client");
                string messageToSend = string.Format(CultureInfo.InvariantCulture, "{0:F2},{1:F2},{2:F2},{3:F2}", "r", vectorToSend.x, vectorToSend.y, vectorToSend.z);
                byte[] messageBytes = Encoding.ASCII.GetBytes(messageToSend);
                stream.Write(messageBytes, 0, messageBytes.Length);
                Debug.Log("Sent: " + messageToSend);
            }
        }
        else
        {
            Debug.LogWarning("No client connection pending.");
        }
    }
}
