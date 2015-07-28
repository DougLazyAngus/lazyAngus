#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Nullable`1<System.TimeSpan>
struct Nullable_1_t1235;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.Nullable`1<System.TimeSpan>
#include "mscorlib_System_Nullable_1_gen_3.h"

// System.Void System.Nullable`1<System.TimeSpan>::.ctor(T)
extern "C" void Nullable_1__ctor_m19856_gshared (Nullable_1_t1235 * __this, TimeSpan_t334  ___value, const MethodInfo* method);
#define Nullable_1__ctor_m19856(__this, ___value, method) (( void (*) (Nullable_1_t1235 *, TimeSpan_t334 , const MethodInfo*))Nullable_1__ctor_m19856_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m7349_gshared (Nullable_1_t1235 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m7349(__this, method) (( bool (*) (Nullable_1_t1235 *, const MethodInfo*))Nullable_1_get_HasValue_m7349_gshared)(__this, method)
// T System.Nullable`1<System.TimeSpan>::get_Value()
extern "C" TimeSpan_t334  Nullable_1_get_Value_m7351_gshared (Nullable_1_t1235 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m7351(__this, method) (( TimeSpan_t334  (*) (Nullable_1_t1235 *, const MethodInfo*))Nullable_1_get_Value_m7351_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m33853_gshared (Nullable_1_t1235 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m33853(__this, ___other, method) (( bool (*) (Nullable_1_t1235 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m33853_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m33854_gshared (Nullable_1_t1235 * __this, Nullable_1_t1235  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m33854(__this, ___other, method) (( bool (*) (Nullable_1_t1235 *, Nullable_1_t1235 , const MethodInfo*))Nullable_1_Equals_m33854_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.TimeSpan>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m33855_gshared (Nullable_1_t1235 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m33855(__this, method) (( int32_t (*) (Nullable_1_t1235 *, const MethodInfo*))Nullable_1_GetHashCode_m33855_gshared)(__this, method)
// T System.Nullable`1<System.TimeSpan>::GetValueOrDefault()
extern "C" TimeSpan_t334  Nullable_1_GetValueOrDefault_m33856_gshared (Nullable_1_t1235 * __this, const MethodInfo* method);
#define Nullable_1_GetValueOrDefault_m33856(__this, method) (( TimeSpan_t334  (*) (Nullable_1_t1235 *, const MethodInfo*))Nullable_1_GetValueOrDefault_m33856_gshared)(__this, method)
// System.String System.Nullable`1<System.TimeSpan>::ToString()
extern "C" String_t* Nullable_1_ToString_m33857_gshared (Nullable_1_t1235 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m33857(__this, method) (( String_t* (*) (Nullable_1_t1235 *, const MethodInfo*))Nullable_1_ToString_m33857_gshared)(__this, method)
