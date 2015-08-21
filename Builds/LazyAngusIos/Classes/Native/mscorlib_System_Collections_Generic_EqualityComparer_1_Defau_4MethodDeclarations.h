#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int64>
struct DefaultComparer_t6024;

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int64>::.ctor()
extern "C" void DefaultComparer__ctor_m31314_gshared (DefaultComparer_t6024 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m31314(__this, method) (( void (*) (DefaultComparer_t6024 *, const MethodInfo*))DefaultComparer__ctor_m31314_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int64>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m31315_gshared (DefaultComparer_t6024 * __this, int64_t ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m31315(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t6024 *, int64_t, const MethodInfo*))DefaultComparer_GetHashCode_m31315_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int64>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m31316_gshared (DefaultComparer_t6024 * __this, int64_t ___x, int64_t ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m31316(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t6024 *, int64_t, int64_t, const MethodInfo*))DefaultComparer_Equals_m31316_gshared)(__this, ___x, ___y, method)
