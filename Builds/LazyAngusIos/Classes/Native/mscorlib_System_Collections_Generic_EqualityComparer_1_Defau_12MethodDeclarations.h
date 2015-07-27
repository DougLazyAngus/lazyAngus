#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t4219;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m29371_gshared (DefaultComparer_t4219 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m29371(__this, method) (( void (*) (DefaultComparer_t4219 *, const MethodInfo*))DefaultComparer__ctor_m29371_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m29372_gshared (DefaultComparer_t4219 * __this, Guid_t44  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m29372(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t4219 *, Guid_t44 , const MethodInfo*))DefaultComparer_GetHashCode_m29372_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m29373_gshared (DefaultComparer_t4219 * __this, Guid_t44  ___x, Guid_t44  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m29373(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t4219 *, Guid_t44 , Guid_t44 , const MethodInfo*))DefaultComparer_Equals_m29373_gshared)(__this, ___x, ___y, method)
