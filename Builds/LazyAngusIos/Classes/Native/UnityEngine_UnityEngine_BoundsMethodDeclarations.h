#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Bounds
struct Bounds_t715;
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
extern "C" void Bounds__ctor_m5822 (Bounds_t715 * __this, Vector3_t497  ___center, Vector3_t497  ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Bounds::GetHashCode()
extern "C" int32_t Bounds_GetHashCode_m8906 (Bounds_t715 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::Equals(System.Object)
extern "C" bool Bounds_Equals_m8907 (Bounds_t715 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
extern "C" Vector3_t497  Bounds_get_center_m5823 (Bounds_t715 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::set_center(UnityEngine.Vector3)
extern "C" void Bounds_set_center_m5825 (Bounds_t715 * __this, Vector3_t497  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
extern "C" Vector3_t497  Bounds_get_size_m5814 (Bounds_t715 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::set_size(UnityEngine.Vector3)
extern "C" void Bounds_set_size_m5824 (Bounds_t715 * __this, Vector3_t497  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::get_extents()
extern "C" Vector3_t497  Bounds_get_extents_m8908 (Bounds_t715 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::set_extents(UnityEngine.Vector3)
extern "C" void Bounds_set_extents_m8909 (Bounds_t715 * __this, Vector3_t497  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::get_min()
extern "C" Vector3_t497  Bounds_get_min_m3782 (Bounds_t715 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::set_min(UnityEngine.Vector3)
extern "C" void Bounds_set_min_m8910 (Bounds_t715 * __this, Vector3_t497  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::get_max()
extern "C" Vector3_t497  Bounds_get_max_m3783 (Bounds_t715 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::set_max(UnityEngine.Vector3)
extern "C" void Bounds_set_max_m8911 (Bounds_t715 * __this, Vector3_t497  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::SetMinMax(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" void Bounds_SetMinMax_m8912 (Bounds_t715 * __this, Vector3_t497  ___min, Vector3_t497  ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::Encapsulate(UnityEngine.Vector3)
extern "C" void Bounds_Encapsulate_m5831 (Bounds_t715 * __this, Vector3_t497  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::Encapsulate(UnityEngine.Bounds)
extern "C" void Bounds_Encapsulate_m8913 (Bounds_t715 * __this, Bounds_t715  ___bounds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::Expand(System.Single)
extern "C" void Bounds_Expand_m8914 (Bounds_t715 * __this, float ___amount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::Expand(UnityEngine.Vector3)
extern "C" void Bounds_Expand_m8915 (Bounds_t715 * __this, Vector3_t497  ___amount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::Intersects(UnityEngine.Bounds)
extern "C" bool Bounds_Intersects_m8916 (Bounds_t715 * __this, Bounds_t715  ___bounds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::Internal_Contains(UnityEngine.Bounds,UnityEngine.Vector3)
extern "C" bool Bounds_Internal_Contains_m8917 (Object_t * __this /* static, unused */, Bounds_t715  ___m, Vector3_t497  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::INTERNAL_CALL_Internal_Contains(UnityEngine.Bounds&,UnityEngine.Vector3&)
extern "C" bool Bounds_INTERNAL_CALL_Internal_Contains_m8918 (Object_t * __this /* static, unused */, Bounds_t715 * ___m, Vector3_t497 * ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::Contains(UnityEngine.Vector3)
extern "C" bool Bounds_Contains_m8919 (Bounds_t715 * __this, Vector3_t497  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Bounds::Internal_SqrDistance(UnityEngine.Bounds,UnityEngine.Vector3)
extern "C" float Bounds_Internal_SqrDistance_m8920 (Object_t * __this /* static, unused */, Bounds_t715  ___m, Vector3_t497  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Bounds::INTERNAL_CALL_Internal_SqrDistance(UnityEngine.Bounds&,UnityEngine.Vector3&)
extern "C" float Bounds_INTERNAL_CALL_Internal_SqrDistance_m8921 (Object_t * __this /* static, unused */, Bounds_t715 * ___m, Vector3_t497 * ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Bounds::SqrDistance(UnityEngine.Vector3)
extern "C" float Bounds_SqrDistance_m8922 (Bounds_t715 * __this, Vector3_t497  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::Internal_IntersectRay(UnityEngine.Ray&,UnityEngine.Bounds&,System.Single&)
extern "C" bool Bounds_Internal_IntersectRay_m8923 (Object_t * __this /* static, unused */, Ray_t712 * ___ray, Bounds_t715 * ___bounds, float* ___distance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::INTERNAL_CALL_Internal_IntersectRay(UnityEngine.Ray&,UnityEngine.Bounds&,System.Single&)
extern "C" bool Bounds_INTERNAL_CALL_Internal_IntersectRay_m8924 (Object_t * __this /* static, unused */, Ray_t712 * ___ray, Bounds_t715 * ___bounds, float* ___distance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::IntersectRay(UnityEngine.Ray)
extern "C" bool Bounds_IntersectRay_m8925 (Bounds_t715 * __this, Ray_t712  ___ray, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::IntersectRay(UnityEngine.Ray,System.Single&)
extern "C" bool Bounds_IntersectRay_m8926 (Bounds_t715 * __this, Ray_t712  ___ray, float* ___distance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::Internal_GetClosestPoint(UnityEngine.Bounds&,UnityEngine.Vector3&)
extern "C" Vector3_t497  Bounds_Internal_GetClosestPoint_m8927 (Object_t * __this /* static, unused */, Bounds_t715 * ___bounds, Vector3_t497 * ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::INTERNAL_CALL_Internal_GetClosestPoint(UnityEngine.Bounds&,UnityEngine.Vector3&)
extern "C" Vector3_t497  Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m8928 (Object_t * __this /* static, unused */, Bounds_t715 * ___bounds, Vector3_t497 * ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::ClosestPoint(UnityEngine.Vector3)
extern "C" Vector3_t497  Bounds_ClosestPoint_m8929 (Bounds_t715 * __this, Vector3_t497  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Bounds::ToString()
extern "C" String_t* Bounds_ToString_m8930 (Bounds_t715 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Bounds::ToString(System.String)
extern "C" String_t* Bounds_ToString_m8931 (Bounds_t715 * __this, String_t* ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::op_Equality(UnityEngine.Bounds,UnityEngine.Bounds)
extern "C" bool Bounds_op_Equality_m8932 (Object_t * __this /* static, unused */, Bounds_t715  ___lhs, Bounds_t715  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::op_Inequality(UnityEngine.Bounds,UnityEngine.Bounds)
extern "C" bool Bounds_op_Inequality_m5817 (Object_t * __this /* static, unused */, Bounds_t715  ___lhs, Bounds_t715  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
