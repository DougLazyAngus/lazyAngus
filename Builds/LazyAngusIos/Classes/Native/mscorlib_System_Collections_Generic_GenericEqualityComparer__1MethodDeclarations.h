#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericEqualityComparer`1<System.Guid>
struct GenericEqualityComparer_1_t2805;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::.ctor()
extern "C" void GenericEqualityComparer_1__ctor_m15722_gshared (GenericEqualityComparer_1_t2805 * __this, const MethodInfo* method);
#define GenericEqualityComparer_1__ctor_m15722(__this, method) (( void (*) (GenericEqualityComparer_1_t2805 *, const MethodInfo*))GenericEqualityComparer_1__ctor_m15722_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::GetHashCode(T)
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m28234_gshared (GenericEqualityComparer_1_t2805 * __this, Guid_t44  ___obj, const MethodInfo* method);
#define GenericEqualityComparer_1_GetHashCode_m28234(__this, ___obj, method) (( int32_t (*) (GenericEqualityComparer_1_t2805 *, Guid_t44 , const MethodInfo*))GenericEqualityComparer_1_GetHashCode_m28234_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::Equals(T,T)
extern "C" bool GenericEqualityComparer_1_Equals_m28235_gshared (GenericEqualityComparer_1_t2805 * __this, Guid_t44  ___x, Guid_t44  ___y, const MethodInfo* method);
#define GenericEqualityComparer_1_Equals_m28235(__this, ___x, ___y, method) (( bool (*) (GenericEqualityComparer_1_t2805 *, Guid_t44 , Guid_t44 , const MethodInfo*))GenericEqualityComparer_1_Equals_m28235_gshared)(__this, ___x, ___y, method)
