using UnityEngine;

public class web_camera_test : MonoBehaviour
{
    public int cameraIndex = 0; // To set which camera to use. 0 is the first camera, 1 is the second, etc.
    private WebCamTexture webcamTexture;

    void Start()
    {
        if (cameraIndex >= WebCamTexture.devices.Length)
        {
            Debug.LogError($"Camera index {cameraIndex} not available!");
            return;
        }

        webcamTexture = new WebCamTexture(WebCamTexture.devices[cameraIndex].name);
        GetComponent<Renderer>().material.mainTexture = webcamTexture;
        webcamTexture.Play();
    }

    void OnDisable()
    {
        if (webcamTexture != null)
            webcamTexture.Stop();
    }
}
