#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.RaycastHit
struct RaycastHit_t601;
// UnityEngine.Collider
struct Collider_t602;
// UnityEngine.Rigidbody
struct Rigidbody_t1086;
// UnityEngine.Transform
struct Transform_t323;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
extern "C" Vector3_t413  RaycastHit_get_point_m4661 (RaycastHit_t601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
extern "C" Vector3_t413  RaycastHit_get_normal_m4662 (RaycastHit_t601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.RaycastHit::get_distance()
extern "C" float RaycastHit_get_distance_m4660 (RaycastHit_t601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
extern "C" Collider_t602 * RaycastHit_get_collider_m4659 (RaycastHit_t601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody UnityEngine.RaycastHit::get_rigidbody()
extern "C" Rigidbody_t1086 * RaycastHit_get_rigidbody_m5944 (RaycastHit_t601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
extern "C" Transform_t323 * RaycastHit_get_transform_m2842 (RaycastHit_t601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
