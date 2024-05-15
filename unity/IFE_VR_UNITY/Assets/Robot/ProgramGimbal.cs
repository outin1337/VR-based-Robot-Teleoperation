
using UnityEngine;
using System;
using System.Diagnostics;
using Valve.VR;
using Debug = UnityEngine.Debug;


namespace Robot
{
    public class ProgramGimbal : MonoBehaviour
    { 
        [SerializeField] private GameObject rightController;
        [SerializeField] private GameObject vrCamera;
        [SerializeField] private GameObject lockedVrCameraCopy;
        [SerializeField] private GameObject realController;
        private RobotArmUnityGimbal robotArmUnity;
        private bool startTransmittingData;
        private int gripperButton = -1;
        private Stopwatch stopwatch;
        
        UniversalRobot_Outputs UrOutputs = new UniversalRobot_Outputs(); 
        UniversalRobot_Inputs UrInputs = new UniversalRobot_Inputs();

        private bool isConnected;
       
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

            SteamVR.settings.lockPhysicsUpdateRateToRenderFrequency = false;
            
            stopwatch= new Stopwatch();

            robotArmUnity = new RobotArmUnityGimbal(rightController ,vrCamera, lockedVrCameraCopy, realController);
            
            // Connection using the protocol version 2 (allows update frequency less or equal to 125 Hz)
            
            Ur3.OnSockClosed += Ur3_OnSockClosed;
            
            Debug.Log("test");

            isConnected = await Ur3.ConnectAsync("158.39.162.177", 2); //158.39.162.177 .... 10.1.1.5
            if (isConnected) {
                Debug.Log("Successfully connected.");
            } else {
                Debug.LogError("Failed to connect.");
            }

            // Register Inputs (UR point of view)
            Debug.Log(Ur3.Setup_Ur_Inputs(UrInputs));


            UrInputs.input_int_register_24 = 0;
            

            // Register Outputs (UR point of view)
            Debug.Log(Ur3.Setup_Ur_Outputs(UrOutputs,500));
            Ur3.OnDataReceive += Ur3_OnDataReceive;

            // Request the UR to send back Outputs periodically
            Ur3.Ur_ControlStart();
            
            //SetLockedCameraTransform();
        }


        private float currentValue = 0;
        private float targetValue;
        bool hasRun = false;
        void Update()
        {

            stopwatch.Restart();
            
            //Checks if second bit is 0, checking if the program on robot is running.
            if (((UrOutputs.robot_status_bits & (1 << 1)) == 0 || UrOutputs.output_int_register_25 == 1) && !hasRun)
            {
                hasRun = true; 
                robotArmUnity.FreezeRobot();
                robotArmUnity.ResetPose();
                UrInputs.input_double_register_24 = 0;
                UrInputs.input_double_register_25 = 0;
                UrInputs.input_double_register_26 = 0;
                UrInputs.input_double_register_27 = 0;
                UrInputs.input_double_register_28 = 3.14;
                UrInputs.input_double_register_29 = 0;
                UrInputs.input_double_register_47 = 0; //Reset pkt number
                //Debug.LogError("Forced off triggered");
            }
            else if (UrOutputs.output_int_register_24 == 1)
            {
                hasRun = false;
                robotArmUnity.UnFreezeRobot();
                UrInputs.input_int_register_24 = 1;
            }
            
            else if (UrOutputs.output_int_register_24 == 0)
            {
                UrInputs.input_int_register_24 = 0;
            }

            if (robotArmUnity.UpdateRobotPose())
            {
                //UrInputs.input_double_register_24 = robotArmUnity.PosVector[0];
                //UrInputs.input_double_register_25 = robotArmUnity.PosVector[1];
                //UrInputs.input_double_register_26 = robotArmUnity.PosVector[2];
                UrInputs.input_double_register_27 = robotArmUnity.AxisVector[0];
                UrInputs.input_double_register_28 = robotArmUnity.AxisVector[1]; 
                UrInputs.input_double_register_29 = robotArmUnity.AxisVector[2];
                
            }
            else
            {
                UrInputs.input_double_register_24 = 0;
                UrInputs.input_double_register_25 = 0;
                UrInputs.input_double_register_26 = 0;
            }
    
            //UrInputs.input_double_register_30 = robotArmUnity.RobotArmGripperValue;
            if (UrInputs.input_double_register_47 > 99) UrInputs.input_double_register_47 = 0;
            ++UrInputs.input_double_register_47;
            if (isConnected) Ur3.Send_Ur_Inputs();
            //TimeSpan ts = stopwatch.Elapsed; 
            //Debug.Log(1/(ts.Seconds+ts.Milliseconds));
            
            //robotArmUnity.VibrationController(UrOutputs.actual_TCP_force);
            //Debug.Log(string.Format("Force values: {0:F2} .. {1:F2} .. {2:F2}",UrOutputs.actual_TCP_force[0], UrOutputs.actual_TCP_force[1], UrOutputs.actual_TCP_force[2]));
           
        
        }

        private void FixedUpdate()
        {
            robotArmUnity.VibrationController(UrOutputs.actual_TCP_force);
        }

        private void OnApplicationQuit()
        {
            UrInputs.input_double_register_46 = 1;
            Debug.Log(Ur3.Send_Ur_Inputs());
            Ur3.Disconnect();
        }


        public void SetLockedCameraTransform()
        {
            robotArmUnity.SetLockedCameraTransform();
        }
    }
}

