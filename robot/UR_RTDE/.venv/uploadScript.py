import script_client as rtde_script

ip = "10.1.1.5"

rtde_s = rtde_script.ScriptClient(ip, 41,6)
rtde_s.connect()

print(rtde_s.sendScript("controlScript.script"))