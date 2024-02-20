using UnityEngine;

public class FollowObject : MonoBehaviour
{
    public Transform targetTransform;
    public Vector3 offset;
    public Transform camera;

    void Update()
    {
        if (targetTransform != null)
        {
            transform.position = targetTransform.position + offset;
            transform.rotation = targetTransform.rotation;
            /*
            Vector3 targetDirection = camera.transform.position - transform.position;
            Quaternion targetRotation = Quaternion.LookRotation(targetDirection);
            transform.rotation = Quaternion.Lerp(transform.rotation, targetRotation, Time.deltaTime * 5f);
            */
        }
    }
}