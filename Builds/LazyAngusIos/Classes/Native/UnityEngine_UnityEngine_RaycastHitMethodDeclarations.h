#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.RaycastHit
struct RaycastHit_t580;
// UnityEngine.Collider
struct Collider_t581;
// UnityEngine.Rigidbody
struct Rigidbody_t1061;
// UnityEngine.Transform
struct Transform_t323;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
extern "C" Vector3_t414  RaycastHit_get_point_m4493 (RaycastHit_t580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
extern "C" Vector3_t414  RaycastHit_get_normal_m4494 (RaycastHit_t580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.RaycastHit::get_distance()
extern "C" float RaycastHit_get_distance_m4492 (RaycastHit_t580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
extern "C" Collider_t581 * RaycastHit_get_collider_m4491 (RaycastHit_t580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody UnityEngine.RaycastHit::get_rigidbody()
extern "C" Rigidbody_t1061 * RaycastHit_get_rigidbody_m5777 (RaycastHit_t580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
extern "C" Transform_t323 * RaycastHit_get_transform_m2714 (RaycastHit_t580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
