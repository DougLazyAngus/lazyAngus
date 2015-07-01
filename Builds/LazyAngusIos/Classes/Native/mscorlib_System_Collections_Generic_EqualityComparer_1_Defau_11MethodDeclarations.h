#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>
struct DefaultComparer_t4092;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::.ctor()
extern "C" void DefaultComparer__ctor_m28045_gshared (DefaultComparer_t4092 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m28045(__this, method) (( void (*) (DefaultComparer_t4092 *, const MethodInfo*))DefaultComparer__ctor_m28045_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m28046_gshared (DefaultComparer_t4092 * __this, DateTime_t219  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m28046(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t4092 *, DateTime_t219 , const MethodInfo*))DefaultComparer_GetHashCode_m28046_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m28047_gshared (DefaultComparer_t4092 * __this, DateTime_t219  ___x, DateTime_t219  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m28047(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t4092 *, DateTime_t219 , DateTime_t219 , const MethodInfo*))DefaultComparer_Equals_m28047_gshared)(__this, ___x, ___y, method)
