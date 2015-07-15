#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>
struct DefaultComparer_t4139;
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
extern "C" void DefaultComparer__ctor_m28276_gshared (DefaultComparer_t4139 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m28276(__this, method) (( void (*) (DefaultComparer_t4139 *, const MethodInfo*))DefaultComparer__ctor_m28276_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m28277_gshared (DefaultComparer_t4139 * __this, DateTimeOffset_t1275  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m28277(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t4139 *, DateTimeOffset_t1275 , const MethodInfo*))DefaultComparer_GetHashCode_m28277_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m28278_gshared (DefaultComparer_t4139 * __this, DateTimeOffset_t1275  ___x, DateTimeOffset_t1275  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m28278(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t4139 *, DateTimeOffset_t1275 , DateTimeOffset_t1275 , const MethodInfo*))DefaultComparer_Equals_m28278_gshared)(__this, ___x, ___y, method)
