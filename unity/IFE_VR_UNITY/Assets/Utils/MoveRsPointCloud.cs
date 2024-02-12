using System;
using UnityEngine;

public class MoveRsPointCloud : MonoBehaviour
{
    public Camera MainCamera;
    public float distance = 1.0f;
    Vector3 startingPoint;
    Vector3 forwardPoint;

   private void Start()
   {
       startingPoint = transform.position;
       forwardPoint = transform.forward;
   }

   void Update()
   {
       transform.position = startingPoint + forwardPoint * distance;
   }
}
