#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Nullable`1<System.DateTime>
struct Nullable_1_t1236;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Nullable`1<System.DateTime>
#include "mscorlib_System_Nullable_1_gen_2.h"

// System.Void System.Nullable`1<System.DateTime>::.ctor(T)
extern "C" void Nullable_1__ctor_m7343_gshared (Nullable_1_t1236 * __this, DateTime_t287  ___value, const MethodInfo* method);
#define Nullable_1__ctor_m7343(__this, ___value, method) (( void (*) (Nullable_1_t1236 *, DateTime_t287 , const MethodInfo*))Nullable_1__ctor_m7343_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.DateTime>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m7344_gshared (Nullable_1_t1236 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m7344(__this, method) (( bool (*) (Nullable_1_t1236 *, const MethodInfo*))Nullable_1_get_HasValue_m7344_gshared)(__this, method)
// T System.Nullable`1<System.DateTime>::get_Value()
extern "C" DateTime_t287  Nullable_1_get_Value_m7395_gshared (Nullable_1_t1236 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m7395(__this, method) (( DateTime_t287  (*) (Nullable_1_t1236 *, const MethodInfo*))Nullable_1_get_Value_m7395_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.DateTime>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m32528_gshared (Nullable_1_t1236 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m32528(__this, ___other, method) (( bool (*) (Nullable_1_t1236 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m32528_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.DateTime>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m32529_gshared (Nullable_1_t1236 * __this, Nullable_1_t1236  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m32529(__this, ___other, method) (( bool (*) (Nullable_1_t1236 *, Nullable_1_t1236 , const MethodInfo*))Nullable_1_Equals_m32529_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.DateTime>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m32530_gshared (Nullable_1_t1236 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m32530(__this, method) (( int32_t (*) (Nullable_1_t1236 *, const MethodInfo*))Nullable_1_GetHashCode_m32530_gshared)(__this, method)
// T System.Nullable`1<System.DateTime>::GetValueOrDefault()
extern "C" DateTime_t287  Nullable_1_GetValueOrDefault_m32531_gshared (Nullable_1_t1236 * __this, const MethodInfo* method);
#define Nullable_1_GetValueOrDefault_m32531(__this, method) (( DateTime_t287  (*) (Nullable_1_t1236 *, const MethodInfo*))Nullable_1_GetValueOrDefault_m32531_gshared)(__this, method)
// System.String System.Nullable`1<System.DateTime>::ToString()
extern "C" String_t* Nullable_1_ToString_m32532_gshared (Nullable_1_t1236 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m32532(__this, method) (( String_t* (*) (Nullable_1_t1236 *, const MethodInfo*))Nullable_1_ToString_m32532_gshared)(__this, method)
