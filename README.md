# IFE VR Robot!
Github repo for teleoperated robot arm. Currently, no documentation for the code exists
## Hardware
- Raspberry pi 4
- UR3e & UR16e
- Intel Realsense D435i
- ZED 2
- 3 stepper motors
- Custom Gimbal
- HTC VIVE PRO 2 (We are currently testing on 1)
- 2 VR controllers
- 2 VR base stations
## Plugins/Libraries for Unity/PC (Unity version 2021.3.18f1)
**Do not edit Unity without using version 2021.3.18**
- SteamVR
- Intel Realsense Unity
- ZED SDK
- UR_RTDE (use Python 3.10)
## Libraries for Raspberry pi
Nothing to add for now
## Robot offline
We use URSim to test the robot movement before we test it on the real robot. This is to see if nothing will break and check that everything will work before we run a real test.
## Code
- **Unity**: Code for unity can be found under unity/IFE-VR-UNITY/Assets
- **Robot**: Code for robot arm can be found under robot/UR_RTDE/.venv
- **Raspberry pi**: Code for the raspberry pi can be found under raspberry/

We include dependencies currently to keep testing of the system easier.
##
