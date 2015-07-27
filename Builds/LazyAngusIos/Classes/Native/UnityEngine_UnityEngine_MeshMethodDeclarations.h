#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Mesh
struct Mesh_t437;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t688;
// System.Int32[]
struct Int32U5BU5D_t495;

// System.Void UnityEngine.Mesh::.ctor()
extern "C" void Mesh__ctor_m3576 (Mesh_t437 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::Internal_Create(UnityEngine.Mesh)
extern "C" void Mesh_Internal_Create_m5850 (Object_t * __this /* static, unused */, Mesh_t437 * ___mono, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
extern "C" void Mesh_set_vertices_m3578 (Mesh_t437 * __this, Vector3U5BU5D_t688* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_triangles(System.Int32[])
extern "C" void Mesh_set_triangles_m3579 (Mesh_t437 * __this, Int32U5BU5D_t495* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
