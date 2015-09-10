#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Mesh
struct Mesh_t512;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t690;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t827;
// System.Int32[]
struct Int32U5BU5D_t484;

// System.Void UnityEngine.Mesh::.ctor()
extern "C" void Mesh__ctor_m4391 (Mesh_t512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::Internal_Create(UnityEngine.Mesh)
extern "C" void Mesh_Internal_Create_m9002 (Object_t * __this /* static, unused */, Mesh_t512 * ___mono, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
extern "C" void Mesh_set_vertices_m4566 (Mesh_t512 * __this, Vector3U5BU5D_t690* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_uv(UnityEngine.Vector2[])
extern "C" void Mesh_set_uv_m4568 (Mesh_t512 * __this, Vector2U5BU5D_t827* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::RecalculateNormals()
extern "C" void Mesh_RecalculateNormals_m4569 (Mesh_t512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_triangles(System.Int32[])
extern "C" void Mesh_set_triangles_m4567 (Mesh_t512 * __this, Int32U5BU5D_t484* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
