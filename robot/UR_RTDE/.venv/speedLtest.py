import socket
import rtde_control
import rtde_receive

def connect_to_server():
    robot_ip = "158.39.163.5"
    port = 30002
    client_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    client_socket.connect((robot_ip, port))
    print(f"Connected to server at {robot_ip}:{port}")
    return client_socket


def read_msg():
    t_start = rtde_c.initPeriod()
    data = client_socket.recv(1024)
    if data:

        received_message = data.decode('ascii')
        print(f"Received: {received_message}")
        values = received_message.strip('()').split(',')
        delta_array = [float(value) for value in values]
        print(delta_array)

        a = [0, 0, 0, 0, 0, 0]

        a[0] = delta_array[0]/5
        a[1] = delta_array[2]/5
        a[2] = delta_array[1]/5



        rtde_c.speedL(a, 0.5, 0.1)
        send_msg()
        rtde_c.waitPeriod(t_start)

    #else:
        #rtde_c.waitPeriod(t_start)


def send_msg():
    message = "ready"
    try:
        client_socket.send(message.encode('ascii'))
    except Exception as e:
        print(f"Error sending message: {str(e)}")


if __name__ == "__main__":

    rtde_c = rtde_control.RTDEControlInterface("158.39.162.151")
    rtde_r = rtde_receive.RTDEReceiveInterface("158.39.162.151")
    #rtde_c = rtde_control.RTDEControlInterface("192.168.87.128")
    #rtde_r = rtde_receive.RTDEReceiveInterface("192.168.87.128")
    #actualTcp = rtde_r.getTargetTCPPose()
    #print("Første", actualTcp)

    client_socket = connect_to_server()
    send_msg()
    try:
        while True:
            read_msg()
    except Exception as e:
        print(f"Error reading message: {str(e)}")
    except KeyboardInterrupt:
        print("Client terminated by user.")
    finally:
        client_socket.close()
