using UnityEngine;

public class SetTransformParameters : MonoBehaviour
{
    public Vector3 position;

    void Update()
    {
        transform.localPosition = position;
    }
}