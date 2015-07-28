#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>
struct DefaultComparer_t8623;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m63526_gshared (DefaultComparer_t8623 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m63526(__this, method) (( void (*) (DefaultComparer_t8623 *, const MethodInfo*))DefaultComparer__ctor_m63526_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m63527_gshared (DefaultComparer_t8623 * __this, TimeSpan_t334  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m63527(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t8623 *, TimeSpan_t334 , const MethodInfo*))DefaultComparer_GetHashCode_m63527_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m63528_gshared (DefaultComparer_t8623 * __this, TimeSpan_t334  ___x, TimeSpan_t334  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m63528(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t8623 *, TimeSpan_t334 , TimeSpan_t334 , const MethodInfo*))DefaultComparer_Equals_m63528_gshared)(__this, ___x, ___y, method)
