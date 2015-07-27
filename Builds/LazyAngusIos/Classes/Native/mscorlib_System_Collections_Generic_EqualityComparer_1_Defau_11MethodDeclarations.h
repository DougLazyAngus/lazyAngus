#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>
struct DefaultComparer_t4215;
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
extern "C" void DefaultComparer__ctor_m29350_gshared (DefaultComparer_t4215 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m29350(__this, method) (( void (*) (DefaultComparer_t4215 *, const MethodInfo*))DefaultComparer__ctor_m29350_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m29351_gshared (DefaultComparer_t4215 * __this, DateTimeOffset_t1328  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m29351(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t4215 *, DateTimeOffset_t1328 , const MethodInfo*))DefaultComparer_GetHashCode_m29351_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m29352_gshared (DefaultComparer_t4215 * __this, DateTimeOffset_t1328  ___x, DateTimeOffset_t1328  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m29352(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t4215 *, DateTimeOffset_t1328 , DateTimeOffset_t1328 , const MethodInfo*))DefaultComparer_Equals_m29352_gshared)(__this, ___x, ___y, method)
