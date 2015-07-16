#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.RaycastHit
struct RaycastHit_t609;
// UnityEngine.Collider
struct Collider_t610;
// UnityEngine.Rigidbody
struct Rigidbody_t1094;
// UnityEngine.Transform
struct Transform_t323;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
extern "C" Vector3_t411  RaycastHit_get_point_m4699 (RaycastHit_t609 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
extern "C" Vector3_t411  RaycastHit_get_normal_m4700 (RaycastHit_t609 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.RaycastHit::get_distance()
extern "C" float RaycastHit_get_distance_m4698 (RaycastHit_t609 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
extern "C" Collider_t610 * RaycastHit_get_collider_m4697 (RaycastHit_t609 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody UnityEngine.RaycastHit::get_rigidbody()
extern "C" Rigidbody_t1094 * RaycastHit_get_rigidbody_m5982 (RaycastHit_t609 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
extern "C" Transform_t323 * RaycastHit_get_transform_m2876 (RaycastHit_t609 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
