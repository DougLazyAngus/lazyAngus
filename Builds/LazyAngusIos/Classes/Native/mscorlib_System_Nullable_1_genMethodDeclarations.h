#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Nullable`1<System.Int32>
struct Nullable_1_t688;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Nullable`1<System.Int32>
#include "mscorlib_System_Nullable_1_gen.h"

// System.Void System.Nullable`1<System.Int32>::.ctor(T)
extern "C" void Nullable_1__ctor_m3696_gshared (Nullable_1_t688 * __this, int32_t ___value, const MethodInfo* method);
#define Nullable_1__ctor_m3696(__this, ___value, method) (( void (*) (Nullable_1_t688 *, int32_t, const MethodInfo*))Nullable_1__ctor_m3696_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m4056_gshared (Nullable_1_t688 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m4056(__this, method) (( bool (*) (Nullable_1_t688 *, const MethodInfo*))Nullable_1_get_HasValue_m4056_gshared)(__this, method)
// T System.Nullable`1<System.Int32>::get_Value()
extern "C" int32_t Nullable_1_get_Value_m4057_gshared (Nullable_1_t688 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m4057(__this, method) (( int32_t (*) (Nullable_1_t688 *, const MethodInfo*))Nullable_1_get_Value_m4057_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.Int32>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m22393_gshared (Nullable_1_t688 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m22393(__this, ___other, method) (( bool (*) (Nullable_1_t688 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m22393_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.Int32>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m22394_gshared (Nullable_1_t688 * __this, Nullable_1_t688  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m22394(__this, ___other, method) (( bool (*) (Nullable_1_t688 *, Nullable_1_t688 , const MethodInfo*))Nullable_1_Equals_m22394_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.Int32>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m22395_gshared (Nullable_1_t688 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m22395(__this, method) (( int32_t (*) (Nullable_1_t688 *, const MethodInfo*))Nullable_1_GetHashCode_m22395_gshared)(__this, method)
// T System.Nullable`1<System.Int32>::GetValueOrDefault()
extern "C" int32_t Nullable_1_GetValueOrDefault_m22396_gshared (Nullable_1_t688 * __this, const MethodInfo* method);
#define Nullable_1_GetValueOrDefault_m22396(__this, method) (( int32_t (*) (Nullable_1_t688 *, const MethodInfo*))Nullable_1_GetValueOrDefault_m22396_gshared)(__this, method)
// System.String System.Nullable`1<System.Int32>::ToString()
extern "C" String_t* Nullable_1_ToString_m22397_gshared (Nullable_1_t688 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m22397(__this, method) (( String_t* (*) (Nullable_1_t688 *, const MethodInfo*))Nullable_1_ToString_m22397_gshared)(__this, method)
