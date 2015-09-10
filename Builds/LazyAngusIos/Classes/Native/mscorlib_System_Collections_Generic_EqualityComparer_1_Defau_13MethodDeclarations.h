#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>
struct DefaultComparer_t7427;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::.ctor()
extern "C" void DefaultComparer__ctor_m46605_gshared (DefaultComparer_t7427 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m46605(__this, method) (( void (*) (DefaultComparer_t7427 *, const MethodInfo*))DefaultComparer__ctor_m46605_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m46606_gshared (DefaultComparer_t7427 * __this, DateTime_t287  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m46606(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t7427 *, DateTime_t287 , const MethodInfo*))DefaultComparer_GetHashCode_m46606_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m46607_gshared (DefaultComparer_t7427 * __this, DateTime_t287  ___x, DateTime_t287  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m46607(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t7427 *, DateTime_t287 , DateTime_t287 , const MethodInfo*))DefaultComparer_Equals_m46607_gshared)(__this, ___x, ___y, method)
