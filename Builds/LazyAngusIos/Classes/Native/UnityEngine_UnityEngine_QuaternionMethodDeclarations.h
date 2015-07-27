#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Quaternion
struct Quaternion_t683;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" void Quaternion__ctor_m6209 (Quaternion_t683 * __this, float ___x, float ___y, float ___z, float ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C" Quaternion_t683  Quaternion_get_identity_m3553 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" float Quaternion_Dot_m6210 (Object_t * __this /* static, unused */, Quaternion_t683  ___a, Quaternion_t683  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
extern "C" Quaternion_t683  Quaternion_Inverse_m5508 (Object_t * __this /* static, unused */, Quaternion_t683  ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Inverse(UnityEngine.Quaternion&)
extern "C" Quaternion_t683  Quaternion_INTERNAL_CALL_Inverse_m6211 (Object_t * __this /* static, unused */, Quaternion_t683 * ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Quaternion::ToString()
extern "C" String_t* Quaternion_ToString_m6212 (Quaternion_t683 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
extern "C" Vector3_t451  Quaternion_get_eulerAngles_m3693 (Quaternion_t683 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
extern "C" Quaternion_t683  Quaternion_Euler_m3604 (Object_t * __this /* static, unused */, float ___x, float ___y, float ___z, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
extern "C" Quaternion_t683  Quaternion_Euler_m3675 (Object_t * __this /* static, unused */, Vector3_t451  ___euler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
extern "C" Vector3_t451  Quaternion_Internal_ToEulerRad_m6213 (Object_t * __this /* static, unused */, Quaternion_t683  ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::INTERNAL_CALL_Internal_ToEulerRad(UnityEngine.Quaternion&)
extern "C" Vector3_t451  Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m6214 (Object_t * __this /* static, unused */, Quaternion_t683 * ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
extern "C" Quaternion_t683  Quaternion_Internal_FromEulerRad_m6215 (Object_t * __this /* static, unused */, Vector3_t451  ___euler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Internal_FromEulerRad(UnityEngine.Vector3&)
extern "C" Quaternion_t683  Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m6216 (Object_t * __this /* static, unused */, Vector3_t451 * ___euler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Quaternion::GetHashCode()
extern "C" int32_t Quaternion_GetHashCode_m6217 (Quaternion_t683 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Quaternion::Equals(System.Object)
extern "C" bool Quaternion_Equals_m6218 (Quaternion_t683 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" Quaternion_t683  Quaternion_op_Multiply_m6219 (Object_t * __this /* static, unused */, Quaternion_t683  ___lhs, Quaternion_t683  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C" Vector3_t451  Quaternion_op_Multiply_m3676 (Object_t * __this /* static, unused */, Quaternion_t683  ___rotation, Vector3_t451  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Quaternion::op_Inequality(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" bool Quaternion_op_Inequality_m5439 (Object_t * __this /* static, unused */, Quaternion_t683  ___lhs, Quaternion_t683  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
