#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>
struct DefaultComparer_t8627;
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
extern "C" void DefaultComparer__ctor_m63570_gshared (DefaultComparer_t8627 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m63570(__this, method) (( void (*) (DefaultComparer_t8627 *, const MethodInfo*))DefaultComparer__ctor_m63570_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m63571_gshared (DefaultComparer_t8627 * __this, DateTimeOffset_t2897  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m63571(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t8627 *, DateTimeOffset_t2897 , const MethodInfo*))DefaultComparer_GetHashCode_m63571_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m63572_gshared (DefaultComparer_t8627 * __this, DateTimeOffset_t2897  ___x, DateTimeOffset_t2897  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m63572(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t8627 *, DateTimeOffset_t2897 , DateTimeOffset_t2897 , const MethodInfo*))DefaultComparer_Equals_m63572_gshared)(__this, ___x, ___y, method)
