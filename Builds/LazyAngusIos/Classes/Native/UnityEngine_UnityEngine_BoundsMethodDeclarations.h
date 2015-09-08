#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Bounds
struct Bounds_t783;
// System.Object
struct Object_t;
// System.String
struct String_t;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"

// System.Void UnityEngine.Bounds::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" void Bounds__ctor_m6270 (Bounds_t783 * __this, Vector3_t538  ___center, Vector3_t538  ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Bounds::GetHashCode()
extern "C" int32_t Bounds_GetHashCode_m9346 (Bounds_t783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::Equals(System.Object)
extern "C" bool Bounds_Equals_m9347 (Bounds_t783 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
extern "C" Vector3_t538  Bounds_get_center_m6271 (Bounds_t783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::set_center(UnityEngine.Vector3)
extern "C" void Bounds_set_center_m6273 (Bounds_t783 * __this, Vector3_t538  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
extern "C" Vector3_t538  Bounds_get_size_m6262 (Bounds_t783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::set_size(UnityEngine.Vector3)
extern "C" void Bounds_set_size_m6272 (Bounds_t783 * __this, Vector3_t538  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::get_extents()
extern "C" Vector3_t538  Bounds_get_extents_m9348 (Bounds_t783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::set_extents(UnityEngine.Vector3)
extern "C" void Bounds_set_extents_m9349 (Bounds_t783 * __this, Vector3_t538  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::get_min()
extern "C" Vector3_t538  Bounds_get_min_m4192 (Bounds_t783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::set_min(UnityEngine.Vector3)
extern "C" void Bounds_set_min_m9350 (Bounds_t783 * __this, Vector3_t538  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::get_max()
extern "C" Vector3_t538  Bounds_get_max_m4193 (Bounds_t783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::set_max(UnityEngine.Vector3)
extern "C" void Bounds_set_max_m9351 (Bounds_t783 * __this, Vector3_t538  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::SetMinMax(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" void Bounds_SetMinMax_m9352 (Bounds_t783 * __this, Vector3_t538  ___min, Vector3_t538  ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::Encapsulate(UnityEngine.Vector3)
extern "C" void Bounds_Encapsulate_m6279 (Bounds_t783 * __this, Vector3_t538  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::Encapsulate(UnityEngine.Bounds)
extern "C" void Bounds_Encapsulate_m9353 (Bounds_t783 * __this, Bounds_t783  ___bounds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::Expand(System.Single)
extern "C" void Bounds_Expand_m9354 (Bounds_t783 * __this, float ___amount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::Expand(UnityEngine.Vector3)
extern "C" void Bounds_Expand_m9355 (Bounds_t783 * __this, Vector3_t538  ___amount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::Intersects(UnityEngine.Bounds)
extern "C" bool Bounds_Intersects_m9356 (Bounds_t783 * __this, Bounds_t783  ___bounds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::Internal_Contains(UnityEngine.Bounds,UnityEngine.Vector3)
extern "C" bool Bounds_Internal_Contains_m9357 (Object_t * __this /* static, unused */, Bounds_t783  ___m, Vector3_t538  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::INTERNAL_CALL_Internal_Contains(UnityEngine.Bounds&,UnityEngine.Vector3&)
extern "C" bool Bounds_INTERNAL_CALL_Internal_Contains_m9358 (Object_t * __this /* static, unused */, Bounds_t783 * ___m, Vector3_t538 * ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::Contains(UnityEngine.Vector3)
extern "C" bool Bounds_Contains_m9359 (Bounds_t783 * __this, Vector3_t538  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Bounds::Internal_SqrDistance(UnityEngine.Bounds,UnityEngine.Vector3)
extern "C" float Bounds_Internal_SqrDistance_m9360 (Object_t * __this /* static, unused */, Bounds_t783  ___m, Vector3_t538  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Bounds::INTERNAL_CALL_Internal_SqrDistance(UnityEngine.Bounds&,UnityEngine.Vector3&)
extern "C" float Bounds_INTERNAL_CALL_Internal_SqrDistance_m9361 (Object_t * __this /* static, unused */, Bounds_t783 * ___m, Vector3_t538 * ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Bounds::SqrDistance(UnityEngine.Vector3)
extern "C" float Bounds_SqrDistance_m9362 (Bounds_t783 * __this, Vector3_t538  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::Internal_IntersectRay(UnityEngine.Ray&,UnityEngine.Bounds&,System.Single&)
extern "C" bool Bounds_Internal_IntersectRay_m9363 (Object_t * __this /* static, unused */, Ray_t780 * ___ray, Bounds_t783 * ___bounds, float* ___distance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::INTERNAL_CALL_Internal_IntersectRay(UnityEngine.Ray&,UnityEngine.Bounds&,System.Single&)
extern "C" bool Bounds_INTERNAL_CALL_Internal_IntersectRay_m9364 (Object_t * __this /* static, unused */, Ray_t780 * ___ray, Bounds_t783 * ___bounds, float* ___distance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::IntersectRay(UnityEngine.Ray)
extern "C" bool Bounds_IntersectRay_m9365 (Bounds_t783 * __this, Ray_t780  ___ray, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::IntersectRay(UnityEngine.Ray,System.Single&)
extern "C" bool Bounds_IntersectRay_m9366 (Bounds_t783 * __this, Ray_t780  ___ray, float* ___distance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::Internal_GetClosestPoint(UnityEngine.Bounds&,UnityEngine.Vector3&)
extern "C" Vector3_t538  Bounds_Internal_GetClosestPoint_m9367 (Object_t * __this /* static, unused */, Bounds_t783 * ___bounds, Vector3_t538 * ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::INTERNAL_CALL_Internal_GetClosestPoint(UnityEngine.Bounds&,UnityEngine.Vector3&)
extern "C" Vector3_t538  Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m9368 (Object_t * __this /* static, unused */, Bounds_t783 * ___bounds, Vector3_t538 * ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::ClosestPoint(UnityEngine.Vector3)
extern "C" Vector3_t538  Bounds_ClosestPoint_m9369 (Bounds_t783 * __this, Vector3_t538  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Bounds::ToString()
extern "C" String_t* Bounds_ToString_m9370 (Bounds_t783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Bounds::ToString(System.String)
extern "C" String_t* Bounds_ToString_m9371 (Bounds_t783 * __this, String_t* ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::op_Equality(UnityEngine.Bounds,UnityEngine.Bounds)
extern "C" bool Bounds_op_Equality_m9372 (Object_t * __this /* static, unused */, Bounds_t783  ___lhs, Bounds_t783  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::op_Inequality(UnityEngine.Bounds,UnityEngine.Bounds)
extern "C" bool Bounds_op_Inequality_m6265 (Object_t * __this /* static, unused */, Bounds_t783  ___lhs, Bounds_t783  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
