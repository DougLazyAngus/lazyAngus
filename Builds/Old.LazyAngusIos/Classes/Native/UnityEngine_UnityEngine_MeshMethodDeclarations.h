#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Mesh
struct Mesh_t400;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t628;
// System.Int32[]
struct Int32U5BU5D_t456;

// System.Void UnityEngine.Mesh::.ctor()
extern "C" void Mesh__ctor_m3003 (Mesh_t400 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::Internal_Create(UnityEngine.Mesh)
extern "C" void Mesh_Internal_Create_m5262 (Object_t * __this /* static, unused */, Mesh_t400 * ___mono, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
extern "C" void Mesh_set_vertices_m3005 (Mesh_t400 * __this, Vector3U5BU5D_t628* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_triangles(System.Int32[])
extern "C" void Mesh_set_triangles_m3006 (Mesh_t400 * __this, Int32U5BU5D_t456* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
