#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>
struct DefaultComparer_t8712;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m64394_gshared (DefaultComparer_t8712 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m64394(__this, method) (( void (*) (DefaultComparer_t8712 *, const MethodInfo*))DefaultComparer__ctor_m64394_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m64395_gshared (DefaultComparer_t8712 * __this, TimeSpan_t334  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m64395(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t8712 *, TimeSpan_t334 , const MethodInfo*))DefaultComparer_GetHashCode_m64395_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m64396_gshared (DefaultComparer_t8712 * __this, TimeSpan_t334  ___x, TimeSpan_t334  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m64396(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t8712 *, TimeSpan_t334 , TimeSpan_t334 , const MethodInfo*))DefaultComparer_Equals_m64396_gshared)(__this, ___x, ___y, method)
