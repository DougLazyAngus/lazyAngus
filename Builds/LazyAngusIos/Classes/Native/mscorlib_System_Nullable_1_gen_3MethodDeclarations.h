#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Nullable`1<System.TimeSpan>
struct Nullable_1_t1244;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.Nullable`1<System.TimeSpan>
#include "mscorlib_System_Nullable_1_gen_3.h"

// System.Void System.Nullable`1<System.TimeSpan>::.ctor(T)
extern "C" void Nullable_1__ctor_m19926_gshared (Nullable_1_t1244 * __this, TimeSpan_t334  ___value, const MethodInfo* method);
#define Nullable_1__ctor_m19926(__this, ___value, method) (( void (*) (Nullable_1_t1244 *, TimeSpan_t334 , const MethodInfo*))Nullable_1__ctor_m19926_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m7415_gshared (Nullable_1_t1244 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m7415(__this, method) (( bool (*) (Nullable_1_t1244 *, const MethodInfo*))Nullable_1_get_HasValue_m7415_gshared)(__this, method)
// T System.Nullable`1<System.TimeSpan>::get_Value()
extern "C" TimeSpan_t334  Nullable_1_get_Value_m7417_gshared (Nullable_1_t1244 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m7417(__this, method) (( TimeSpan_t334  (*) (Nullable_1_t1244 *, const MethodInfo*))Nullable_1_get_Value_m7417_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m33923_gshared (Nullable_1_t1244 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m33923(__this, ___other, method) (( bool (*) (Nullable_1_t1244 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m33923_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m33924_gshared (Nullable_1_t1244 * __this, Nullable_1_t1244  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m33924(__this, ___other, method) (( bool (*) (Nullable_1_t1244 *, Nullable_1_t1244 , const MethodInfo*))Nullable_1_Equals_m33924_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.TimeSpan>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m33925_gshared (Nullable_1_t1244 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m33925(__this, method) (( int32_t (*) (Nullable_1_t1244 *, const MethodInfo*))Nullable_1_GetHashCode_m33925_gshared)(__this, method)
// T System.Nullable`1<System.TimeSpan>::GetValueOrDefault()
extern "C" TimeSpan_t334  Nullable_1_GetValueOrDefault_m33926_gshared (Nullable_1_t1244 * __this, const MethodInfo* method);
#define Nullable_1_GetValueOrDefault_m33926(__this, method) (( TimeSpan_t334  (*) (Nullable_1_t1244 *, const MethodInfo*))Nullable_1_GetValueOrDefault_m33926_gshared)(__this, method)
// System.String System.Nullable`1<System.TimeSpan>::ToString()
extern "C" String_t* Nullable_1_ToString_m33927_gshared (Nullable_1_t1244 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m33927(__this, method) (( String_t* (*) (Nullable_1_t1244 *, const MethodInfo*))Nullable_1_ToString_m33927_gshared)(__this, method)
