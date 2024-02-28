using System.Diagnostics;
using UnityEngine;
using Debug = UnityEngine.Debug;


namespace Robot
{
    public class VRControllerManager : MonoBehaviour
    {

        [SerializeField] private GameObject rightController;

        private RobotArmUnity robotArmUnity;
        private Socket_robot_arm networkManager;
        private bool isAsyncTaskRunning;
        private bool startTransmittingData;
        private bool stopPoseUpdate = false;
        private int gripperButton = -1;
        private Stopwatch stopwatch;

        // Start is called before the first frame update
        void Start()
        {
             stopwatch= new Stopwatch();
            robotArmUnity = new RobotArmUnity(rightController);
            networkManager = new Socket_robot_arm();

            networkManager.StartListenerAsync();
        }

        // Update is called once per frame
        async void Update()
        {
            stopwatch.Restart();
            if (robotArmUnity.grabPinchButtonPressed() && !UIManager.UIOpen)
            {
                gripperButton *= -1;
            }

            if (robotArmUnity.gripButtonPressed() && networkManager.BoolSocket && !stopPoseUpdate && !UIManager.UIOpen)
            {
                robotArmUnity.UpdateRobotPose();
                startTransmittingData = true;
            }
            else
            {
                robotArmUnity.PosVector = Vector3.zero;
            }
            
            if (!isAsyncTaskRunning && startTransmittingData && networkManager.BoolSocket)
            {
                isAsyncTaskRunning = true;
                //networkManager.SendMessageToClient(robotArmUnity.PosVector, robotArmUnity.AxisVector, gripperButton);
                var clientmsg = await networkManager.ReadMessageFromClientAsync();
                if (clientmsg == "ready")
                { 
                    networkManager.SendMessageToClient(robotArmUnity.PosVector, robotArmUnity.AxisVector, gripperButton);
                    stopPoseUpdate = false;
                }
                else if (clientmsg == "stop")
                {
                    robotArmUnity.SetGripButtonFalse();
                    stopPoseUpdate = true;
                    robotArmUnity.AxisVector = new Vector3(0,3.14f, 0);
                    robotArmUnity.ResetPose();
                }
                    
                isAsyncTaskRunning = false;
            }
            
            var time =  stopwatch.Elapsed;
            //Debug.Log($"Time elapsed for this update: {time}");
        }
        
        private void OnApplicationQuit()
        {
            networkManager.CloseConnection();
            networkManager.StopListener();
        }
    }
}


