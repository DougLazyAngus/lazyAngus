#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Nullable`1<System.Guid>
struct Nullable_1_t1248;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Guid
#include "mscorlib_System_Guid.h"
// System.Nullable`1<System.Guid>
#include "mscorlib_System_Nullable_1_gen_1.h"

// System.Void System.Nullable`1<System.Guid>::.ctor(T)
extern "C" void Nullable_1__ctor_m7624_gshared (Nullable_1_t1248 * __this, Guid_t74  ___value, const MethodInfo* method);
#define Nullable_1__ctor_m7624(__this, ___value, method) (( void (*) (Nullable_1_t1248 *, Guid_t74 , const MethodInfo*))Nullable_1__ctor_m7624_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.Guid>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m7623_gshared (Nullable_1_t1248 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m7623(__this, method) (( bool (*) (Nullable_1_t1248 *, const MethodInfo*))Nullable_1_get_HasValue_m7623_gshared)(__this, method)
// T System.Nullable`1<System.Guid>::get_Value()
extern "C" Guid_t74  Nullable_1_get_Value_m7806_gshared (Nullable_1_t1248 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m7806(__this, method) (( Guid_t74  (*) (Nullable_1_t1248 *, const MethodInfo*))Nullable_1_get_Value_m7806_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.Guid>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m36843_gshared (Nullable_1_t1248 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m36843(__this, ___other, method) (( bool (*) (Nullable_1_t1248 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m36843_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.Guid>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m36844_gshared (Nullable_1_t1248 * __this, Nullable_1_t1248  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m36844(__this, ___other, method) (( bool (*) (Nullable_1_t1248 *, Nullable_1_t1248 , const MethodInfo*))Nullable_1_Equals_m36844_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.Guid>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m36845_gshared (Nullable_1_t1248 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m36845(__this, method) (( int32_t (*) (Nullable_1_t1248 *, const MethodInfo*))Nullable_1_GetHashCode_m36845_gshared)(__this, method)
// T System.Nullable`1<System.Guid>::GetValueOrDefault()
extern "C" Guid_t74  Nullable_1_GetValueOrDefault_m36846_gshared (Nullable_1_t1248 * __this, const MethodInfo* method);
#define Nullable_1_GetValueOrDefault_m36846(__this, method) (( Guid_t74  (*) (Nullable_1_t1248 *, const MethodInfo*))Nullable_1_GetValueOrDefault_m36846_gshared)(__this, method)
// System.String System.Nullable`1<System.Guid>::ToString()
extern "C" String_t* Nullable_1_ToString_m36847_gshared (Nullable_1_t1248 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m36847(__this, method) (( String_t* (*) (Nullable_1_t1248 *, const MethodInfo*))Nullable_1_ToString_m36847_gshared)(__this, method)
