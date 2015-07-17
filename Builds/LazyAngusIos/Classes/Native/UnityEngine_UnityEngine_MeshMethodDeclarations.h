#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Mesh
struct Mesh_t437;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t687;
// System.Int32[]
struct Int32U5BU5D_t493;

// System.Void UnityEngine.Mesh::.ctor()
extern "C" void Mesh__ctor_m3568 (Mesh_t437 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::Internal_Create(UnityEngine.Mesh)
extern "C" void Mesh_Internal_Create_m5842 (Object_t * __this /* static, unused */, Mesh_t437 * ___mono, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
extern "C" void Mesh_set_vertices_m3570 (Mesh_t437 * __this, Vector3U5BU5D_t687* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_triangles(System.Int32[])
extern "C" void Mesh_set_triangles_m3571 (Mesh_t437 * __this, Int32U5BU5D_t493* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
