using UnityEngine;

public class RadialMenu : MonoBehaviour
{
    public GameObject[] menuItems;
    public float radius = 100f;
    public bool isOpen = false;

    void Start()
    {
        CloseMenu();
    }

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Space))
        {
            if (isOpen)
                CloseMenu();
            else
                OpenMenu();
        }
    }

    void OpenMenu()
    {
        foreach (GameObject menuItem in menuItems)
        {
            menuItem.SetActive(true);
            // Position menu item around the central point
            float angle = 360f / menuItems.Length;
            Vector3 direction = Quaternion.AngleAxis(angle * menuItem.transform.GetSiblingIndex(), Vector3.forward) * Vector3.right;
            menuItem.transform.localPosition = direction * radius;
        }
        isOpen = true;
    }

    void CloseMenu()
    {
        foreach (GameObject menuItem in menuItems)
        {
            menuItem.SetActive(false);
        }
        isOpen = false;
    }
}

