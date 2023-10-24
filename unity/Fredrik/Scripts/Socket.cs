using UnityEngine;
using System.Net;
using System.Net.Sockets;
using System.Text;
using System.Threading;

public class Socket : MonoBehaviour
{
    private TcpListener listener;
    private Thread listenThread;

    void Start()
    {
        listener = new TcpListener(IPAddress.Any, 8888);
        listenThread = new Thread(new ThreadStart(ListenForClients));
        listenThread.Start();
        Debug.Log("test");
    }

    private void ListenForClients()
    {
        listener.Start();

        while (true)
        {
            //blocks until a client has connected to the server
            TcpClient client = listener.AcceptTcpClient();

            //create a thread to handle communication with the connected client
            Thread clientThread = new Thread(new ParameterizedThreadStart(HandleClient));
            clientThread.Start(client);
        }
    }

    private void HandleClient(object clientObj)
    {
        TcpClient client = (TcpClient)clientObj;
        NetworkStream stream = client.GetStream();

        byte[] message = new byte[4096];
        int bytesRead;

        while (true)
        {
            bytesRead = 0;

            try
            {
                bytesRead = stream.Read(message, 0, 4096);
            }
            catch
            {
                break;
            }

            if (bytesRead == 0)
            {
                break;
            }

            string clientMessage = Encoding.ASCII.GetString(message, 0, bytesRead);
            Debug.Log("Received: " + clientMessage);

            // Process client message here. For example, if the UR robot sends a request for TCP changes,
            // parse the message and make necessary changes in Unity.

            // Respond back if needed
            string response = "Acknowledged";
            byte[] responseBytes = Encoding.ASCII.GetBytes(response);
            stream.Write(responseBytes, 0, responseBytes.Length);
        }

        client.Close();
    }

    private void OnDestroy()
    {
        if (listener != null)
        {
            listener.Stop();
        }
        if (listenThread != null)
        {
            listenThread.Abort();
        }
    }
}
