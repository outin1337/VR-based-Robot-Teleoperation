using System;
using UnityEngine;
using System.Net;
using System.Net.Sockets;
using System.Text;
using System.Globalization;
using System.Threading;
using System.Threading.Tasks;


namespace Robot
{
    public class Socket_robot_arm
    {
        private IPAddress robotIP = IPAddress.Parse("158.39.163.5");
        private int port = 30010;
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

        public bool BoolSocket => boolSocket;


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
            string messageToSend = string.Format(CultureInfo.InvariantCulture, "({0:F4},{1:F4},{2:F4})", vectorToSend.x,
                vectorToSend.y, vectorToSend.z);
            byte[] messageBytes = Encoding.ASCII.GetBytes(messageToSend);
            networkStream.Write(messageBytes, 0, messageBytes.Length);
            //Debug.Log("Sent: " + messageToSend);
        }


        public void SendMessageToClient(Vector3 vectorToSend, Vector3 axisVector, int gripperStateToSend)
        {
            string messageToSend = string.Format(CultureInfo.InvariantCulture,
                "({0:F4},{1:F4},{2:F4}, {3:F4}, {4:F4}, {5:F4}, {6})",
                vectorToSend.x, vectorToSend.y, vectorToSend.z, axisVector.x, axisVector.y, axisVector.z,
                gripperStateToSend);

            byte[] messageBytes = Encoding.ASCII.GetBytes(messageToSend);
            networkStream.Write(messageBytes, 0, messageBytes.Length);
            //Debug.Log("Sent: " + messageToSend);
        }



        public async Task<string> ReadMessageFromClientAsync()
        {
            byte[] buffer = new byte[1024];
            int bytesRead;
            var timeoutMilliseconds = 1000000;
            using var cancellationTokenSource = new CancellationTokenSource();

            try
            {
                var readTask = networkStream.ReadAsync(buffer, 0, buffer.Length, cancellationTokenSource.Token);
                var timeoutTask = Task.Delay(timeoutMilliseconds);


                var completedTask = await Task.WhenAny(readTask, timeoutTask);

                if (completedTask == timeoutTask)
                {
                    cancellationTokenSource.Cancel();
                    Debug.Log("Read from client timed out");
                }
                else
                {
                    bytesRead = await readTask;
                    if (bytesRead > 0)
                    {
                        string message = Encoding.ASCII.GetString(buffer, 0, bytesRead);
                        Debug.Log(message);
                        return message;
                    }

                    return "";
                }

                return "";
            }
            catch (Exception ex)
            {
                Debug.Log("An exception occurred: " + ex.Message);
                return "";
            }
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
}

