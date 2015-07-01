#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>
struct DefaultComparer_t4096;
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
extern "C" void DefaultComparer__ctor_m28062_gshared (DefaultComparer_t4096 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m28062(__this, method) (( void (*) (DefaultComparer_t4096 *, const MethodInfo*))DefaultComparer__ctor_m28062_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m28063_gshared (DefaultComparer_t4096 * __this, DateTimeOffset_t1226  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m28063(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t4096 *, DateTimeOffset_t1226 , const MethodInfo*))DefaultComparer_GetHashCode_m28063_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m28064_gshared (DefaultComparer_t4096 * __this, DateTimeOffset_t1226  ___x, DateTimeOffset_t1226  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m28064(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t4096 *, DateTimeOffset_t1226 , DateTimeOffset_t1226 , const MethodInfo*))DefaultComparer_Equals_m28064_gshared)(__this, ___x, ___y, method)
