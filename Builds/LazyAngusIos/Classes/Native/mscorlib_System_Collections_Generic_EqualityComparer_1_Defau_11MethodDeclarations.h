#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>
struct DefaultComparer_t4214;
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
extern "C" void DefaultComparer__ctor_m29347_gshared (DefaultComparer_t4214 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m29347(__this, method) (( void (*) (DefaultComparer_t4214 *, const MethodInfo*))DefaultComparer__ctor_m29347_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m29348_gshared (DefaultComparer_t4214 * __this, DateTimeOffset_t1327  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m29348(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t4214 *, DateTimeOffset_t1327 , const MethodInfo*))DefaultComparer_GetHashCode_m29348_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m29349_gshared (DefaultComparer_t4214 * __this, DateTimeOffset_t1327  ___x, DateTimeOffset_t1327  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m29349(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t4214 *, DateTimeOffset_t1327 , DateTimeOffset_t1327 , const MethodInfo*))DefaultComparer_Equals_m29349_gshared)(__this, ___x, ___y, method)
