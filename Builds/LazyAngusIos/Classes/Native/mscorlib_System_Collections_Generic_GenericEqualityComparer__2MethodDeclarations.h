#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>
struct GenericEqualityComparer_1_t2886;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::.ctor()
extern "C" void GenericEqualityComparer_1__ctor_m16492_gshared (GenericEqualityComparer_1_t2886 * __this, const MethodInfo* method);
#define GenericEqualityComparer_1__ctor_m16492(__this, method) (( void (*) (GenericEqualityComparer_1_t2886 *, const MethodInfo*))GenericEqualityComparer_1__ctor_m16492_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::GetHashCode(T)
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m29385_gshared (GenericEqualityComparer_1_t2886 * __this, TimeSpan_t294  ___obj, const MethodInfo* method);
#define GenericEqualityComparer_1_GetHashCode_m29385(__this, ___obj, method) (( int32_t (*) (GenericEqualityComparer_1_t2886 *, TimeSpan_t294 , const MethodInfo*))GenericEqualityComparer_1_GetHashCode_m29385_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::Equals(T,T)
extern "C" bool GenericEqualityComparer_1_Equals_m29386_gshared (GenericEqualityComparer_1_t2886 * __this, TimeSpan_t294  ___x, TimeSpan_t294  ___y, const MethodInfo* method);
#define GenericEqualityComparer_1_Equals_m29386(__this, ___x, ___y, method) (( bool (*) (GenericEqualityComparer_1_t2886 *, TimeSpan_t294 , TimeSpan_t294 , const MethodInfo*))GenericEqualityComparer_1_Equals_m29386_gshared)(__this, ___x, ___y, method)
