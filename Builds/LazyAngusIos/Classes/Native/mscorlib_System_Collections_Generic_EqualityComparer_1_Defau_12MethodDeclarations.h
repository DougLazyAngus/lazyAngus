#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>
struct DefaultComparer_t4120;
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
extern "C" void DefaultComparer__ctor_m28220_gshared (DefaultComparer_t4120 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m28220(__this, method) (( void (*) (DefaultComparer_t4120 *, const MethodInfo*))DefaultComparer__ctor_m28220_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m28221_gshared (DefaultComparer_t4120 * __this, DateTimeOffset_t1248  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m28221(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t4120 *, DateTimeOffset_t1248 , const MethodInfo*))DefaultComparer_GetHashCode_m28221_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m28222_gshared (DefaultComparer_t4120 * __this, DateTimeOffset_t1248  ___x, DateTimeOffset_t1248  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m28222(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t4120 *, DateTimeOffset_t1248 , DateTimeOffset_t1248 , const MethodInfo*))DefaultComparer_Equals_m28222_gshared)(__this, ___x, ___y, method)
