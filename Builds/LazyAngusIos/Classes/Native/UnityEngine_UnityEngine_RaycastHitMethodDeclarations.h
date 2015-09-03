#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.RaycastHit
struct RaycastHit_t777;
// UnityEngine.Collider
struct Collider_t778;
// UnityEngine.Rigidbody
struct Rigidbody_t2784;
// UnityEngine.Transform
struct Transform_t406;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
extern "C" Vector3_t538  RaycastHit_get_point_m6036 (RaycastHit_t777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
extern "C" Vector3_t538  RaycastHit_get_normal_m6037 (RaycastHit_t777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.RaycastHit::get_distance()
extern "C" float RaycastHit_get_distance_m6035 (RaycastHit_t777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
extern "C" Collider_t778 * RaycastHit_get_collider_m6034 (RaycastHit_t777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody UnityEngine.RaycastHit::get_rigidbody()
extern "C" Rigidbody_t2784 * RaycastHit_get_rigidbody_m9642 (RaycastHit_t777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
extern "C" Transform_t406 * RaycastHit_get_transform_m4160 (RaycastHit_t777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
