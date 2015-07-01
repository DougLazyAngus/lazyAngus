#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Single>
struct DefaultComparer_t3562;

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Single>::.ctor()
extern "C" void DefaultComparer__ctor_m21220_gshared (DefaultComparer_t3562 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m21220(__this, method) (( void (*) (DefaultComparer_t3562 *, const MethodInfo*))DefaultComparer__ctor_m21220_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Single>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m21221_gshared (DefaultComparer_t3562 * __this, float ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m21221(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3562 *, float, const MethodInfo*))DefaultComparer_GetHashCode_m21221_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Single>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m21222_gshared (DefaultComparer_t3562 * __this, float ___x, float ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m21222(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3562 *, float, float, const MethodInfo*))DefaultComparer_Equals_m21222_gshared)(__this, ___x, ___y, method)
