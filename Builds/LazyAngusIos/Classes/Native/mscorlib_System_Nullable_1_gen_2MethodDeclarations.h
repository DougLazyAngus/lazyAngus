#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Nullable`1<System.DateTime>
struct Nullable_1_t1233;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Nullable`1<System.DateTime>
#include "mscorlib_System_Nullable_1_gen_2.h"

// System.Void System.Nullable`1<System.DateTime>::.ctor(T)
extern "C" void Nullable_1__ctor_m7323_gshared (Nullable_1_t1233 * __this, DateTime_t287  ___value, const MethodInfo* method);
#define Nullable_1__ctor_m7323(__this, ___value, method) (( void (*) (Nullable_1_t1233 *, DateTime_t287 , const MethodInfo*))Nullable_1__ctor_m7323_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.DateTime>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m7324_gshared (Nullable_1_t1233 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m7324(__this, method) (( bool (*) (Nullable_1_t1233 *, const MethodInfo*))Nullable_1_get_HasValue_m7324_gshared)(__this, method)
// T System.Nullable`1<System.DateTime>::get_Value()
extern "C" DateTime_t287  Nullable_1_get_Value_m7375_gshared (Nullable_1_t1233 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m7375(__this, method) (( DateTime_t287  (*) (Nullable_1_t1233 *, const MethodInfo*))Nullable_1_get_Value_m7375_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.DateTime>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m32505_gshared (Nullable_1_t1233 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m32505(__this, ___other, method) (( bool (*) (Nullable_1_t1233 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m32505_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.DateTime>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m32506_gshared (Nullable_1_t1233 * __this, Nullable_1_t1233  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m32506(__this, ___other, method) (( bool (*) (Nullable_1_t1233 *, Nullable_1_t1233 , const MethodInfo*))Nullable_1_Equals_m32506_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.DateTime>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m32507_gshared (Nullable_1_t1233 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m32507(__this, method) (( int32_t (*) (Nullable_1_t1233 *, const MethodInfo*))Nullable_1_GetHashCode_m32507_gshared)(__this, method)
// T System.Nullable`1<System.DateTime>::GetValueOrDefault()
extern "C" DateTime_t287  Nullable_1_GetValueOrDefault_m32508_gshared (Nullable_1_t1233 * __this, const MethodInfo* method);
#define Nullable_1_GetValueOrDefault_m32508(__this, method) (( DateTime_t287  (*) (Nullable_1_t1233 *, const MethodInfo*))Nullable_1_GetValueOrDefault_m32508_gshared)(__this, method)
// System.String System.Nullable`1<System.DateTime>::ToString()
extern "C" String_t* Nullable_1_ToString_m32509_gshared (Nullable_1_t1233 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m32509(__this, method) (( String_t* (*) (Nullable_1_t1233 *, const MethodInfo*))Nullable_1_ToString_m32509_gshared)(__this, method)
