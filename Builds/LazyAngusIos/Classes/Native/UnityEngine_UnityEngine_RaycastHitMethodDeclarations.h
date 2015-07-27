#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.RaycastHit
struct RaycastHit_t662;
// UnityEngine.Collider
struct Collider_t663;
// UnityEngine.Rigidbody
struct Rigidbody_t1141;
// UnityEngine.Transform
struct Transform_t366;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
extern "C" Vector3_t451  RaycastHit_get_point_m5257 (RaycastHit_t662 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
extern "C" Vector3_t451  RaycastHit_get_normal_m5258 (RaycastHit_t662 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.RaycastHit::get_distance()
extern "C" float RaycastHit_get_distance_m5256 (RaycastHit_t662 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
extern "C" Collider_t663 * RaycastHit_get_collider_m5255 (RaycastHit_t662 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody UnityEngine.RaycastHit::get_rigidbody()
extern "C" Rigidbody_t1141 * RaycastHit_get_rigidbody_m6534 (RaycastHit_t662 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
extern "C" Transform_t366 * RaycastHit_get_transform_m3420 (RaycastHit_t662 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
