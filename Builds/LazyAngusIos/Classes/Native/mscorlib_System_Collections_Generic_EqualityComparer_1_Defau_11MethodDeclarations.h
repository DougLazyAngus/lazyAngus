#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>
struct DefaultComparer_t4137;
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
extern "C" void DefaultComparer__ctor_m28251_gshared (DefaultComparer_t4137 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m28251(__this, method) (( void (*) (DefaultComparer_t4137 *, const MethodInfo*))DefaultComparer__ctor_m28251_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m28252_gshared (DefaultComparer_t4137 * __this, DateTimeOffset_t1273  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m28252(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t4137 *, DateTimeOffset_t1273 , const MethodInfo*))DefaultComparer_GetHashCode_m28252_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m28253_gshared (DefaultComparer_t4137 * __this, DateTimeOffset_t1273  ___x, DateTimeOffset_t1273  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m28253(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t4137 *, DateTimeOffset_t1273 , DateTimeOffset_t1273 , const MethodInfo*))DefaultComparer_Equals_m28253_gshared)(__this, ___x, ___y, method)
