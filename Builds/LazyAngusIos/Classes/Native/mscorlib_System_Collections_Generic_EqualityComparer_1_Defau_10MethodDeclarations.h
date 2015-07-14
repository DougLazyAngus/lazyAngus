#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>
struct DefaultComparer_t4133;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::.ctor()
extern "C" void DefaultComparer__ctor_m28234_gshared (DefaultComparer_t4133 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m28234(__this, method) (( void (*) (DefaultComparer_t4133 *, const MethodInfo*))DefaultComparer__ctor_m28234_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m28235_gshared (DefaultComparer_t4133 * __this, DateTime_t219  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m28235(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t4133 *, DateTime_t219 , const MethodInfo*))DefaultComparer_GetHashCode_m28235_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m28236_gshared (DefaultComparer_t4133 * __this, DateTime_t219  ___x, DateTime_t219  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m28236(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t4133 *, DateTime_t219 , DateTime_t219 , const MethodInfo*))DefaultComparer_Equals_m28236_gshared)(__this, ___x, ___y, method)
