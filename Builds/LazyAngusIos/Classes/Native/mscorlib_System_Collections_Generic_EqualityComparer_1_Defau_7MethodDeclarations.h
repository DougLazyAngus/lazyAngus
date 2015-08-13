#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.SByte>
struct DefaultComparer_t6431;

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.SByte>::.ctor()
extern "C" void DefaultComparer__ctor_m36577_gshared (DefaultComparer_t6431 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m36577(__this, method) (( void (*) (DefaultComparer_t6431 *, const MethodInfo*))DefaultComparer__ctor_m36577_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.SByte>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m36578_gshared (DefaultComparer_t6431 * __this, int8_t ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m36578(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t6431 *, int8_t, const MethodInfo*))DefaultComparer_GetHashCode_m36578_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.SByte>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m36579_gshared (DefaultComparer_t6431 * __this, int8_t ___x, int8_t ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m36579(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t6431 *, int8_t, int8_t, const MethodInfo*))DefaultComparer_Equals_m36579_gshared)(__this, ___x, ___y, method)
