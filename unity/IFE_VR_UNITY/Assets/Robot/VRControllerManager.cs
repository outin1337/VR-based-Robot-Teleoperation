using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Valve.VR;


namespace Robot
{
    public class VRControllerManager : MonoBehaviour
    {

        [SerializeField] private GameObject rightController;

        private RobotArmUnity robotArmUnity;
        private Socket_robot_arm networkManager;
        private bool isAsyncTaskRunning;
        private bool startTransmittingData;
        private int gripperButton = -1;

        // Start is called before the first frame update
        void Start()
        {
            robotArmUnity = new RobotArmUnity(rightController);
            networkManager = new Socket_robot_arm();

            networkManager.StartListenerAsync();
        }

        // Update is called once per frame
        async void Update()
        {
            if (robotArmUnity.grabPinchButtonPressed())
            {
                gripperButton *= -1;
            }

            if (robotArmUnity.gripButtonPressed())
            {
                robotArmUnity.UpdateRobotPose();
                startTransmittingData = true;
            }
            else
            {
                robotArmUnity.PosVector = Vector3.zero;
            }
            
            if (!isAsyncTaskRunning && startTransmittingData)
            {
                isAsyncTaskRunning = true;
                if (await networkManager.ReadMessageFromClientAsync() == "ready")
                { 
                    networkManager.SendMessageToClient(robotArmUnity.PosVector, robotArmUnity.AxisVector, gripperButton);
                }
                isAsyncTaskRunning = false;
            }
        }
        
        private void OnApplicationQuit()
        {
            networkManager.CloseConnection();
            networkManager.StopListener();
        }
    }
}


