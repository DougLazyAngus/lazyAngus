﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Nullable`1<System.Single>
struct Nullable_1_t518;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Nullable`1<System.Single>
#include "mscorlib_System_Nullable_1_gen_0.h"

// System.Void System.Nullable`1<System.Single>::.ctor(T)
extern "C" void Nullable_1__ctor_m2609_gshared (Nullable_1_t518 * __this, float ___value, const MethodInfo* method);
#define Nullable_1__ctor_m2609(__this, ___value, method) (( void (*) (Nullable_1_t518 *, float, const MethodInfo*))Nullable_1__ctor_m2609_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.Single>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m2788_gshared (Nullable_1_t518 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m2788(__this, method) (( bool (*) (Nullable_1_t518 *, const MethodInfo*))Nullable_1_get_HasValue_m2788_gshared)(__this, method)
// T System.Nullable`1<System.Single>::get_Value()
extern "C" float Nullable_1_get_Value_m2789_gshared (Nullable_1_t518 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m2789(__this, method) (( float (*) (Nullable_1_t518 *, const MethodInfo*))Nullable_1_get_Value_m2789_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.Single>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m17458_gshared (Nullable_1_t518 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m17458(__this, ___other, method) (( bool (*) (Nullable_1_t518 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m17458_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.Single>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m17459_gshared (Nullable_1_t518 * __this, Nullable_1_t518  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m17459(__this, ___other, method) (( bool (*) (Nullable_1_t518 *, Nullable_1_t518 , const MethodInfo*))Nullable_1_Equals_m17459_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.Single>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m17460_gshared (Nullable_1_t518 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m17460(__this, method) (( int32_t (*) (Nullable_1_t518 *, const MethodInfo*))Nullable_1_GetHashCode_m17460_gshared)(__this, method)
// System.String System.Nullable`1<System.Single>::ToString()
extern "C" String_t* Nullable_1_ToString_m17461_gshared (Nullable_1_t518 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m17461(__this, method) (( String_t* (*) (Nullable_1_t518 *, const MethodInfo*))Nullable_1_ToString_m17461_gshared)(__this, method)