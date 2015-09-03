#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Nullable`1<System.TimeSpan>
struct Nullable_1_t1312;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.Nullable`1<System.TimeSpan>
#include "mscorlib_System_Nullable_1_gen_3.h"

// System.Void System.Nullable`1<System.TimeSpan>::.ctor(T)
extern "C" void Nullable_1__ctor_m24465_gshared (Nullable_1_t1312 * __this, TimeSpan_t334  ___value, const MethodInfo* method);
#define Nullable_1__ctor_m24465(__this, ___value, method) (( void (*) (Nullable_1_t1312 *, TimeSpan_t334 , const MethodInfo*))Nullable_1__ctor_m24465_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m7824_gshared (Nullable_1_t1312 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m7824(__this, method) (( bool (*) (Nullable_1_t1312 *, const MethodInfo*))Nullable_1_get_HasValue_m7824_gshared)(__this, method)
// T System.Nullable`1<System.TimeSpan>::get_Value()
extern "C" TimeSpan_t334  Nullable_1_get_Value_m7826_gshared (Nullable_1_t1312 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m7826(__this, method) (( TimeSpan_t334  (*) (Nullable_1_t1312 *, const MethodInfo*))Nullable_1_get_Value_m7826_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m39299_gshared (Nullable_1_t1312 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m39299(__this, ___other, method) (( bool (*) (Nullable_1_t1312 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m39299_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m39300_gshared (Nullable_1_t1312 * __this, Nullable_1_t1312  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m39300(__this, ___other, method) (( bool (*) (Nullable_1_t1312 *, Nullable_1_t1312 , const MethodInfo*))Nullable_1_Equals_m39300_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.TimeSpan>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m39301_gshared (Nullable_1_t1312 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m39301(__this, method) (( int32_t (*) (Nullable_1_t1312 *, const MethodInfo*))Nullable_1_GetHashCode_m39301_gshared)(__this, method)
// T System.Nullable`1<System.TimeSpan>::GetValueOrDefault()
extern "C" TimeSpan_t334  Nullable_1_GetValueOrDefault_m39302_gshared (Nullable_1_t1312 * __this, const MethodInfo* method);
#define Nullable_1_GetValueOrDefault_m39302(__this, method) (( TimeSpan_t334  (*) (Nullable_1_t1312 *, const MethodInfo*))Nullable_1_GetValueOrDefault_m39302_gshared)(__this, method)
// System.String System.Nullable`1<System.TimeSpan>::ToString()
extern "C" String_t* Nullable_1_ToString_m39303_gshared (Nullable_1_t1312 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m39303(__this, method) (( String_t* (*) (Nullable_1_t1312 *, const MethodInfo*))Nullable_1_ToString_m39303_gshared)(__this, method)
