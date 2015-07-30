#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>
struct DefaultComparer_t8631;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m63573_gshared (DefaultComparer_t8631 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m63573(__this, method) (( void (*) (DefaultComparer_t8631 *, const MethodInfo*))DefaultComparer__ctor_m63573_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m63574_gshared (DefaultComparer_t8631 * __this, TimeSpan_t334  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m63574(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t8631 *, TimeSpan_t334 , const MethodInfo*))DefaultComparer_GetHashCode_m63574_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m63575_gshared (DefaultComparer_t8631 * __this, TimeSpan_t334  ___x, TimeSpan_t334  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m63575(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t8631 *, TimeSpan_t334 , TimeSpan_t334 , const MethodInfo*))DefaultComparer_Equals_m63575_gshared)(__this, ___x, ___y, method)
