using UnityEngine;
using System.Net;
using System.Net.Sockets;
using System.Text;
using System.Collections;

public class Socket_robot_arm : MonoBehaviour
{
    private IPAddress robotIP = IPAddress.Parse("192.168.56.1");
    private int port = 30002;

    private TcpListener tcpListener;

    void Start()
    {
        tcpListener = new TcpListener(robotIP, port);
        tcpListener.Start();
        
    }
    void Update()
    {
        tcpListener.Start();
        StartCoroutine(AcceptClient());
    }

    IEnumerator AcceptClient()
    {
        while (true)
        {
            if (tcpListener.Pending())
            {
                TcpClient tcpClient = tcpListener.AcceptTcpClient();
                Debug.Log("Accepted new client");
                StartCoroutine(HandleClient(tcpClient));
            }
            yield return null;
        }
    }

    IEnumerator HandleClient(TcpClient tcpClient)
    {
        NetworkStream stream = tcpClient.GetStream();
        byte[] buffer = new byte[1024];

        while (tcpClient.Connected)
        {
            if (stream.DataAvailable)
            {
                int bytesRead = stream.Read(buffer, 0, buffer.Length);
                if (bytesRead > 0)
                {
                    string message = Encoding.ASCII.GetString(buffer, 0, bytesRead);
                    Debug.Log("Received: " + message);
                }
            }
            yield return null;
        }

        stream.Close();
        tcpClient.Close();
    }
}