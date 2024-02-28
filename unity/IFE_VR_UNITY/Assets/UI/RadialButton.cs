using UnityEngine;
using UnityEngine.UI;

public class Raycast_settings : MonoBehaviour
{
    Image img;
    // Start is called before the first frame update
    void Start()
    {
        img = GetComponent<Image>();
        img.alphaHitTestMinimumThreshold = 0.5f;

    }


}
