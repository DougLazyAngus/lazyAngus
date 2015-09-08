#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Double>
struct DefaultComparer_t7332;

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Double>::.ctor()
extern "C" void DefaultComparer__ctor_m45471_gshared (DefaultComparer_t7332 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m45471(__this, method) (( void (*) (DefaultComparer_t7332 *, const MethodInfo*))DefaultComparer__ctor_m45471_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Double>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m45472_gshared (DefaultComparer_t7332 * __this, double ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m45472(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t7332 *, double, const MethodInfo*))DefaultComparer_GetHashCode_m45472_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Double>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m45473_gshared (DefaultComparer_t7332 * __this, double ___x, double ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m45473(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t7332 *, double, double, const MethodInfo*))DefaultComparer_Equals_m45473_gshared)(__this, ___x, ___y, method)
