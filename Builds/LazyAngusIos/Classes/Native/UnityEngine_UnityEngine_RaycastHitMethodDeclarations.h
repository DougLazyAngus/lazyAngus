#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.RaycastHit
struct RaycastHit_t660;
// UnityEngine.Collider
struct Collider_t661;
// UnityEngine.Rigidbody
struct Rigidbody_t1139;
// UnityEngine.Transform
struct Transform_t364;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
extern "C" Vector3_t449  RaycastHit_get_point_m5246 (RaycastHit_t660 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
extern "C" Vector3_t449  RaycastHit_get_normal_m5247 (RaycastHit_t660 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.RaycastHit::get_distance()
extern "C" float RaycastHit_get_distance_m5245 (RaycastHit_t660 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
extern "C" Collider_t661 * RaycastHit_get_collider_m5244 (RaycastHit_t660 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody UnityEngine.RaycastHit::get_rigidbody()
extern "C" Rigidbody_t1139 * RaycastHit_get_rigidbody_m6523 (RaycastHit_t660 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
extern "C" Transform_t364 * RaycastHit_get_transform_m3409 (RaycastHit_t660 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
