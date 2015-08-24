#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int32>
struct DefaultComparer_t5415;

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int32>::.ctor()
extern "C" void DefaultComparer__ctor_m21346_gshared (DefaultComparer_t5415 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m21346(__this, method) (( void (*) (DefaultComparer_t5415 *, const MethodInfo*))DefaultComparer__ctor_m21346_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int32>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m21347_gshared (DefaultComparer_t5415 * __this, int32_t ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m21347(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t5415 *, int32_t, const MethodInfo*))DefaultComparer_GetHashCode_m21347_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int32>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m21348_gshared (DefaultComparer_t5415 * __this, int32_t ___x, int32_t ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m21348(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t5415 *, int32_t, int32_t, const MethodInfo*))DefaultComparer_Equals_m21348_gshared)(__this, ___x, ___y, method)
