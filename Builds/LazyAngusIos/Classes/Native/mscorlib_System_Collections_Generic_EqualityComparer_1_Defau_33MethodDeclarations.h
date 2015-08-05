#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>
struct DefaultComparer_t8635;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m63604_gshared (DefaultComparer_t8635 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m63604(__this, method) (( void (*) (DefaultComparer_t8635 *, const MethodInfo*))DefaultComparer__ctor_m63604_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m63605_gshared (DefaultComparer_t8635 * __this, TimeSpan_t334  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m63605(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t8635 *, TimeSpan_t334 , const MethodInfo*))DefaultComparer_GetHashCode_m63605_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m63606_gshared (DefaultComparer_t8635 * __this, TimeSpan_t334  ___x, TimeSpan_t334  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m63606(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t8635 *, TimeSpan_t334 , TimeSpan_t334 , const MethodInfo*))DefaultComparer_Equals_m63606_gshared)(__this, ___x, ___y, method)
