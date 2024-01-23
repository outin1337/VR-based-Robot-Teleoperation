import rtde_receive
rtde_r = rtde_receive.RTDEReceiveInterface("158.39.162.151")


print(rtde_r.getTargetTCPPose())
print(rtde_r.getActualTCPPose())
