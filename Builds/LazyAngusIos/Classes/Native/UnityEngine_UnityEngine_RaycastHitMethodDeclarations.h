#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.RaycastHit
struct RaycastHit_t716;
// UnityEngine.Collider
struct Collider_t717;
// UnityEngine.Rigidbody
struct Rigidbody_t2719;
// UnityEngine.Transform
struct Transform_t406;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
extern "C" Vector3_t496  RaycastHit_get_point_m5626 (RaycastHit_t716 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
extern "C" Vector3_t496  RaycastHit_get_normal_m5627 (RaycastHit_t716 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.RaycastHit::get_distance()
extern "C" float RaycastHit_get_distance_m5625 (RaycastHit_t716 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
extern "C" Collider_t717 * RaycastHit_get_collider_m5624 (RaycastHit_t716 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody UnityEngine.RaycastHit::get_rigidbody()
extern "C" Rigidbody_t2719 * RaycastHit_get_rigidbody_m9241 (RaycastHit_t716 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
extern "C" Transform_t406 * RaycastHit_get_transform_m3785 (RaycastHit_t716 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
