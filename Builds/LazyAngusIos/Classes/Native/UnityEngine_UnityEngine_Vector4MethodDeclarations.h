#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Vector4
struct Vector4_t936;
// System.Object
struct Object_t;
// System.String
struct String_t;
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"

// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" void Vector4__ctor_m5299 (Vector4_t936 * __this, float ___x, float ___y, float ___z, float ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector4::get_Item(System.Int32)
extern "C" float Vector4_get_Item_m5361 (Vector4_t936 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector4::set_Item(System.Int32,System.Single)
extern "C" void Vector4_set_Item_m5363 (Vector4_t936 * __this, int32_t ___index, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Vector4::GetHashCode()
extern "C" int32_t Vector4_GetHashCode_m6287 (Vector4_t936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector4::Equals(System.Object)
extern "C" bool Vector4_Equals_m6288 (Vector4_t936 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Vector4::ToString()
extern "C" String_t* Vector4_ToString_m6289 (Vector4_t936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector4::Dot(UnityEngine.Vector4,UnityEngine.Vector4)
extern "C" float Vector4_Dot_m6290 (Object_t * __this /* static, unused */, Vector4_t936  ___a, Vector4_t936  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector4::SqrMagnitude(UnityEngine.Vector4)
extern "C" float Vector4_SqrMagnitude_m6291 (Object_t * __this /* static, unused */, Vector4_t936  ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector4::get_sqrMagnitude()
extern "C" float Vector4_get_sqrMagnitude_m5342 (Vector4_t936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Vector4::get_zero()
extern "C" Vector4_t936  Vector4_get_zero_m5345 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Subtraction(UnityEngine.Vector4,UnityEngine.Vector4)
extern "C" Vector4_t936  Vector4_op_Subtraction_m6292 (Object_t * __this /* static, unused */, Vector4_t936  ___a, Vector4_t936  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Division(UnityEngine.Vector4,System.Single)
extern "C" Vector4_t936  Vector4_op_Division_m5355 (Object_t * __this /* static, unused */, Vector4_t936  ___a, float ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector4::op_Equality(UnityEngine.Vector4,UnityEngine.Vector4)
extern "C" bool Vector4_op_Equality_m6293 (Object_t * __this /* static, unused */, Vector4_t936  ___lhs, Vector4_t936  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
