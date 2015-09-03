#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Nullable`1<System.Byte>
struct Nullable_1_t9213;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Nullable`1<System.Byte>
#include "mscorlib_System_Nullable_1_gen_5.h"

// System.Void System.Nullable`1<System.Byte>::.ctor(T)
extern "C" void Nullable_1__ctor_m68410_gshared (Nullable_1_t9213 * __this, uint8_t ___value, const MethodInfo* method);
#define Nullable_1__ctor_m68410(__this, ___value, method) (( void (*) (Nullable_1_t9213 *, uint8_t, const MethodInfo*))Nullable_1__ctor_m68410_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.Byte>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m68412_gshared (Nullable_1_t9213 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m68412(__this, method) (( bool (*) (Nullable_1_t9213 *, const MethodInfo*))Nullable_1_get_HasValue_m68412_gshared)(__this, method)
// T System.Nullable`1<System.Byte>::get_Value()
extern "C" uint8_t Nullable_1_get_Value_m68414_gshared (Nullable_1_t9213 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m68414(__this, method) (( uint8_t (*) (Nullable_1_t9213 *, const MethodInfo*))Nullable_1_get_Value_m68414_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.Byte>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m68416_gshared (Nullable_1_t9213 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m68416(__this, ___other, method) (( bool (*) (Nullable_1_t9213 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m68416_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.Byte>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m68418_gshared (Nullable_1_t9213 * __this, Nullable_1_t9213  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m68418(__this, ___other, method) (( bool (*) (Nullable_1_t9213 *, Nullable_1_t9213 , const MethodInfo*))Nullable_1_Equals_m68418_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.Byte>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m68420_gshared (Nullable_1_t9213 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m68420(__this, method) (( int32_t (*) (Nullable_1_t9213 *, const MethodInfo*))Nullable_1_GetHashCode_m68420_gshared)(__this, method)
// T System.Nullable`1<System.Byte>::GetValueOrDefault()
extern "C" uint8_t Nullable_1_GetValueOrDefault_m68422_gshared (Nullable_1_t9213 * __this, const MethodInfo* method);
#define Nullable_1_GetValueOrDefault_m68422(__this, method) (( uint8_t (*) (Nullable_1_t9213 *, const MethodInfo*))Nullable_1_GetValueOrDefault_m68422_gshared)(__this, method)
// System.String System.Nullable`1<System.Byte>::ToString()
extern "C" String_t* Nullable_1_ToString_m68424_gshared (Nullable_1_t9213 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m68424(__this, method) (( String_t* (*) (Nullable_1_t9213 *, const MethodInfo*))Nullable_1_ToString_m68424_gshared)(__this, method)
