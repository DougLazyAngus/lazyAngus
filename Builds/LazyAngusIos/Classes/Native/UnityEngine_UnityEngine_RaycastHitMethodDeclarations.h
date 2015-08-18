#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.RaycastHit
struct RaycastHit_t763;
// UnityEngine.Collider
struct Collider_t764;
// UnityEngine.Rigidbody
struct Rigidbody_t2767;
// UnityEngine.Transform
struct Transform_t406;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
extern "C" Vector3_t536  RaycastHit_get_point_m5877 (RaycastHit_t763 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
extern "C" Vector3_t536  RaycastHit_get_normal_m5878 (RaycastHit_t763 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.RaycastHit::get_distance()
extern "C" float RaycastHit_get_distance_m5876 (RaycastHit_t763 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
extern "C" Collider_t764 * RaycastHit_get_collider_m5875 (RaycastHit_t763 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody UnityEngine.RaycastHit::get_rigidbody()
extern "C" Rigidbody_t2767 * RaycastHit_get_rigidbody_m9486 (RaycastHit_t763 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
extern "C" Transform_t406 * RaycastHit_get_transform_m4009 (RaycastHit_t763 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
