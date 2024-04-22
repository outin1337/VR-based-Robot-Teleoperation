/*

See :
https://www.universal-robots.com/how-tos-and-faqs/how-to/ur-how-tos/real-time-data-exchange-rtde-guide-22229/

BOOL : bool
UINT8 : byte
UINT32 : uint
UINT64 : ulong
INT32 : int
DOUBLE : double
VECTOR3D : double[]
VECTOR6D : double []
VECTOR6INT32 : int[]
VECTOR6UINT32 : uint[]

TODO and not TODO : do not declare public fields with other types & creates the array with the right size

*/
using System;

namespace Robot
{

    [Serializable]
    public class UniversalRobot_Outputs
    {
         // check the fields name in the RTDE guide : MUST be the same with the same type
        public double[] actual_TCP_pose = new double[6]; // array creation must be done here to give the size
        public double[] actual_TCP_force = new double[6];
        public uint robot_status_bits;
        public int output_int_register_24;
        public int output_int_register_25;

    

    }

    [Serializable]
    public class UniversalRobot_Inputs
    {
        public double input_double_register_24;
        public double input_double_register_25;
        public double input_double_register_26;
        public double input_double_register_27;
        public double input_double_register_28;
        public double input_double_register_29;
        public double input_double_register_30;
        public double input_double_register_46 = 0;
        public double input_double_register_47 = 0;

        public int input_int_register_24;

    }

}