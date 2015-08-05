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
extern "C" void Nullable_1__ctor_m19931_gshared (Nullable_1_t1245 * __this, TimeSpan_t334  ___value, const MethodInfo* method);
#define Nullable_1__ctor_m19931(__this, ___value, method) (( void (*) (Nullable_1_t1245 *, TimeSpan_t334 , const MethodInfo*))Nullable_1__ctor_m19931_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m7420_gshared (Nullable_1_t1245 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m7420(__this, method) (( bool (*) (Nullable_1_t1245 *, const MethodInfo*))Nullable_1_get_HasValue_m7420_gshared)(__this, method)
// T System.Nullable`1<System.TimeSpan>::get_Value()
extern "C" TimeSpan_t334  Nullable_1_get_Value_m7422_gshared (Nullable_1_t1245 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m7422(__this, method) (( TimeSpan_t334  (*) (Nullable_1_t1245 *, const MethodInfo*))Nullable_1_get_Value_m7422_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m33928_gshared (Nullable_1_t1245 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m33928(__this, ___other, method) (( bool (*) (Nullable_1_t1245 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m33928_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m33929_gshared (Nullable_1_t1245 * __this, Nullable_1_t1245  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m33929(__this, ___other, method) (( bool (*) (Nullable_1_t1245 *, Nullable_1_t1245 , const MethodInfo*))Nullable_1_Equals_m33929_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.TimeSpan>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m33930_gshared (Nullable_1_t1245 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m33930(__this, method) (( int32_t (*) (Nullable_1_t1245 *, const MethodInfo*))Nullable_1_GetHashCode_m33930_gshared)(__this, method)
// T System.Nullable`1<System.TimeSpan>::GetValueOrDefault()
extern "C" TimeSpan_t334  Nullable_1_GetValueOrDefault_m33931_gshared (Nullable_1_t1245 * __this, const MethodInfo* method);
#define Nullable_1_GetValueOrDefault_m33931(__this, method) (( TimeSpan_t334  (*) (Nullable_1_t1245 *, const MethodInfo*))Nullable_1_GetValueOrDefault_m33931_gshared)(__this, method)
// System.String System.Nullable`1<System.TimeSpan>::ToString()
extern "C" String_t* Nullable_1_ToString_m33932_gshared (Nullable_1_t1245 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m33932(__this, method) (( String_t* (*) (Nullable_1_t1245 *, const MethodInfo*))Nullable_1_ToString_m33932_gshared)(__this, method)
