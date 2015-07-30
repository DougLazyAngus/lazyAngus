#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Nullable`1<System.TimeSpan>
struct Nullable_1_t1241;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.Nullable`1<System.TimeSpan>
#include "mscorlib_System_Nullable_1_gen_3.h"

// System.Void System.Nullable`1<System.TimeSpan>::.ctor(T)
extern "C" void Nullable_1__ctor_m19903_gshared (Nullable_1_t1241 * __this, TimeSpan_t334  ___value, const MethodInfo* method);
#define Nullable_1__ctor_m19903(__this, ___value, method) (( void (*) (Nullable_1_t1241 *, TimeSpan_t334 , const MethodInfo*))Nullable_1__ctor_m19903_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m7395_gshared (Nullable_1_t1241 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m7395(__this, method) (( bool (*) (Nullable_1_t1241 *, const MethodInfo*))Nullable_1_get_HasValue_m7395_gshared)(__this, method)
// T System.Nullable`1<System.TimeSpan>::get_Value()
extern "C" TimeSpan_t334  Nullable_1_get_Value_m7397_gshared (Nullable_1_t1241 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m7397(__this, method) (( TimeSpan_t334  (*) (Nullable_1_t1241 *, const MethodInfo*))Nullable_1_get_Value_m7397_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m33900_gshared (Nullable_1_t1241 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m33900(__this, ___other, method) (( bool (*) (Nullable_1_t1241 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m33900_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m33901_gshared (Nullable_1_t1241 * __this, Nullable_1_t1241  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m33901(__this, ___other, method) (( bool (*) (Nullable_1_t1241 *, Nullable_1_t1241 , const MethodInfo*))Nullable_1_Equals_m33901_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.TimeSpan>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m33902_gshared (Nullable_1_t1241 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m33902(__this, method) (( int32_t (*) (Nullable_1_t1241 *, const MethodInfo*))Nullable_1_GetHashCode_m33902_gshared)(__this, method)
// T System.Nullable`1<System.TimeSpan>::GetValueOrDefault()
extern "C" TimeSpan_t334  Nullable_1_GetValueOrDefault_m33903_gshared (Nullable_1_t1241 * __this, const MethodInfo* method);
#define Nullable_1_GetValueOrDefault_m33903(__this, method) (( TimeSpan_t334  (*) (Nullable_1_t1241 *, const MethodInfo*))Nullable_1_GetValueOrDefault_m33903_gshared)(__this, method)
// System.String System.Nullable`1<System.TimeSpan>::ToString()
extern "C" String_t* Nullable_1_ToString_m33904_gshared (Nullable_1_t1241 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m33904(__this, method) (( String_t* (*) (Nullable_1_t1241 *, const MethodInfo*))Nullable_1_ToString_m33904_gshared)(__this, method)
