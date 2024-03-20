import socket

import numpy as np
import rtde_control
import rtde_receive
import script_client as rtde_script
import dashboard_client as rtde_dashboard
import robotiq_gripper
import time




rotation = True
pi = np.pi
ip = "10.1.1.5" #158.39.162.177""10.1.1.5"


def connect_to_server():
    server_ip = "158.39.163.5"
    port = 30010
    client_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    client_socket.connect((server_ip, port))
    #client_socket.settimeout(30.0)
    print(f"Connected to server at {server_ip}:{port}")
    return client_socket


def read_msg():
    global actualTcp, count, avg_time

    t_start = rtde_c.initPeriod()


    time_start = time.perf_counter()
    data = client_socket.recv(1024)
    elapsed_time = time.perf_counter() - time_start
    if data:

        received_message = data.decode('ascii')
        print(f"Received: {received_message}")
        values = received_message.strip('()').split(',')
        delta_array = [float(value) for value in values]

        #print(-delta_array[3], -delta_array[5], -delta_array[4])

        actualTcp[0] += delta_array[0] #* 1.75 #*-1
        actualTcp[1] += delta_array[2] #* 1.75 #*-1
        actualTcp[2] += delta_array[1] #* 1.75

        if rotation:
            actualTcp[3] = delta_array[3]
            actualTcp[4] = delta_array[4]
            actualTcp[5] = delta_array[5]


        if int(delta_array[6]) == 1:
            gripper.move(255, 255, 255)

        else:
            gripper.move(0, 255, 255)

        rtde_c.servoL(actualTcp, velocity, acceleration, dt, lookahead_time, gain)
        send_msg("ready")
        rtde_c.waitPeriod(t_start)

        #print(actualTcp)
        '''if rtde_c.getInverseKinematicsHasSolution(actualTcp):
            elapsed_time = time.perf_counter() - time_start
            rtde_c.servoL(actualTcp, velocity, acceleration, dt, lookahead_time, gain)
        else:
            print("no solution")
            actualTcp = rtde_r.getActualTCPPose()
        send_msg()
        rtde_c.waitPeriod(t_start)'''



    else:
        '''if rtde_c.getInverseKinematicsHasSolution(actualTcp):
            rtde_c.servoL(actualTcp, velocity, acceleration, dt, lookahead_time, gain)
        else:
            print("no solution")
            actualTcp = rtde_r.getActualTCPPose()'''
        rtde_c.waitPeriod(t_start)
        print("No data")

    count += 1
    avg_time = avg_time + (elapsed_time - avg_time)/count
    #print(f"Time taken:{elapsed_time} seconds")
    #print(f"AVG time taken:{avg_time} seconds")

def send_msg(msg):
    message = msg
    try:
        client_socket.send(message.encode('ascii'))
    except Exception as e:
        print(f"Error sending message: {str(e)}")
    except:
        print("test")


def move_home():
    rtde_c.moveJ([-pi / 2, -pi / 2, -pi / 2, -pi / 2, pi / 2, 0]) #rtde_c.moveJ([-pi / 2, -pi / 2, -pi / 2, -pi / 2, pi / 2, 0]) rtde_c.moveJ([pi / 2, -pi / 2, pi / 2, pi / 2, pi / 2, 0])


if __name__ == "__main__":

    velocity = 0
    acceleration = 0
    dt = 1.0 / 100  # 10ms should ideally be 2ms
    lookahead_time = 0.1
    gain = 100

    count = 0
    avg_time = 0

    rtde_c = rtde_control.RTDEControlInterface(ip)
    rtde_r = rtde_receive.RTDEReceiveInterface(ip)
    rtde_d = rtde_dashboard.DashboardClient(ip)
    rtde_s = rtde_script.ScriptClient(ip, 41,6)
    rtde_d.connect()

    gripper = robotiq_gripper.RobotiqGripper()
    gripper.connect(ip, 63352)
    move_home()
    gripper.activate()
    #gripper.move(255, 255, 255)
    actualTcp = rtde_r.getTargetTCPPose()
    print("Første", actualTcp)

    client_socket = connect_to_server()
    actualTcp = rtde_r.getActualTCPPose()
    send_msg("ready")

    try:
        while True:
            #read_msg()
            if rtde_d.running():
                read_msg()
            else:
                time.sleep(2)
                send_msg("stop")
                print("Robot moving to safe position")
                time.sleep(1)
                rtde_d.closePopup()
                rtde_d.closeSafetyPopup()
                rtde_c.reuploadScript()
                time.sleep(1)
                move_home()
                data = client_socket.recv(1024)
                send_msg("ready")
                actualTcp = rtde_r.getActualTCPPose()
    except Exception as e:
        print(f"Error reading message: {str(e)}")
    except KeyboardInterrupt:
        print("Client terminated by user.")
    finally:
        client_socket.close()
