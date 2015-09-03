#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Double>
struct DefaultComparer_t7326;

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Double>::.ctor()
extern "C" void DefaultComparer__ctor_m45446_gshared (DefaultComparer_t7326 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m45446(__this, method) (( void (*) (DefaultComparer_t7326 *, const MethodInfo*))DefaultComparer__ctor_m45446_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Double>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m45447_gshared (DefaultComparer_t7326 * __this, double ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m45447(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t7326 *, double, const MethodInfo*))DefaultComparer_GetHashCode_m45447_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Double>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m45448_gshared (DefaultComparer_t7326 * __this, double ___x, double ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m45448(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t7326 *, double, double, const MethodInfo*))DefaultComparer_Equals_m45448_gshared)(__this, ___x, ___y, method)
