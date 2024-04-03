using System;
using System.Collections.Generic;
using System.Linq;
using System.Net.Sockets;
using UnityEngine;


namespace Robot
{

    public enum Command
    {
        RTDE_REQUEST_PROTOCOL_VERSION = 86, //# ascii V
        RTDE_GET_URCONTROL_VERSION = 118, //# ascii v
        RTDE_TEXT_MESSAGE = 77, //# ascii M
        RTDE_DATA_PACKAGE = 85, //# ascii U
        RTDE_CONTROL_PACKAGE_SETUP_OUTPUTS = 79, //# ascii O
        RTDE_CONTROL_PACKAGE_SETUP_INPUTS = 73, //# ascii I
        RTDE_CONTROL_PACKAGE_START = 83, //# ascii S
        RTDE_CONTROL_PACKAGE_PAUSE = 80, //# ascii P
    }

    public enum ConnectionState
    {
        DISCONNECTED = 0,
        CONNECTED = 1,
        STARTED = 2,
        PAUSED = 3,

    }



    public class RTDE
    {
        private string hostname;
        private int port;
        private ConnectionState connState;
        private Socket sock;
        private int skippedPackageCount;
        private int protocolVersion;
        private List<byte> buf;
        private int DefaultTimeout = 5000;

        public RTDE(string hostname, int port = 30004)
        {
            this.hostname = hostname;
            this.port = port;
            connState = ConnectionState.DISCONNECTED;
            sock = null;
            skippedPackageCount = 0;

        }

        public void Connect()
        {

            if (sock != null) return;

            try
            {
                sock = new Socket(AddressFamily.InterNetwork, SocketType.Stream, ProtocolType.Tcp);
                sock.SetSocketOption(SocketOptionLevel.Socket, SocketOptionName.ReuseAddress, true);
                sock.SetSocketOption(SocketOptionLevel.Tcp, SocketOptionName.NoDelay, true);
                sock.ReceiveTimeout = DefaultTimeout;
                sock.Connect(hostname, port);
                connState = ConnectionState.CONNECTED;
                skippedPackageCount = 0;
            }
            catch (SocketException ex)
            {
                sock = null;
                throw;
            }
        }

        public void Disconnect()
        {
            if (sock != null)
            {
                sock.Close();
                sock = null;
            }

            connState = ConnectionState.DISCONNECTED;
        }


        private bool SendAll(Command command, byte[] payload)
        {
            if (payload == null)
            {
                payload = Array.Empty<byte>();
            }

            // Assuming Command is an enum, convert it to its underlying type (e.g., byte or int)
            // Adjust this based on your actual Command definition
            int commandValue = (int)command;

            // Calculate size (header length + payload length)
            int size = 3 + payload.Length; // 3 bytes for the header if using >HB format equivalent
            byte[] buf = new byte[size];

            // Pack data into the buffer: size (ushort), command (byte), and payload
            // Note: Adjust endianess if necessary. Here we assume big-endian as in the Python code.
            buf[0] = (byte)((size >> 8) & 0xFF);
            buf[1] = (byte)(size & 0xFF);
            buf[2] = (byte)commandValue;
            Array.Copy(payload, 0, buf, 3, payload.Length);

            if (sock == null)
            {
                Debug.LogError("Unable to send: not connected to Robot");
                return false;
            }

            try
            {
                // Check if socket is writeable
                bool writeable = sock.Poll(DefaultTimeout * 1000, SelectMode.SelectWrite);
                if (writeable)
                {
                    sock.Send(buf);
                    return true;
                }
                else
                {
                    TriggerDisconnected();
                    return false;
                }
            }
            catch (SocketException)
            {
                TriggerDisconnected();
                return false;
            }
        }



        private bool RecvToBuffer()
        {
            if (sock == null)
            {
                throw new InvalidOperationException("Socket is not connected.");
            }
            

            try
            {
                byte[] more = new byte[4096];
                int bytesRead = sock.Receive(more, 0, more.Length, SocketFlags.None);

                if (bytesRead == 0)
                {
                    // The connection has been closed gracefully
                    Debug.LogError("Received 0 bytes from Controller, probable cause: Controller has stopped");
                    TriggerDisconnected();
                }

                // Append data to buffer
                buf.AddRange(more.Take(bytesRead));
                return true;
            }
            catch (SocketException ex)
            {
                if (ex.SocketErrorCode == SocketError.TimedOut)
                {
                    Debug.LogWarning($"No data received in the last x milliseconds.");
                    return false;
                }
                else
                {
                    TriggerDisconnected();
                    return false;
                }
            }
        }
        
        
        
        private byte[] RecvFromBuffer(int command, bool binary = false)
        {
            while (buf.Count >= 3)
            {
                // Assuming ControlHeader can be unpacked from the first 3 bytes
                // and contains the size and command of the packet
                var packetHeader = ControlHeader.Unpack(this.buf.ToArray());

                if (buf.Count >= packetHeader.Size)
                {
                    var packet = buf.GetRange(3, packetHeader.Size - 3).ToArray();
                    buf.RemoveRange(0, packetHeader.Size);

                    var data = OnPacket(packetHeader.Command, packet);
                    if (packetHeader.Command == command)
                    {
                        return binary ? packet : data;
                    }
                    else
                    {
                        Log.Debug("Skipping package");
                    }
                }
                else
                {
                    return null;
                }
            }
            return null;
        }


        private void TriggerDisconnected()
        {
            Debug.Log("Socket Disconnected");
            Disconnect();
        }



    }
}