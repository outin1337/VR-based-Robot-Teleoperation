using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LightRotate : MonoBehaviour
{

    public Camera camera;

    void Update()
    {
        transform.rotation = camera.transform.rotation;
    }
}
