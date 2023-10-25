using UnityEngine;

[RequireComponent(typeof(MeshFilter))]
public class BendQuad : MonoBehaviour
{
    public float bendAmount = 0.5f; // Adjust this to control the amount of bend

    void Start()
    {
        Mesh mesh = GetComponent<MeshFilter>().mesh;
        Vector3[] vertices = mesh.vertices;

        for (int i = 0; i < vertices.Length; i++)
        {
            vertices[i].y += Mathf.Sin(vertices[i].x) * bendAmount;
        }

        mesh.vertices = vertices;
        mesh.RecalculateBounds();
        mesh.RecalculateNormals();
    }
}
