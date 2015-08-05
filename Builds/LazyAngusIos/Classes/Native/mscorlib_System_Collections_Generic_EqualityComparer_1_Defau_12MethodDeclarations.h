#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Double>
struct DefaultComparer_t6686;

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Double>::.ctor()
extern "C" void DefaultComparer__ctor_m40068_gshared (DefaultComparer_t6686 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m40068(__this, method) (( void (*) (DefaultComparer_t6686 *, const MethodInfo*))DefaultComparer__ctor_m40068_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Double>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m40069_gshared (DefaultComparer_t6686 * __this, double ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m40069(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t6686 *, double, const MethodInfo*))DefaultComparer_GetHashCode_m40069_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Double>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m40070_gshared (DefaultComparer_t6686 * __this, double ___x, double ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m40070(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t6686 *, double, double, const MethodInfo*))DefaultComparer_Equals_m40070_gshared)(__this, ___x, ___y, method)
