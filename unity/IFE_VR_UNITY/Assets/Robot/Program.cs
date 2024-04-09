
using UnityEngine;
using System;
using System.Diagnostics;
using Debug = UnityEngine.Debug;


namespace Robot
{
    public class Program : MonoBehaviour
    { 
        [SerializeField] private GameObject rightController;
        private RobotArmUnity robotArmUnity;
        private bool startTransmittingData;
        private int gripperButton = -1;
        private Stopwatch stopwatch;
        
        UniversalRobot_Outputs UrOutputs = new UniversalRobot_Outputs(); 
        UniversalRobot_Inputs UrInputs = new UniversalRobot_Inputs();
       
       static void Ur3_OnSockClosed(object sender, EventArgs e)
       {
           Debug.Log("Closed");
       }

       // Data change Event 
       static void Ur3_OnDataReceive(object sender, EventArgs e)
       {
          // Debug.Log(UrOutputs.actual_q[0]);
       }
        
       RtdeClient Ur3 = new RtdeClient();
        // Start is called before the first frame update

        async void Start()
        {
            
            stopwatch= new Stopwatch();

            robotArmUnity = new RobotArmUnity(rightController);
            
            // Connection using the protocol version 2 (allows update frequency less or equal to 125 Hz)
            
            Ur3.OnSockClosed += Ur3_OnSockClosed;

            bool isConnected = await Ur3.ConnectAsync("10.1.1.5", 2);
            if (isConnected) {
                Debug.Log("Successfully connected.");
            } else {
                Debug.LogError("Failed to connect.");
            }

            // Register Inputs (UR point of view)
            Debug.Log(Ur3.Setup_Ur_Inputs(UrInputs));

            
            //UrInputs.tool_digital_output = 255;
            //UrInputs.tool_digital_output_mask = 255;

            Ur3.Send_Ur_Inputs();
             

            // Register Outputs (UR point of view)
            Debug.Log(Ur3.Setup_Ur_Outputs(UrOutputs,500));
            Ur3.OnDataReceive += Ur3_OnDataReceive;

            // Request the UR to send back Outputs periodically
            Ur3.Ur_ControlStart();
            

        }


        private float currentValue = 0;
        private float targetValue;
        void Update()
        {

            stopwatch.Restart();
            
            
            //Checks if second bit is 0, checking if the program on robot is running.
            if ((UrOutputs.robot_status_bits & (1 << 1)) == 0)
            {
                robotArmUnity.ForceGrabGripOff();
                robotArmUnity.ResetPose();
                Debug.LogError("Forced off triggered");
            }
            else if ((UrOutputs.robot_status_bits & (1 << 1)) != 0) 
            {
                robotArmUnity.ResetForceGrabGripOff();
            }
       
            
            if (robotArmUnity.gripButtonPressed() )
            {
                robotArmUnity.UpdateRobotPose();
                UrInputs.input_double_register_24 = robotArmUnity.PosVector[0];
                UrInputs.input_double_register_25 = robotArmUnity.PosVector[1];
                UrInputs.input_double_register_26 = robotArmUnity.PosVector[2];
                UrInputs.input_double_register_27 = robotArmUnity.AxisVector[0];
                UrInputs.input_double_register_28 = robotArmUnity.AxisVector[1];
                UrInputs.input_double_register_29 = robotArmUnity.AxisVector[2];
                targetValue = robotArmUnity.squeezeGrabPinchValue();
                currentValue = Math.Abs(targetValue - currentValue) > 0.05*currentValue ? targetValue : currentValue;
                UrInputs.input_double_register_30 = currentValue;
                if (UrInputs.input_double_register_47 > 99) UrInputs.input_double_register_47 = 0;
                ++UrInputs.input_double_register_47;
                Debug.Log(Ur3.Send_Ur_Inputs());
                
                //TimeSpan ts = stopwatch.Elapsed;
                //Debug.Log(1/(ts.Seconds+ts.Milliseconds));
            }
        }

        private void OnApplicationQuit()
        {
            UrInputs.input_double_register_46 = 1;
            Debug.Log(Ur3.Send_Ur_Inputs());
            Ur3.Disconnect();
        }
    }
}

