#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.RaycastHit
struct RaycastHit_t557;
// UnityEngine.Collider
struct Collider_t558;
// UnityEngine.Rigidbody
struct Rigidbody_t1039;
// UnityEngine.Transform
struct Transform_t323;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
extern "C" Vector3_t412  RaycastHit_get_point_m4344 (RaycastHit_t557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
extern "C" Vector3_t412  RaycastHit_get_normal_m4345 (RaycastHit_t557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.RaycastHit::get_distance()
extern "C" float RaycastHit_get_distance_m4343 (RaycastHit_t557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
extern "C" Collider_t558 * RaycastHit_get_collider_m4342 (RaycastHit_t557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody UnityEngine.RaycastHit::get_rigidbody()
extern "C" Rigidbody_t1039 * RaycastHit_get_rigidbody_m5631 (RaycastHit_t557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
extern "C" Transform_t323 * RaycastHit_get_transform_m2574 (RaycastHit_t557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
