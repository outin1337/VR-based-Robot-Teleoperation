using System.Diagnostics;
using UnityEngine;
using Debug = UnityEngine.Debug;


namespace Robot
{
    public class VRControllerManager : MonoBehaviour
    {

        [SerializeField] private GameObject rightController;
        [SerializeField] private GameObject vrCamera;

        private RobotArmUnity robotArmUnity;
        private Socket_robot_arm networkManager;
        private bool isAsyncTaskRunning;
        private bool startTransmittingData;
        private int gripperButton = -1;
        private Stopwatch stopwatch;
        private string clientMsg;

        // Start is called before the first frame update
        async void Start()
        {
            stopwatch= new Stopwatch();
            robotArmUnity = new RobotArmUnity(rightController, vrCamera, null);
            networkManager = new Socket_robot_arm();

            await networkManager.StartListenerAsync();
        }

        // Update is called once per frame
        async void Update()
        {
            stopwatch.Restart();
            
           /* if (robotArmUnity.grabPinchButtonPressed() && !UIManager.UIOpen)
            {
                gripperButton *= -1;
            }*/

            if (UIManager.UIOpen || clientMsg == "stop")
            {
                robotArmUnity.SetGripButtonFalse();
            }

            /*if (robotArmUnity.gripButtonPressed() && networkManager.BoolSocket)
            {
                robotArmUnity.UpdateRobotPose();
                startTransmittingData = true;
            }
            else
            {
                robotArmUnity.PosVector = Vector3.zero;
            }*/
            
            if (!isAsyncTaskRunning && startTransmittingData && networkManager.BoolSocket)
            {
                isAsyncTaskRunning = true;
                //networkManager.SendMessageToClient(robotArmUnity.PosVector, robotArmUnity.AxisVector, gripperButton);
                clientMsg = await networkManager.ReadMessageFromClientAsync();
                if (clientMsg == "ready")
                { 
                    networkManager.SendMessageToClient(robotArmUnity.PosVector, robotArmUnity.AxisVector, gripperButton);
                }
                else if (clientMsg == "stop")
                {
                    robotArmUnity.SetGripButtonFalse();
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


