using UnityEngine;

public static class EulerAngleUtils
{
    public static Vector3 GetEulerAnglesInMinus180To180(Vector3 originalEulerAngles)
    {
        Vector3 adjustedAngles = originalEulerAngles;
        adjustedAngles.x = NormalizeAngle(adjustedAngles.x);
        adjustedAngles.y = NormalizeAngle(adjustedAngles.y);
        adjustedAngles.z = NormalizeAngle(adjustedAngles.z);
        return adjustedAngles;
    }

    private static float NormalizeAngle(float angle)
    {
        if (angle > 180f)
            angle -= 360f;
        return angle;
    }
}
