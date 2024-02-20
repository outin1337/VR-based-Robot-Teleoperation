using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class KyleAngles : MonoBehaviour
{

    public GameObject shoulderJoint;
    private Vector3 shoulderVector;
    
    // Start is called before the first frame update
    void Start()
    {
        
        
    }

    // Update is called once per frame
    void Update()
    {
        shoulderVector = shoulderJoint.transform.eulerAngles;
        Debug.Log($"GLOBAL {shoulderVector.x}");
        shoulderVector = shoulderJoint.transform.localEulerAngles;
        Debug.Log($"LOCAL {shoulderVector.x}");
    }
}
