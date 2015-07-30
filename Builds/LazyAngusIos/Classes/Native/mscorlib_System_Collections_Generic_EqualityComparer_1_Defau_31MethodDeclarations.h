#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>
struct DefaultComparer_t8623;
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
extern "C" void DefaultComparer__ctor_m63539_gshared (DefaultComparer_t8623 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m63539(__this, method) (( void (*) (DefaultComparer_t8623 *, const MethodInfo*))DefaultComparer__ctor_m63539_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m63540_gshared (DefaultComparer_t8623 * __this, DateTimeOffset_t2893  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m63540(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t8623 *, DateTimeOffset_t2893 , const MethodInfo*))DefaultComparer_GetHashCode_m63540_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m63541_gshared (DefaultComparer_t8623 * __this, DateTimeOffset_t2893  ___x, DateTimeOffset_t2893  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m63541(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t8623 *, DateTimeOffset_t2893 , DateTimeOffset_t2893 , const MethodInfo*))DefaultComparer_Equals_m63541_gshared)(__this, ___x, ___y, method)
