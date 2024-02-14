﻿using System;
using UnityEngine;
using Intel.RealSense;
using UnityEngine.Rendering;
using UnityEngine.Assertions;
using System.Runtime.InteropServices;
using System.Threading;
using System.Collections.Generic;
using System.Linq;

[RequireComponent(typeof(MeshFilter), typeof(MeshRenderer))]
public class RsPointCloudRenderer : MonoBehaviour
{
    public RsFrameProvider Source;
    private Mesh mesh;
    private Texture2D uvmap;

    [NonSerialized]
    private Vector3[] vertices;

    FrameQueue q;
    
    public bool freezePointCloud;
    public Material PointCloudMat;
    private Material frozenMaterial = null;

    void Start()
    {
        Source.OnStart += OnStartStreaming;
        Source.OnStop += Dispose;
    }

    private void OnStartStreaming(PipelineProfile obj)
    {
        q = new FrameQueue(1);

        using (var depth = obj.Streams.FirstOrDefault(s => s.Stream == Stream.Depth && s.Format == Format.Z16).As<VideoStreamProfile>())
            ResetMesh(depth.Width, depth.Height);

        Source.OnNewSample += OnNewSample;
    }

    private void ResetMesh(int width, int height)
    {
        Assert.IsTrue(SystemInfo.SupportsTextureFormat(TextureFormat.RGFloat));
        uvmap = new Texture2D(width, height, TextureFormat.RGFloat, false, true)
        {
            wrapMode = TextureWrapMode.Clamp,
            filterMode = FilterMode.Point,
        };
        GetComponent<MeshRenderer>().sharedMaterial.SetTexture("_UVMap", uvmap);

        if (mesh != null)
            mesh.Clear();
        else
            mesh = new Mesh()
            {
                indexFormat = IndexFormat.UInt32,
            };

        vertices = new Vector3[width * height];

        var indices = new int[vertices.Length];
        for (int i = 0; i < vertices.Length; i++)
            indices[i] = i;

        mesh.MarkDynamic();
        mesh.vertices = vertices;

        var uvs = new Vector2[width * height];
        Array.Clear(uvs, 0, uvs.Length);
        for (int j = 0; j < height; j++)
        {
            for (int i = 0; i < width; i++)
            {
                uvs[i + j * width].x = i / (float)width;
                uvs[i + j * width].y = j / (float)height;
            }
        }

        mesh.uv = uvs;

        mesh.SetIndices(indices, MeshTopology.Points, 0, false);
        mesh.bounds = new Bounds(Vector3.zero, Vector3.one * 10f);

        GetComponent<MeshFilter>().sharedMesh = mesh;
    }

    void OnDestroy()
    {
        if (q != null)
        {
            q.Dispose();
            q = null;
        }

        if (mesh != null)
            Destroy(null);
        
        if (frozenMaterial != null)
            Destroy(frozenMaterial);
    }

    private void Dispose()
    {
        Source.OnNewSample -= OnNewSample;

        if (q != null)
        {
            q.Dispose();
            q = null;
        }
    }

    private void OnNewSample(Frame frame)
    {
        if (q == null)
            return;
        if (!freezePointCloud)
        {
            try
            {
                if (frame.IsComposite)
                {
                    using (var fs = frame.As<FrameSet>())
                    using (var points = fs.FirstOrDefault<Points>(Stream.Depth, Format.Xyz32f))
                    {
                        if (points != null)
                        {
                            q.Enqueue(points);
                        }
                    }
                    return;
                }

                if (frame.Is(Extension.Points))
                {
                    q.Enqueue(frame);
                }
            }
            catch (Exception e)
            {
                Debug.LogException(e);
            }
        }
    }


    protected void LateUpdate()
    {
        if (!freezePointCloud && q != null)
        {
            unFreeze();
            Points points;
            if (q.PollForFrame<Points>(out points))
                using (points)
                {
                    if (points.Count != mesh.vertexCount)
                    {
                        using (var p = points.GetProfile<VideoStreamProfile>())
                            ResetMesh(p.Width, p.Height);
                    }

                    if (points.TextureData != IntPtr.Zero)
                    {
                        uvmap.LoadRawTextureData(points.TextureData, points.Count * sizeof(float) * 2);
                        uvmap.Apply();
                    }

                    if (points.VertexData != IntPtr.Zero)
                    {
                        points.CopyVertices(vertices);

                        mesh.vertices = vertices;
                        mesh.UploadMeshData(false);
                    }
                }
        }
        else
        {
            Freeze();
        }
    }

    private int count = 0;
    public void Freeze()
    {
        if (freezePointCloud && count == 0)
        {
            frozenMaterial = new Material(PointCloudMat);
            if (PointCloudMat.HasProperty("_MainTex") && PointCloudMat.HasProperty("_UVMap"))
            {
                Texture2D texture = PointCloudMat.GetTexture("_MainTex") as Texture2D;
                Texture2D UV = PointCloudMat.GetTexture("_UVMap") as Texture2D;
                Texture2D frozenTexture = new Texture2D(texture.width, texture.height, texture.format, texture.mipmapCount > 1);
                Texture2D frozenUVMap = new Texture2D(UV.width, UV.height, UV.format, UV.mipmapCount > 1);
                Graphics.CopyTexture(texture, frozenTexture);
                Graphics.CopyTexture(UV,frozenUVMap);
                frozenMaterial.SetTexture("_MainTex", frozenTexture);
                frozenMaterial.SetTexture("_UVMap", frozenUVMap);
            }
            GetComponent<MeshRenderer>().material = frozenMaterial;
            count++;
        }
    }
    
    public void unFreeze()
    {
        if (count > 0)
        {
            GetComponent<MeshRenderer>().material = PointCloudMat;
            count = 0;
        }
    }
}
