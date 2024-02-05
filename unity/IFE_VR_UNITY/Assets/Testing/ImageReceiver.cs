using UnityEngine;
using System.Net;
using System.Net.Sockets;
using System.IO;

public class ImageReceiver : MonoBehaviour
{
    public RenderTexture receivedRenderTexture; // Assign the RenderTexture in the Unity Inspector

    private TcpListener server;
    private TcpClient client;
    private NetworkStream stream;
    private BinaryReader reader;
    private Texture2D receivedTexture;

    private void Start()
    {
        receivedTexture = new Texture2D(640, 480, TextureFormat.RGBA32, false);

        server = new TcpListener(IPAddress.Any, 12345); // Use the same port as in your Python script
        server.Start();

        Debug.Log("Waiting for connection...");
        Debug.Log(IPAddress.Any);
        client = server.AcceptTcpClient();
        Debug.Log("Client connected.");

        stream = client.GetStream();
        reader = new BinaryReader(stream);

        InvokeRepeating("ReceiveImage", 0f, 0.1f); // Adjust the update rate as needed
    }

    private void ReceiveImage()
    {
        if (client.Connected)
        {
            try
            {
                byte[] imageData = reader.ReadBytes(640 * 480 * 4); // Assuming RGBA format
                receivedTexture.LoadRawTextureData(imageData);
                receivedTexture.Apply();

                // Copy the received texture data to the RenderTexture
                Graphics.Blit(receivedTexture, receivedRenderTexture);

            }
            catch (IOException)
            {
                // Handle disconnection or other errors
                Debug.LogError("Error receiving image data.");
            }
        }
    }

    private void OnDestroy()
    {
        if (client != null)
            client.Close();

        server.Stop();
    }
}
