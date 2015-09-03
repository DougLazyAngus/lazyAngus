#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Nullable`1<System.Single>
struct Nullable_1_t705;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Nullable`1<System.Single>
#include "mscorlib_System_Nullable_1_gen_0.h"

// System.Void System.Nullable`1<System.Single>::.ctor(T)
extern "C" void Nullable_1__ctor_m4042_gshared (Nullable_1_t705 * __this, float ___value, const MethodInfo* method);
#define Nullable_1__ctor_m4042(__this, ___value, method) (( void (*) (Nullable_1_t705 *, float, const MethodInfo*))Nullable_1__ctor_m4042_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.Single>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m4232_gshared (Nullable_1_t705 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m4232(__this, method) (( bool (*) (Nullable_1_t705 *, const MethodInfo*))Nullable_1_get_HasValue_m4232_gshared)(__this, method)
// T System.Nullable`1<System.Single>::get_Value()
extern "C" float Nullable_1_get_Value_m4233_gshared (Nullable_1_t705 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m4233(__this, method) (( float (*) (Nullable_1_t705 *, const MethodInfo*))Nullable_1_get_Value_m4233_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.Single>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m26753_gshared (Nullable_1_t705 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m26753(__this, ___other, method) (( bool (*) (Nullable_1_t705 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m26753_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.Single>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m26754_gshared (Nullable_1_t705 * __this, Nullable_1_t705  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m26754(__this, ___other, method) (( bool (*) (Nullable_1_t705 *, Nullable_1_t705 , const MethodInfo*))Nullable_1_Equals_m26754_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.Single>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m26755_gshared (Nullable_1_t705 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m26755(__this, method) (( int32_t (*) (Nullable_1_t705 *, const MethodInfo*))Nullable_1_GetHashCode_m26755_gshared)(__this, method)
// T System.Nullable`1<System.Single>::GetValueOrDefault()
extern "C" float Nullable_1_GetValueOrDefault_m26756_gshared (Nullable_1_t705 * __this, const MethodInfo* method);
#define Nullable_1_GetValueOrDefault_m26756(__this, method) (( float (*) (Nullable_1_t705 *, const MethodInfo*))Nullable_1_GetValueOrDefault_m26756_gshared)(__this, method)
// System.String System.Nullable`1<System.Single>::ToString()
extern "C" String_t* Nullable_1_ToString_m26757_gshared (Nullable_1_t705 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m26757(__this, method) (( String_t* (*) (Nullable_1_t705 *, const MethodInfo*))Nullable_1_ToString_m26757_gshared)(__this, method)
