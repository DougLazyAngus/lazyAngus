#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericEqualityComparer`1<System.Guid>
struct GenericEqualityComparer_1_t2838;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::.ctor()
extern "C" void GenericEqualityComparer_1__ctor_m15938_gshared (GenericEqualityComparer_1_t2838 * __this, const MethodInfo* method);
#define GenericEqualityComparer_1__ctor_m15938(__this, method) (( void (*) (GenericEqualityComparer_1_t2838 *, const MethodInfo*))GenericEqualityComparer_1__ctor_m15938_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::GetHashCode(T)
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m28331_gshared (GenericEqualityComparer_1_t2838 * __this, Guid_t44  ___obj, const MethodInfo* method);
#define GenericEqualityComparer_1_GetHashCode_m28331(__this, ___obj, method) (( int32_t (*) (GenericEqualityComparer_1_t2838 *, Guid_t44 , const MethodInfo*))GenericEqualityComparer_1_GetHashCode_m28331_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::Equals(T,T)
extern "C" bool GenericEqualityComparer_1_Equals_m28332_gshared (GenericEqualityComparer_1_t2838 * __this, Guid_t44  ___x, Guid_t44  ___y, const MethodInfo* method);
#define GenericEqualityComparer_1_Equals_m28332(__this, ___x, ___y, method) (( bool (*) (GenericEqualityComparer_1_t2838 *, Guid_t44 , Guid_t44 , const MethodInfo*))GenericEqualityComparer_1_Equals_m28332_gshared)(__this, ___x, ___y, method)
