#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.RaycastHit
struct RaycastHit_t713;
// UnityEngine.Collider
struct Collider_t714;
// UnityEngine.Rigidbody
struct Rigidbody_t2715;
// UnityEngine.Transform
struct Transform_t406;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
extern "C" Vector3_t497  RaycastHit_get_point_m5598 (RaycastHit_t713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
extern "C" Vector3_t497  RaycastHit_get_normal_m5599 (RaycastHit_t713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.RaycastHit::get_distance()
extern "C" float RaycastHit_get_distance_m5597 (RaycastHit_t713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
extern "C" Collider_t714 * RaycastHit_get_collider_m5596 (RaycastHit_t713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody UnityEngine.RaycastHit::get_rigidbody()
extern "C" Rigidbody_t2715 * RaycastHit_get_rigidbody_m9210 (RaycastHit_t713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
extern "C" Transform_t406 * RaycastHit_get_transform_m3762 (RaycastHit_t713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
