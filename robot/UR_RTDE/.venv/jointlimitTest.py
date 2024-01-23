import rtde_control
import rtde_io
from math import pi

rtde_io = rtde_io.RTDEIOInterface("158.39.162.151")
rtde_c = rtde_control.RTDEControlInterface("158.39.162.151")

# Parameters
velocity = 0
acceleration = 0
dt = 1.0/500  # 2ms
lookahead_time = 0.1
gain = 100
joint_q = [0, -pi/2, 0, 0, 0, -pi/2]

rtde_io.setSpeedSlider(1)


# Move to initial joint position with a regular moveJ
rtde_c.moveJ(joint_q)

rtde_c.servoStop()
rtde_c.stopScript()