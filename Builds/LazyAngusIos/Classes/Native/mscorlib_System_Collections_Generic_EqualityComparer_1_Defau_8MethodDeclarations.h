#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int16>
struct DefaultComparer_t7048;

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int16>::.ctor()
extern "C" void DefaultComparer__ctor_m41874_gshared (DefaultComparer_t7048 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m41874(__this, method) (( void (*) (DefaultComparer_t7048 *, const MethodInfo*))DefaultComparer__ctor_m41874_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int16>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m41875_gshared (DefaultComparer_t7048 * __this, int16_t ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m41875(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t7048 *, int16_t, const MethodInfo*))DefaultComparer_GetHashCode_m41875_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int16>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m41876_gshared (DefaultComparer_t7048 * __this, int16_t ___x, int16_t ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m41876(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t7048 *, int16_t, int16_t, const MethodInfo*))DefaultComparer_Equals_m41876_gshared)(__this, ___x, ___y, method)
