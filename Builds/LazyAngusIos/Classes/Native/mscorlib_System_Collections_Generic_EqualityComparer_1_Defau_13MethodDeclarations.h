#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>
struct DefaultComparer_t4222;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m29385_gshared (DefaultComparer_t4222 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m29385(__this, method) (( void (*) (DefaultComparer_t4222 *, const MethodInfo*))DefaultComparer__ctor_m29385_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m29386_gshared (DefaultComparer_t4222 * __this, TimeSpan_t292  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m29386(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t4222 *, TimeSpan_t292 , const MethodInfo*))DefaultComparer_GetHashCode_m29386_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m29387_gshared (DefaultComparer_t4222 * __this, TimeSpan_t292  ___x, TimeSpan_t292  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m29387(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t4222 *, TimeSpan_t292 , TimeSpan_t292 , const MethodInfo*))DefaultComparer_Equals_m29387_gshared)(__this, ___x, ___y, method)
