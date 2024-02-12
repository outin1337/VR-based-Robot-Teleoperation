using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class AnimationRotate : MonoBehaviour
{
    private void Awake()
    {
        // Get the Button component and add a click listener
        Button button = GetComponent<Button>();
        button.onClick.AddListener(OnClick);
    }

    private void OnClick()
    {
        // Start the rotation coroutine
        StartCoroutine(Rotate360Coroutine());
    }

    private IEnumerator Rotate360Coroutine()
    {
        RectTransform rectTransform = GetComponent<RectTransform>();
        float timeElapsed = 0f;
        float duration = 1f; // Duration of the rotation
        Quaternion startRotation = rectTransform.rotation;
        Quaternion endRotation = startRotation * Quaternion.Euler(0, 0, 360); // Add 360 degrees to the z-axis rotation

        while (timeElapsed < duration)
        {
            // Interpolate rotation over time
            rectTransform.rotation = Quaternion.Lerp(startRotation, endRotation, timeElapsed / duration);
            timeElapsed += Time.deltaTime;
            yield return null; // Wait for the next frame
        }

        // Ensure the rotation finishes exactly at 360 degrees
        rectTransform.rotation = endRotation;
    }
}