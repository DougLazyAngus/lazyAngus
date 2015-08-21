#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int16>
struct DefaultComparer_t6482;

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int16>::.ctor()
extern "C" void DefaultComparer__ctor_m37249_gshared (DefaultComparer_t6482 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m37249(__this, method) (( void (*) (DefaultComparer_t6482 *, const MethodInfo*))DefaultComparer__ctor_m37249_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int16>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m37250_gshared (DefaultComparer_t6482 * __this, int16_t ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m37250(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t6482 *, int16_t, const MethodInfo*))DefaultComparer_GetHashCode_m37250_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int16>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m37251_gshared (DefaultComparer_t6482 * __this, int16_t ___x, int16_t ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m37251(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t6482 *, int16_t, int16_t, const MethodInfo*))DefaultComparer_Equals_m37251_gshared)(__this, ___x, ___y, method)
