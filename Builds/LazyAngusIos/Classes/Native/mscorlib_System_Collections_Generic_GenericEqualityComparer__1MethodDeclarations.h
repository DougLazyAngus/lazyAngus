#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericEqualityComparer`1<System.Guid>
struct GenericEqualityComparer_1_t4851;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::.ctor()
extern "C" void GenericEqualityComparer_1__ctor_m19858_gshared (GenericEqualityComparer_1_t4851 * __this, const MethodInfo* method);
#define GenericEqualityComparer_1__ctor_m19858(__this, method) (( void (*) (GenericEqualityComparer_1_t4851 *, const MethodInfo*))GenericEqualityComparer_1__ctor_m19858_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::GetHashCode(T)
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m63502_gshared (GenericEqualityComparer_1_t4851 * __this, Guid_t74  ___obj, const MethodInfo* method);
#define GenericEqualityComparer_1_GetHashCode_m63502(__this, ___obj, method) (( int32_t (*) (GenericEqualityComparer_1_t4851 *, Guid_t74 , const MethodInfo*))GenericEqualityComparer_1_GetHashCode_m63502_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::Equals(T,T)
extern "C" bool GenericEqualityComparer_1_Equals_m63503_gshared (GenericEqualityComparer_1_t4851 * __this, Guid_t74  ___x, Guid_t74  ___y, const MethodInfo* method);
#define GenericEqualityComparer_1_Equals_m63503(__this, ___x, ___y, method) (( bool (*) (GenericEqualityComparer_1_t4851 *, Guid_t74 , Guid_t74 , const MethodInfo*))GenericEqualityComparer_1_Equals_m63503_gshared)(__this, ___x, ___y, method)
