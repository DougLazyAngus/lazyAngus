#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.RaycastHit
struct RaycastHit_t599;
// UnityEngine.Collider
struct Collider_t600;
// UnityEngine.Rigidbody
struct Rigidbody_t1084;
// UnityEngine.Transform
struct Transform_t323;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
extern "C" Vector3_t413  RaycastHit_get_point_m4636 (RaycastHit_t599 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
extern "C" Vector3_t413  RaycastHit_get_normal_m4637 (RaycastHit_t599 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.RaycastHit::get_distance()
extern "C" float RaycastHit_get_distance_m4635 (RaycastHit_t599 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
extern "C" Collider_t600 * RaycastHit_get_collider_m4634 (RaycastHit_t599 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody UnityEngine.RaycastHit::get_rigidbody()
extern "C" Rigidbody_t1084 * RaycastHit_get_rigidbody_m5919 (RaycastHit_t599 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
extern "C" Transform_t323 * RaycastHit_get_transform_m2817 (RaycastHit_t599 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
