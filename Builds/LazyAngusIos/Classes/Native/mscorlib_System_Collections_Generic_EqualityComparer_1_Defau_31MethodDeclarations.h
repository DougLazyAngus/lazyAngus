#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>
struct DefaultComparer_t8616;
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
extern "C" void DefaultComparer__ctor_m63492_gshared (DefaultComparer_t8616 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m63492(__this, method) (( void (*) (DefaultComparer_t8616 *, const MethodInfo*))DefaultComparer__ctor_m63492_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m63493_gshared (DefaultComparer_t8616 * __this, DateTimeOffset_t2887  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m63493(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t8616 *, DateTimeOffset_t2887 , const MethodInfo*))DefaultComparer_GetHashCode_m63493_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m63494_gshared (DefaultComparer_t8616 * __this, DateTimeOffset_t2887  ___x, DateTimeOffset_t2887  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m63494(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t8616 *, DateTimeOffset_t2887 , DateTimeOffset_t2887 , const MethodInfo*))DefaultComparer_Equals_m63494_gshared)(__this, ___x, ___y, method)
