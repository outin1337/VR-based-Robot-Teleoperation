
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
            
            Ur3.OnSockClosed += new EventHandler(Ur3_OnSockClosed);

            bool isConnected = await Ur3.ConnectAsync("10.1.1.5", 2);
            if (isConnected) {
                Debug.Log("Successfully connected.");
            } else {
                Debug.LogError("Failed to connect.");
            }

            // Register Inputs (UR point of view)
            Debug.Log(Ur3.Setup_Ur_Inputs(UrInputs, 100));

            
            UrInputs.tool_digital_output = 255;
            UrInputs.tool_digital_output_mask = 255;
            Debug.Log(Ur3.Send_Ur_Inputs());
             

            // Register Outputs (UR point of view), for an update frequency 10Hz
            Debug.Log(Ur3.Setup_Ur_Outputs(UrOutputs,10));
            Ur3.OnDataReceive += new EventHandler(Ur3_OnDataReceive);

            // Request the UR to send back Outputs periodically
            Ur3.Ur_ControlStart();
            

        }

        // Update is called once per frame
        void Update()
        {

            stopwatch.Restart();

            if (robotArmUnity.gripButtonPressed() )
            {
                robotArmUnity.UpdateRobotPose();
                UrInputs.input_double_register_24 = robotArmUnity.PosVector[0];
                UrInputs.input_double_register_25 = robotArmUnity.PosVector[1];
                UrInputs.input_double_register_26 = robotArmUnity.PosVector[2];
                UrInputs.input_double_register_27 = robotArmUnity.AxisVector[0];
                UrInputs.input_double_register_28 = robotArmUnity.AxisVector[1];
                UrInputs.input_double_register_29 = robotArmUnity.AxisVector[2];
                //Debug.Log(robotArmUnity.PosVector);
                Debug.Log(Ur3.Send_Ur_Inputs());
                TimeSpan ts = stopwatch.Elapsed;
                Debug.Log(1/(ts.Seconds+ts.Milliseconds));
            }
        }

        private void OnApplicationQuit()
        {
            UrInputs.input_double_register_30 = 1;
            Debug.Log(Ur3.Send_Ur_Inputs());
            Ur3.Disconnect();
        }
    }
}

