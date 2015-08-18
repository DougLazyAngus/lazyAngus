#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.UInt32>
struct DefaultComparer_t6606;

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.UInt32>::.ctor()
extern "C" void DefaultComparer__ctor_m38744_gshared (DefaultComparer_t6606 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m38744(__this, method) (( void (*) (DefaultComparer_t6606 *, const MethodInfo*))DefaultComparer__ctor_m38744_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.UInt32>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m38745_gshared (DefaultComparer_t6606 * __this, uint32_t ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m38745(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t6606 *, uint32_t, const MethodInfo*))DefaultComparer_GetHashCode_m38745_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.UInt32>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m38746_gshared (DefaultComparer_t6606 * __this, uint32_t ___x, uint32_t ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m38746(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t6606 *, uint32_t, uint32_t, const MethodInfo*))DefaultComparer_Equals_m38746_gshared)(__this, ___x, ___y, method)
