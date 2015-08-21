#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Nullable`1<System.TimeSpan>
struct Nullable_1_t1293;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.Nullable`1<System.TimeSpan>
#include "mscorlib_System_Nullable_1_gen_3.h"

// System.Void System.Nullable`1<System.TimeSpan>::.ctor(T)
extern "C" void Nullable_1__ctor_m20164_gshared (Nullable_1_t1293 * __this, TimeSpan_t334  ___value, const MethodInfo* method);
#define Nullable_1__ctor_m20164(__this, ___value, method) (( void (*) (Nullable_1_t1293 *, TimeSpan_t334 , const MethodInfo*))Nullable_1__ctor_m20164_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m7655_gshared (Nullable_1_t1293 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m7655(__this, method) (( bool (*) (Nullable_1_t1293 *, const MethodInfo*))Nullable_1_get_HasValue_m7655_gshared)(__this, method)
// T System.Nullable`1<System.TimeSpan>::get_Value()
extern "C" TimeSpan_t334  Nullable_1_get_Value_m7657_gshared (Nullable_1_t1293 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m7657(__this, method) (( TimeSpan_t334  (*) (Nullable_1_t1293 *, const MethodInfo*))Nullable_1_get_Value_m7657_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m34688_gshared (Nullable_1_t1293 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m34688(__this, ___other, method) (( bool (*) (Nullable_1_t1293 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m34688_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m34689_gshared (Nullable_1_t1293 * __this, Nullable_1_t1293  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m34689(__this, ___other, method) (( bool (*) (Nullable_1_t1293 *, Nullable_1_t1293 , const MethodInfo*))Nullable_1_Equals_m34689_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.TimeSpan>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m34690_gshared (Nullable_1_t1293 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m34690(__this, method) (( int32_t (*) (Nullable_1_t1293 *, const MethodInfo*))Nullable_1_GetHashCode_m34690_gshared)(__this, method)
// T System.Nullable`1<System.TimeSpan>::GetValueOrDefault()
extern "C" TimeSpan_t334  Nullable_1_GetValueOrDefault_m34691_gshared (Nullable_1_t1293 * __this, const MethodInfo* method);
#define Nullable_1_GetValueOrDefault_m34691(__this, method) (( TimeSpan_t334  (*) (Nullable_1_t1293 *, const MethodInfo*))Nullable_1_GetValueOrDefault_m34691_gshared)(__this, method)
// System.String System.Nullable`1<System.TimeSpan>::ToString()
extern "C" String_t* Nullable_1_ToString_m34692_gshared (Nullable_1_t1293 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m34692(__this, method) (( String_t* (*) (Nullable_1_t1293 *, const MethodInfo*))Nullable_1_ToString_m34692_gshared)(__this, method)
