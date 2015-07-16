#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t4152;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m28338_gshared (DefaultComparer_t4152 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m28338(__this, method) (( void (*) (DefaultComparer_t4152 *, const MethodInfo*))DefaultComparer__ctor_m28338_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m28339_gshared (DefaultComparer_t4152 * __this, Guid_t44  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m28339(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t4152 *, Guid_t44 , const MethodInfo*))DefaultComparer_GetHashCode_m28339_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m28340_gshared (DefaultComparer_t4152 * __this, Guid_t44  ___x, Guid_t44  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m28340(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t4152 *, Guid_t44 , Guid_t44 , const MethodInfo*))DefaultComparer_Equals_m28340_gshared)(__this, ___x, ___y, method)
