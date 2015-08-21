#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.UInt32>
struct DefaultComparer_t6610;

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.UInt32>::.ctor()
extern "C" void DefaultComparer__ctor_m38836_gshared (DefaultComparer_t6610 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m38836(__this, method) (( void (*) (DefaultComparer_t6610 *, const MethodInfo*))DefaultComparer__ctor_m38836_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.UInt32>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m38837_gshared (DefaultComparer_t6610 * __this, uint32_t ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m38837(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t6610 *, uint32_t, const MethodInfo*))DefaultComparer_GetHashCode_m38837_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.UInt32>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m38838_gshared (DefaultComparer_t6610 * __this, uint32_t ___x, uint32_t ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m38838(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t6610 *, uint32_t, uint32_t, const MethodInfo*))DefaultComparer_Equals_m38838_gshared)(__this, ___x, ___y, method)
