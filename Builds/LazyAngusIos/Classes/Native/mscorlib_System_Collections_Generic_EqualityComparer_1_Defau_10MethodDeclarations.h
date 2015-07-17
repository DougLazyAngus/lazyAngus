#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>
struct DefaultComparer_t4209;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::.ctor()
extern "C" void DefaultComparer__ctor_m29322_gshared (DefaultComparer_t4209 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m29322(__this, method) (( void (*) (DefaultComparer_t4209 *, const MethodInfo*))DefaultComparer__ctor_m29322_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m29323_gshared (DefaultComparer_t4209 * __this, DateTime_t245  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m29323(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t4209 *, DateTime_t245 , const MethodInfo*))DefaultComparer_GetHashCode_m29323_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m29324_gshared (DefaultComparer_t4209 * __this, DateTime_t245  ___x, DateTime_t245  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m29324(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t4209 *, DateTime_t245 , DateTime_t245 , const MethodInfo*))DefaultComparer_Equals_m29324_gshared)(__this, ___x, ___y, method)
