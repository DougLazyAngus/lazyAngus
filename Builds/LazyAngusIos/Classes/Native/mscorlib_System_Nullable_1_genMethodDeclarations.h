#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Nullable`1<System.Int32>
struct Nullable_1_t715;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Nullable`1<System.Int32>
#include "mscorlib_System_Nullable_1_gen.h"

// System.Void System.Nullable`1<System.Int32>::.ctor(T)
extern "C" void Nullable_1__ctor_m3927_gshared (Nullable_1_t715 * __this, int32_t ___value, const MethodInfo* method);
#define Nullable_1__ctor_m3927(__this, ___value, method) (( void (*) (Nullable_1_t715 *, int32_t, const MethodInfo*))Nullable_1__ctor_m3927_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m4287_gshared (Nullable_1_t715 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m4287(__this, method) (( bool (*) (Nullable_1_t715 *, const MethodInfo*))Nullable_1_get_HasValue_m4287_gshared)(__this, method)
// T System.Nullable`1<System.Int32>::get_Value()
extern "C" int32_t Nullable_1_get_Value_m4288_gshared (Nullable_1_t715 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m4288(__this, method) (( int32_t (*) (Nullable_1_t715 *, const MethodInfo*))Nullable_1_get_Value_m4288_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.Int32>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m26818_gshared (Nullable_1_t715 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m26818(__this, ___other, method) (( bool (*) (Nullable_1_t715 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m26818_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.Int32>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m26819_gshared (Nullable_1_t715 * __this, Nullable_1_t715  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m26819(__this, ___other, method) (( bool (*) (Nullable_1_t715 *, Nullable_1_t715 , const MethodInfo*))Nullable_1_Equals_m26819_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.Int32>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m26820_gshared (Nullable_1_t715 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m26820(__this, method) (( int32_t (*) (Nullable_1_t715 *, const MethodInfo*))Nullable_1_GetHashCode_m26820_gshared)(__this, method)
// T System.Nullable`1<System.Int32>::GetValueOrDefault()
extern "C" int32_t Nullable_1_GetValueOrDefault_m26821_gshared (Nullable_1_t715 * __this, const MethodInfo* method);
#define Nullable_1_GetValueOrDefault_m26821(__this, method) (( int32_t (*) (Nullable_1_t715 *, const MethodInfo*))Nullable_1_GetValueOrDefault_m26821_gshared)(__this, method)
// System.String System.Nullable`1<System.Int32>::ToString()
extern "C" String_t* Nullable_1_ToString_m26822_gshared (Nullable_1_t715 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m26822(__this, method) (( String_t* (*) (Nullable_1_t715 *, const MethodInfo*))Nullable_1_ToString_m26822_gshared)(__this, method)
