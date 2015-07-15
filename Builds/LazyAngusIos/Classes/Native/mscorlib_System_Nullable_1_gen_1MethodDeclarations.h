#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Nullable`1<System.TimeSpan>
struct Nullable_1_t2805;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.Nullable`1<System.TimeSpan>
#include "mscorlib_System_Nullable_1_gen_1.h"

// System.Void System.Nullable`1<System.TimeSpan>::.ctor(T)
extern "C" void Nullable_1__ctor_m15898_gshared (Nullable_1_t2805 * __this, TimeSpan_t266  ___value, const MethodInfo* method);
#define Nullable_1__ctor_m15898(__this, ___value, method) (( void (*) (Nullable_1_t2805 *, TimeSpan_t266 , const MethodInfo*))Nullable_1__ctor_m15898_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m15899_gshared (Nullable_1_t2805 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m15899(__this, method) (( bool (*) (Nullable_1_t2805 *, const MethodInfo*))Nullable_1_get_HasValue_m15899_gshared)(__this, method)
// T System.Nullable`1<System.TimeSpan>::get_Value()
extern "C" TimeSpan_t266  Nullable_1_get_Value_m15900_gshared (Nullable_1_t2805 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m15900(__this, method) (( TimeSpan_t266  (*) (Nullable_1_t2805 *, const MethodInfo*))Nullable_1_get_Value_m15900_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m28279_gshared (Nullable_1_t2805 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m28279(__this, ___other, method) (( bool (*) (Nullable_1_t2805 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m28279_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m28280_gshared (Nullable_1_t2805 * __this, Nullable_1_t2805  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m28280(__this, ___other, method) (( bool (*) (Nullable_1_t2805 *, Nullable_1_t2805 , const MethodInfo*))Nullable_1_Equals_m28280_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.TimeSpan>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m28281_gshared (Nullable_1_t2805 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m28281(__this, method) (( int32_t (*) (Nullable_1_t2805 *, const MethodInfo*))Nullable_1_GetHashCode_m28281_gshared)(__this, method)
// System.String System.Nullable`1<System.TimeSpan>::ToString()
extern "C" String_t* Nullable_1_ToString_m28282_gshared (Nullable_1_t2805 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m28282(__this, method) (( String_t* (*) (Nullable_1_t2805 *, const MethodInfo*))Nullable_1_ToString_m28282_gshared)(__this, method)
