using UnityEngine;
using UnityEngine.UI;

public class RadialButton : MonoBehaviour
{
   
    void Start()
    {
        Image img = GetComponent<Image>();
        img.alphaHitTestMinimumThreshold = 0.5f;

    }


}
