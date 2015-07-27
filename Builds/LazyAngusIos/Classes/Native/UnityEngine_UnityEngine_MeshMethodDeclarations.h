﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Mesh
struct Mesh_t439;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t689;
// System.Int32[]
struct Int32U5BU5D_t496;

// System.Void UnityEngine.Mesh::.ctor()
extern "C" void Mesh__ctor_m3583 (Mesh_t439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::Internal_Create(UnityEngine.Mesh)
extern "C" void Mesh_Internal_Create_m5857 (Object_t * __this /* static, unused */, Mesh_t439 * ___mono, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
extern "C" void Mesh_set_vertices_m3585 (Mesh_t439 * __this, Vector3U5BU5D_t689* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_triangles(System.Int32[])
extern "C" void Mesh_set_triangles_m3586 (Mesh_t439 * __this, Int32U5BU5D_t496* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
