#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int32>
struct DefaultComparer_t5368;

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int32>::.ctor()
extern "C" void DefaultComparer__ctor_m21068_gshared (DefaultComparer_t5368 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m21068(__this, method) (( void (*) (DefaultComparer_t5368 *, const MethodInfo*))DefaultComparer__ctor_m21068_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int32>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m21069_gshared (DefaultComparer_t5368 * __this, int32_t ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m21069(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t5368 *, int32_t, const MethodInfo*))DefaultComparer_GetHashCode_m21069_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int32>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m21070_gshared (DefaultComparer_t5368 * __this, int32_t ___x, int32_t ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m21070(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t5368 *, int32_t, int32_t, const MethodInfo*))DefaultComparer_Equals_m21070_gshared)(__this, ___x, ___y, method)
