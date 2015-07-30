#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.IdentityEqualityComparer`1<System.Object>
struct IdentityEqualityComparer_1_t1413;
// System.Object
struct Object_t;

// System.Boolean Parse.Internal.IdentityEqualityComparer`1<System.Object>::Equals(T,T)
extern "C" bool IdentityEqualityComparer_1_Equals_m31013_gshared (IdentityEqualityComparer_1_t1413 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method);
#define IdentityEqualityComparer_1_Equals_m31013(__this, ___x, ___y, method) (( bool (*) (IdentityEqualityComparer_1_t1413 *, Object_t *, Object_t *, const MethodInfo*))IdentityEqualityComparer_1_Equals_m31013_gshared)(__this, ___x, ___y, method)
// System.Int32 Parse.Internal.IdentityEqualityComparer`1<System.Object>::GetHashCode(T)
extern "C" int32_t IdentityEqualityComparer_1_GetHashCode_m31014_gshared (IdentityEqualityComparer_1_t1413 * __this, Object_t * ___obj, const MethodInfo* method);
#define IdentityEqualityComparer_1_GetHashCode_m31014(__this, ___obj, method) (( int32_t (*) (IdentityEqualityComparer_1_t1413 *, Object_t *, const MethodInfo*))IdentityEqualityComparer_1_GetHashCode_m31014_gshared)(__this, ___obj, method)
// System.Void Parse.Internal.IdentityEqualityComparer`1<System.Object>::.ctor()
extern "C" void IdentityEqualityComparer_1__ctor_m7207_gshared (IdentityEqualityComparer_1_t1413 * __this, const MethodInfo* method);
#define IdentityEqualityComparer_1__ctor_m7207(__this, method) (( void (*) (IdentityEqualityComparer_1_t1413 *, const MethodInfo*))IdentityEqualityComparer_1__ctor_m7207_gshared)(__this, method)
