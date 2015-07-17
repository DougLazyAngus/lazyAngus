#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>
struct DefaultComparer_t4221;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m29377_gshared (DefaultComparer_t4221 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m29377(__this, method) (( void (*) (DefaultComparer_t4221 *, const MethodInfo*))DefaultComparer__ctor_m29377_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m29378_gshared (DefaultComparer_t4221 * __this, TimeSpan_t292  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m29378(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t4221 *, TimeSpan_t292 , const MethodInfo*))DefaultComparer_GetHashCode_m29378_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m29379_gshared (DefaultComparer_t4221 * __this, TimeSpan_t292  ___x, TimeSpan_t292  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m29379(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t4221 *, TimeSpan_t292 , TimeSpan_t292 , const MethodInfo*))DefaultComparer_Equals_m29379_gshared)(__this, ___x, ___y, method)
