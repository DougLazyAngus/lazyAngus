#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>
struct DefaultComparer_t4211;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::.ctor()
extern "C" void DefaultComparer__ctor_m29333_gshared (DefaultComparer_t4211 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m29333(__this, method) (( void (*) (DefaultComparer_t4211 *, const MethodInfo*))DefaultComparer__ctor_m29333_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m29334_gshared (DefaultComparer_t4211 * __this, DateTime_t247  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m29334(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t4211 *, DateTime_t247 , const MethodInfo*))DefaultComparer_GetHashCode_m29334_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m29335_gshared (DefaultComparer_t4211 * __this, DateTime_t247  ___x, DateTime_t247  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m29335(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t4211 *, DateTime_t247 , DateTime_t247 , const MethodInfo*))DefaultComparer_Equals_m29335_gshared)(__this, ___x, ___y, method)
