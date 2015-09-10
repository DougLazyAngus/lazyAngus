#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Nullable`1<System.DateTime>
struct Nullable_1_t1315;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Nullable`1<System.DateTime>
#include "mscorlib_System_Nullable_1_gen_2.h"

// System.Void System.Nullable`1<System.DateTime>::.ctor(T)
extern "C" void Nullable_1__ctor_m7823_gshared (Nullable_1_t1315 * __this, DateTime_t287  ___value, const MethodInfo* method);
#define Nullable_1__ctor_m7823(__this, ___value, method) (( void (*) (Nullable_1_t1315 *, DateTime_t287 , const MethodInfo*))Nullable_1__ctor_m7823_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.DateTime>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m7824_gshared (Nullable_1_t1315 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m7824(__this, method) (( bool (*) (Nullable_1_t1315 *, const MethodInfo*))Nullable_1_get_HasValue_m7824_gshared)(__this, method)
// T System.Nullable`1<System.DateTime>::get_Value()
extern "C" DateTime_t287  Nullable_1_get_Value_m7875_gshared (Nullable_1_t1315 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m7875(__this, method) (( DateTime_t287  (*) (Nullable_1_t1315 *, const MethodInfo*))Nullable_1_get_Value_m7875_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.DateTime>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m37984_gshared (Nullable_1_t1315 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m37984(__this, ___other, method) (( bool (*) (Nullable_1_t1315 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m37984_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.DateTime>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m37985_gshared (Nullable_1_t1315 * __this, Nullable_1_t1315  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m37985(__this, ___other, method) (( bool (*) (Nullable_1_t1315 *, Nullable_1_t1315 , const MethodInfo*))Nullable_1_Equals_m37985_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.DateTime>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m37986_gshared (Nullable_1_t1315 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m37986(__this, method) (( int32_t (*) (Nullable_1_t1315 *, const MethodInfo*))Nullable_1_GetHashCode_m37986_gshared)(__this, method)
// T System.Nullable`1<System.DateTime>::GetValueOrDefault()
extern "C" DateTime_t287  Nullable_1_GetValueOrDefault_m37987_gshared (Nullable_1_t1315 * __this, const MethodInfo* method);
#define Nullable_1_GetValueOrDefault_m37987(__this, method) (( DateTime_t287  (*) (Nullable_1_t1315 *, const MethodInfo*))Nullable_1_GetValueOrDefault_m37987_gshared)(__this, method)
// System.String System.Nullable`1<System.DateTime>::ToString()
extern "C" String_t* Nullable_1_ToString_m37988_gshared (Nullable_1_t1315 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m37988(__this, method) (( String_t* (*) (Nullable_1_t1315 *, const MethodInfo*))Nullable_1_ToString_m37988_gshared)(__this, method)
