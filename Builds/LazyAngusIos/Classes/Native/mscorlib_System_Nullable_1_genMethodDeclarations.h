#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Nullable`1<System.Int32>
struct Nullable_1_t645;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Nullable`1<System.Int32>
#include "mscorlib_System_Nullable_1_gen.h"

// System.Void System.Nullable`1<System.Int32>::.ctor(T)
extern "C" void Nullable_1__ctor_m3483_gshared (Nullable_1_t645 * __this, int32_t ___value, const MethodInfo* method);
#define Nullable_1__ctor_m3483(__this, ___value, method) (( void (*) (Nullable_1_t645 *, int32_t, const MethodInfo*))Nullable_1__ctor_m3483_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m3843_gshared (Nullable_1_t645 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m3843(__this, method) (( bool (*) (Nullable_1_t645 *, const MethodInfo*))Nullable_1_get_HasValue_m3843_gshared)(__this, method)
// T System.Nullable`1<System.Int32>::get_Value()
extern "C" int32_t Nullable_1_get_Value_m3844_gshared (Nullable_1_t645 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m3844(__this, method) (( int32_t (*) (Nullable_1_t645 *, const MethodInfo*))Nullable_1_get_Value_m3844_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.Int32>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m22160_gshared (Nullable_1_t645 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m22160(__this, ___other, method) (( bool (*) (Nullable_1_t645 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m22160_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.Int32>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m22161_gshared (Nullable_1_t645 * __this, Nullable_1_t645  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m22161(__this, ___other, method) (( bool (*) (Nullable_1_t645 *, Nullable_1_t645 , const MethodInfo*))Nullable_1_Equals_m22161_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.Int32>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m22162_gshared (Nullable_1_t645 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m22162(__this, method) (( int32_t (*) (Nullable_1_t645 *, const MethodInfo*))Nullable_1_GetHashCode_m22162_gshared)(__this, method)
// T System.Nullable`1<System.Int32>::GetValueOrDefault()
extern "C" int32_t Nullable_1_GetValueOrDefault_m22163_gshared (Nullable_1_t645 * __this, const MethodInfo* method);
#define Nullable_1_GetValueOrDefault_m22163(__this, method) (( int32_t (*) (Nullable_1_t645 *, const MethodInfo*))Nullable_1_GetValueOrDefault_m22163_gshared)(__this, method)
// System.String System.Nullable`1<System.Int32>::ToString()
extern "C" String_t* Nullable_1_ToString_m22164_gshared (Nullable_1_t645 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m22164(__this, method) (( String_t* (*) (Nullable_1_t645 *, const MethodInfo*))Nullable_1_ToString_m22164_gshared)(__this, method)
