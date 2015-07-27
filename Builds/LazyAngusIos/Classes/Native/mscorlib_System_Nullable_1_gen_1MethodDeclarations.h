#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Nullable`1<System.TimeSpan>
struct Nullable_1_t2859;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.Nullable`1<System.TimeSpan>
#include "mscorlib_System_Nullable_1_gen_1.h"

// System.Void System.Nullable`1<System.TimeSpan>::.ctor(T)
extern "C" void Nullable_1__ctor_m16486_gshared (Nullable_1_t2859 * __this, TimeSpan_t294  ___value, const MethodInfo* method);
#define Nullable_1__ctor_m16486(__this, ___value, method) (( void (*) (Nullable_1_t2859 *, TimeSpan_t294 , const MethodInfo*))Nullable_1__ctor_m16486_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m16487_gshared (Nullable_1_t2859 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m16487(__this, method) (( bool (*) (Nullable_1_t2859 *, const MethodInfo*))Nullable_1_get_HasValue_m16487_gshared)(__this, method)
// T System.Nullable`1<System.TimeSpan>::get_Value()
extern "C" TimeSpan_t294  Nullable_1_get_Value_m16488_gshared (Nullable_1_t2859 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m16488(__this, method) (( TimeSpan_t294  (*) (Nullable_1_t2859 *, const MethodInfo*))Nullable_1_get_Value_m16488_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m29357_gshared (Nullable_1_t2859 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m29357(__this, ___other, method) (( bool (*) (Nullable_1_t2859 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m29357_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m29358_gshared (Nullable_1_t2859 * __this, Nullable_1_t2859  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m29358(__this, ___other, method) (( bool (*) (Nullable_1_t2859 *, Nullable_1_t2859 , const MethodInfo*))Nullable_1_Equals_m29358_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.TimeSpan>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m29359_gshared (Nullable_1_t2859 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m29359(__this, method) (( int32_t (*) (Nullable_1_t2859 *, const MethodInfo*))Nullable_1_GetHashCode_m29359_gshared)(__this, method)
// System.String System.Nullable`1<System.TimeSpan>::ToString()
extern "C" String_t* Nullable_1_ToString_m29360_gshared (Nullable_1_t2859 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m29360(__this, method) (( String_t* (*) (Nullable_1_t2859 *, const MethodInfo*))Nullable_1_ToString_m29360_gshared)(__this, method)
