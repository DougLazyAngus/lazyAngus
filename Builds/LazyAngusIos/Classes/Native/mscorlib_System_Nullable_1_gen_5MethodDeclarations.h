#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Nullable`1<System.Byte>
struct Nullable_1_t9214;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Nullable`1<System.Byte>
#include "mscorlib_System_Nullable_1_gen_5.h"

// System.Void System.Nullable`1<System.Byte>::.ctor(T)
extern "C" void Nullable_1__ctor_m68423_gshared (Nullable_1_t9214 * __this, uint8_t ___value, const MethodInfo* method);
#define Nullable_1__ctor_m68423(__this, ___value, method) (( void (*) (Nullable_1_t9214 *, uint8_t, const MethodInfo*))Nullable_1__ctor_m68423_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.Byte>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m68425_gshared (Nullable_1_t9214 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m68425(__this, method) (( bool (*) (Nullable_1_t9214 *, const MethodInfo*))Nullable_1_get_HasValue_m68425_gshared)(__this, method)
// T System.Nullable`1<System.Byte>::get_Value()
extern "C" uint8_t Nullable_1_get_Value_m68427_gshared (Nullable_1_t9214 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m68427(__this, method) (( uint8_t (*) (Nullable_1_t9214 *, const MethodInfo*))Nullable_1_get_Value_m68427_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.Byte>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m68429_gshared (Nullable_1_t9214 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m68429(__this, ___other, method) (( bool (*) (Nullable_1_t9214 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m68429_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.Byte>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m68431_gshared (Nullable_1_t9214 * __this, Nullable_1_t9214  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m68431(__this, ___other, method) (( bool (*) (Nullable_1_t9214 *, Nullable_1_t9214 , const MethodInfo*))Nullable_1_Equals_m68431_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.Byte>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m68433_gshared (Nullable_1_t9214 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m68433(__this, method) (( int32_t (*) (Nullable_1_t9214 *, const MethodInfo*))Nullable_1_GetHashCode_m68433_gshared)(__this, method)
// T System.Nullable`1<System.Byte>::GetValueOrDefault()
extern "C" uint8_t Nullable_1_GetValueOrDefault_m68435_gshared (Nullable_1_t9214 * __this, const MethodInfo* method);
#define Nullable_1_GetValueOrDefault_m68435(__this, method) (( uint8_t (*) (Nullable_1_t9214 *, const MethodInfo*))Nullable_1_GetValueOrDefault_m68435_gshared)(__this, method)
// System.String System.Nullable`1<System.Byte>::ToString()
extern "C" String_t* Nullable_1_ToString_m68437_gshared (Nullable_1_t9214 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m68437(__this, method) (( String_t* (*) (Nullable_1_t9214 *, const MethodInfo*))Nullable_1_ToString_m68437_gshared)(__this, method)
