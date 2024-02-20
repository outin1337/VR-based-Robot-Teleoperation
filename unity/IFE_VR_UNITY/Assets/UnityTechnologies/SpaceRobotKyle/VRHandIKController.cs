using UnityEngine;

public class VRHandIKController : MonoBehaviour
{
    public Animator animator;
    public Transform vrControllerLeft; // Assign your VR controller here
    public Transform vrControllerRight; // Assign your VR controller here

    void OnAnimatorIK(int layerIndex)
    {
        // Set the IK position and rotation for the left hand
        animator.SetIKPositionWeight(AvatarIKGoal.LeftHand, 1);
        animator.SetIKRotationWeight(AvatarIKGoal.LeftHand, 1);
        animator.SetIKPosition(AvatarIKGoal.LeftHand, vrControllerLeft.position);
        animator.SetIKRotation(AvatarIKGoal.LeftHand, vrControllerLeft.rotation);

        // Set the IK position and rotation for the right hand
        animator.SetIKPositionWeight(AvatarIKGoal.RightHand, 1);
        animator.SetIKRotationWeight(AvatarIKGoal.RightHand, 1);
        animator.SetIKPosition(AvatarIKGoal.RightHand, vrControllerRight.position);
        animator.SetIKRotation(AvatarIKGoal.RightHand, vrControllerRight.rotation);
    }
}