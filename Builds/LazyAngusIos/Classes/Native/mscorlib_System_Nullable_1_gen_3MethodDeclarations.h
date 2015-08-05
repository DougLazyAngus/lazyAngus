#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Nullable`1<System.TimeSpan>
struct Nullable_1_t1245;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.Nullable`1<System.TimeSpan>
#include "mscorlib_System_Nullable_1_gen_3.h"

// System.Void System.Nullable`1<System.TimeSpan>::.ctor(T)
extern "C" void Nullable_1__ctor_m19934_gshared (Nullable_1_t1245 * __this, TimeSpan_t334  ___value, const MethodInfo* method);
#define Nullable_1__ctor_m19934(__this, ___value, method) (( void (*) (Nullable_1_t1245 *, TimeSpan_t334 , const MethodInfo*))Nullable_1__ctor_m19934_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m7423_gshared (Nullable_1_t1245 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m7423(__this, method) (( bool (*) (Nullable_1_t1245 *, const MethodInfo*))Nullable_1_get_HasValue_m7423_gshared)(__this, method)
// T System.Nullable`1<System.TimeSpan>::get_Value()
extern "C" TimeSpan_t334  Nullable_1_get_Value_m7425_gshared (Nullable_1_t1245 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m7425(__this, method) (( TimeSpan_t334  (*) (Nullable_1_t1245 *, const MethodInfo*))Nullable_1_get_Value_m7425_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m33931_gshared (Nullable_1_t1245 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m33931(__this, ___other, method) (( bool (*) (Nullable_1_t1245 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m33931_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m33932_gshared (Nullable_1_t1245 * __this, Nullable_1_t1245  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m33932(__this, ___other, method) (( bool (*) (Nullable_1_t1245 *, Nullable_1_t1245 , const MethodInfo*))Nullable_1_Equals_m33932_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.TimeSpan>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m33933_gshared (Nullable_1_t1245 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m33933(__this, method) (( int32_t (*) (Nullable_1_t1245 *, const MethodInfo*))Nullable_1_GetHashCode_m33933_gshared)(__this, method)
// T System.Nullable`1<System.TimeSpan>::GetValueOrDefault()
extern "C" TimeSpan_t334  Nullable_1_GetValueOrDefault_m33934_gshared (Nullable_1_t1245 * __this, const MethodInfo* method);
#define Nullable_1_GetValueOrDefault_m33934(__this, method) (( TimeSpan_t334  (*) (Nullable_1_t1245 *, const MethodInfo*))Nullable_1_GetValueOrDefault_m33934_gshared)(__this, method)
// System.String System.Nullable`1<System.TimeSpan>::ToString()
extern "C" String_t* Nullable_1_ToString_m33935_gshared (Nullable_1_t1245 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m33935(__this, method) (( String_t* (*) (Nullable_1_t1245 *, const MethodInfo*))Nullable_1_ToString_m33935_gshared)(__this, method)
