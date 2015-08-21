#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Mesh
struct Mesh_t522;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t542;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t800;
// System.Int32[]
struct Int32U5BU5D_t484;

// System.Void UnityEngine.Mesh::.ctor()
extern "C" void Mesh__ctor_m4173 (Mesh_t522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::Internal_Create(UnityEngine.Mesh)
extern "C" void Mesh_Internal_Create_m8764 (Object_t * __this /* static, unused */, Mesh_t522 * ___mono, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
extern "C" void Mesh_set_vertices_m4326 (Mesh_t522 * __this, Vector3U5BU5D_t542* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_uv(UnityEngine.Vector2[])
extern "C" void Mesh_set_uv_m4328 (Mesh_t522 * __this, Vector2U5BU5D_t800* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::RecalculateNormals()
extern "C" void Mesh_RecalculateNormals_m4329 (Mesh_t522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_triangles(System.Int32[])
extern "C" void Mesh_set_triangles_m4327 (Mesh_t522 * __this, Int32U5BU5D_t484* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
