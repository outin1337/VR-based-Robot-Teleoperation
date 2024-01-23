import rtde_control
import rtde_io
import rtde_receive


rtde_io = rtde_io.RTDEIOInterface("158.39.162.151")
rtde_c = rtde_control.RTDEControlInterface("158.39.162.151")
rtde_r = rtde_receive.RTDEReceiveInterface("158.39.162.151")

# Parameters
velocity = 0
acceleration = 0
dt = 1.0/500  # 2ms
lookahead_time = 0.1
gain = 100
joint_q = [-0.1024786941306486, -0.25558505367847006, 0.6080835473558128, -0.0032350709205424518, -2.2248802233595866, 2.2153021314400503]


actualTcp = rtde_r.getActualTCPPose()
actualTcp[2] += 0.4
print(actualTcp)
canRun = rtde_c.getInverseKinematicsHasSolution(actualTcp)
print(canRun)

rtde_io.setSpeedSlider(1)


# Execute 500Hz control loop for 2 seconds, each cycle is 2ms
if canRun:
    for i in range(1000):
        t_start = rtde_c.initPeriod()
        rtde_c.servoL(actualTcp, velocity, acceleration, dt, lookahead_time, gain)
        rtde_c.waitPeriod(t_start)

rtde_c.servoStop()
rtde_c.stopScript()