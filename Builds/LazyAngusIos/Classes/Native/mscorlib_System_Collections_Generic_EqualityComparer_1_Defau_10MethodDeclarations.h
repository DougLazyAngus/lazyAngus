#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.UInt32>
struct DefaultComparer_t7188;

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.UInt32>::.ctor()
extern "C" void DefaultComparer__ctor_m43530_gshared (DefaultComparer_t7188 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m43530(__this, method) (( void (*) (DefaultComparer_t7188 *, const MethodInfo*))DefaultComparer__ctor_m43530_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.UInt32>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m43531_gshared (DefaultComparer_t7188 * __this, uint32_t ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m43531(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t7188 *, uint32_t, const MethodInfo*))DefaultComparer_GetHashCode_m43531_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.UInt32>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m43532_gshared (DefaultComparer_t7188 * __this, uint32_t ___x, uint32_t ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m43532(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t7188 *, uint32_t, uint32_t, const MethodInfo*))DefaultComparer_Equals_m43532_gshared)(__this, ___x, ___y, method)
