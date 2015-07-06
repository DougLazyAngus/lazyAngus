#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>
struct GenericEqualityComparer_1_t2801;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>::.ctor()
extern "C" void GenericEqualityComparer_1__ctor_m15715_gshared (GenericEqualityComparer_1_t2801 * __this, const MethodInfo* method);
#define GenericEqualityComparer_1__ctor_m15715(__this, method) (( void (*) (GenericEqualityComparer_1_t2801 *, const MethodInfo*))GenericEqualityComparer_1__ctor_m15715_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>::GetHashCode(T)
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m28196_gshared (GenericEqualityComparer_1_t2801 * __this, DateTime_t219  ___obj, const MethodInfo* method);
#define GenericEqualityComparer_1_GetHashCode_m28196(__this, ___obj, method) (( int32_t (*) (GenericEqualityComparer_1_t2801 *, DateTime_t219 , const MethodInfo*))GenericEqualityComparer_1_GetHashCode_m28196_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>::Equals(T,T)
extern "C" bool GenericEqualityComparer_1_Equals_m28197_gshared (GenericEqualityComparer_1_t2801 * __this, DateTime_t219  ___x, DateTime_t219  ___y, const MethodInfo* method);
#define GenericEqualityComparer_1_Equals_m28197(__this, ___x, ___y, method) (( bool (*) (GenericEqualityComparer_1_t2801 *, DateTime_t219 , DateTime_t219 , const MethodInfo*))GenericEqualityComparer_1_Equals_m28197_gshared)(__this, ___x, ___y, method)
