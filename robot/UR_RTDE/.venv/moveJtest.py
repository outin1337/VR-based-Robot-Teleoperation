import socket
import rtde_control
import rtde_receive
import numpy as np


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

        #currentJointPos = rtde_r.getActualQ()

        jointSpeed = [delta_array[0], delta_array[2], delta_array[1], 0, 0, 0]
        #actualTcp[0] += delta_array[0]
        #actualTcp[1] += delta_array[2]
        #actualTcp[2] += delta_array[1]


        if rtde_c.getInverseKinematicsHasSolution(jointSpeed):
            targetJointPos = rtde_c.getInverseKinematics(jointSpeed)
            #jointSpeed = np.array(targetJointPos) - np.array(currentJointPos)
            rtde_c.speedJ(jointSpeed.tolist(), 0.26, 0.1)
        else:
            print("no solution")
        send_msg()
        rtde_c.waitPeriod(t_start)

    else:
        if rtde_c.getInverseKinematicsHasSolution(actualTcp):
            rtde_c.moveJ()
        else:
            print("no solution")
        rtde_c.waitPeriod(t_start)


def send_msg():
    message = "ready"
    try:
        client_socket.send(message.encode('ascii'))
    except Exception as e:
        print(f"Error sending message: {str(e)}")


if __name__ == "__main__":

    velocity = 0
    acceleration = 0
    dt = 1.0 / 500  # 2ms
    lookahead_time = 0.1
    gain = 100

    rtde_c = rtde_control.RTDEControlInterface("192.168.87.128")#192.168.87.128 sim, 158.39.162.151 robot
    rtde_r = rtde_receive.RTDEReceiveInterface("192.168.87.128")
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
