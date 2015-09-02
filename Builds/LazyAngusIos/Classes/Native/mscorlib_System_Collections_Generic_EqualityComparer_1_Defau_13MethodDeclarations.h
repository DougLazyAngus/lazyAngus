#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>
struct DefaultComparer_t6880;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::.ctor()
extern "C" void DefaultComparer__ctor_m42274_gshared (DefaultComparer_t6880 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m42274(__this, method) (( void (*) (DefaultComparer_t6880 *, const MethodInfo*))DefaultComparer__ctor_m42274_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m42275_gshared (DefaultComparer_t6880 * __this, DateTime_t287  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m42275(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t6880 *, DateTime_t287 , const MethodInfo*))DefaultComparer_GetHashCode_m42275_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m42276_gshared (DefaultComparer_t6880 * __this, DateTime_t287  ___x, DateTime_t287  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m42276(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t6880 *, DateTime_t287 , DateTime_t287 , const MethodInfo*))DefaultComparer_Equals_m42276_gshared)(__this, ___x, ___y, method)
