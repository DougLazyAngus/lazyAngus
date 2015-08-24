#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>
struct DefaultComparer_t8704;
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
extern "C" void DefaultComparer__ctor_m64360_gshared (DefaultComparer_t8704 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m64360(__this, method) (( void (*) (DefaultComparer_t8704 *, const MethodInfo*))DefaultComparer__ctor_m64360_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m64361_gshared (DefaultComparer_t8704 * __this, DateTimeOffset_t2946  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m64361(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t8704 *, DateTimeOffset_t2946 , const MethodInfo*))DefaultComparer_GetHashCode_m64361_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m64362_gshared (DefaultComparer_t8704 * __this, DateTimeOffset_t2946  ___x, DateTimeOffset_t2946  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m64362(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t8704 *, DateTimeOffset_t2946 , DateTimeOffset_t2946 , const MethodInfo*))DefaultComparer_Equals_m64362_gshared)(__this, ___x, ___y, method)
