#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Nullable`1<System.Int32>
struct Nullable_1_t589;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Nullable`1<System.Int32>
#include "mscorlib_System_Nullable_1_gen.h"

// System.Void System.Nullable`1<System.Int32>::.ctor(T)
extern "C" void Nullable_1__ctor_m3114_gshared (Nullable_1_t589 * __this, int32_t ___value, const MethodInfo* method);
#define Nullable_1__ctor_m3114(__this, ___value, method) (( void (*) (Nullable_1_t589 *, int32_t, const MethodInfo*))Nullable_1__ctor_m3114_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m3477_gshared (Nullable_1_t589 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m3477(__this, method) (( bool (*) (Nullable_1_t589 *, const MethodInfo*))Nullable_1_get_HasValue_m3477_gshared)(__this, method)
// T System.Nullable`1<System.Int32>::get_Value()
extern "C" int32_t Nullable_1_get_Value_m3478_gshared (Nullable_1_t589 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m3478(__this, method) (( int32_t (*) (Nullable_1_t589 *, const MethodInfo*))Nullable_1_get_Value_m3478_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.Int32>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m18215_gshared (Nullable_1_t589 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m18215(__this, ___other, method) (( bool (*) (Nullable_1_t589 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m18215_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.Int32>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m18216_gshared (Nullable_1_t589 * __this, Nullable_1_t589  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m18216(__this, ___other, method) (( bool (*) (Nullable_1_t589 *, Nullable_1_t589 , const MethodInfo*))Nullable_1_Equals_m18216_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.Int32>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m18217_gshared (Nullable_1_t589 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m18217(__this, method) (( int32_t (*) (Nullable_1_t589 *, const MethodInfo*))Nullable_1_GetHashCode_m18217_gshared)(__this, method)
// System.String System.Nullable`1<System.Int32>::ToString()
extern "C" String_t* Nullable_1_ToString_m18218_gshared (Nullable_1_t589 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m18218(__this, method) (( String_t* (*) (Nullable_1_t589 *, const MethodInfo*))Nullable_1_ToString_m18218_gshared)(__this, method)
