#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Mesh
struct Mesh_t525;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t546;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t820;
// System.Int32[]
struct Int32U5BU5D_t484;

// System.Void UnityEngine.Mesh::.ctor()
extern "C" void Mesh__ctor_m4347 (Mesh_t525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::Internal_Create(UnityEngine.Mesh)
extern "C" void Mesh_Internal_Create_m8944 (Object_t * __this /* static, unused */, Mesh_t525 * ___mono, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
extern "C" void Mesh_set_vertices_m4508 (Mesh_t525 * __this, Vector3U5BU5D_t546* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_uv(UnityEngine.Vector2[])
extern "C" void Mesh_set_uv_m4510 (Mesh_t525 * __this, Vector2U5BU5D_t820* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::RecalculateNormals()
extern "C" void Mesh_RecalculateNormals_m4511 (Mesh_t525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_triangles(System.Int32[])
extern "C" void Mesh_set_triangles_m4509 (Mesh_t525 * __this, Int32U5BU5D_t484* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
