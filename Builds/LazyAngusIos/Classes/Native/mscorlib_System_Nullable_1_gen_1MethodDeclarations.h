#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Nullable`1<System.Guid>
struct Nullable_1_t1229;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Guid
#include "mscorlib_System_Guid.h"
// System.Nullable`1<System.Guid>
#include "mscorlib_System_Nullable_1_gen_1.h"

// System.Void System.Nullable`1<System.Guid>::.ctor(T)
extern "C" void Nullable_1__ctor_m7456_gshared (Nullable_1_t1229 * __this, Guid_t74  ___value, const MethodInfo* method);
#define Nullable_1__ctor_m7456(__this, ___value, method) (( void (*) (Nullable_1_t1229 *, Guid_t74 , const MethodInfo*))Nullable_1__ctor_m7456_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.Guid>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m7455_gshared (Nullable_1_t1229 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m7455(__this, method) (( bool (*) (Nullable_1_t1229 *, const MethodInfo*))Nullable_1_get_HasValue_m7455_gshared)(__this, method)
// T System.Nullable`1<System.Guid>::get_Value()
extern "C" Guid_t74  Nullable_1_get_Value_m7638_gshared (Nullable_1_t1229 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m7638(__this, method) (( Guid_t74  (*) (Nullable_1_t1229 *, const MethodInfo*))Nullable_1_get_Value_m7638_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.Guid>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m32248_gshared (Nullable_1_t1229 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m32248(__this, ___other, method) (( bool (*) (Nullable_1_t1229 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m32248_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.Guid>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m32249_gshared (Nullable_1_t1229 * __this, Nullable_1_t1229  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m32249(__this, ___other, method) (( bool (*) (Nullable_1_t1229 *, Nullable_1_t1229 , const MethodInfo*))Nullable_1_Equals_m32249_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.Guid>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m32250_gshared (Nullable_1_t1229 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m32250(__this, method) (( int32_t (*) (Nullable_1_t1229 *, const MethodInfo*))Nullable_1_GetHashCode_m32250_gshared)(__this, method)
// T System.Nullable`1<System.Guid>::GetValueOrDefault()
extern "C" Guid_t74  Nullable_1_GetValueOrDefault_m32251_gshared (Nullable_1_t1229 * __this, const MethodInfo* method);
#define Nullable_1_GetValueOrDefault_m32251(__this, method) (( Guid_t74  (*) (Nullable_1_t1229 *, const MethodInfo*))Nullable_1_GetValueOrDefault_m32251_gshared)(__this, method)
// System.String System.Nullable`1<System.Guid>::ToString()
extern "C" String_t* Nullable_1_ToString_m32252_gshared (Nullable_1_t1229 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m32252(__this, method) (( String_t* (*) (Nullable_1_t1229 *, const MethodInfo*))Nullable_1_ToString_m32252_gshared)(__this, method)
