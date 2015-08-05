#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>
struct GenericEqualityComparer_1_t4858;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>::.ctor()
extern "C" void GenericEqualityComparer_1__ctor_m19923_gshared (GenericEqualityComparer_1_t4858 * __this, const MethodInfo* method);
#define GenericEqualityComparer_1__ctor_m19923(__this, method) (( void (*) (GenericEqualityComparer_1_t4858 *, const MethodInfo*))GenericEqualityComparer_1__ctor_m19923_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>::GetHashCode(T)
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m41142_gshared (GenericEqualityComparer_1_t4858 * __this, DateTime_t287  ___obj, const MethodInfo* method);
#define GenericEqualityComparer_1_GetHashCode_m41142(__this, ___obj, method) (( int32_t (*) (GenericEqualityComparer_1_t4858 *, DateTime_t287 , const MethodInfo*))GenericEqualityComparer_1_GetHashCode_m41142_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>::Equals(T,T)
extern "C" bool GenericEqualityComparer_1_Equals_m41143_gshared (GenericEqualityComparer_1_t4858 * __this, DateTime_t287  ___x, DateTime_t287  ___y, const MethodInfo* method);
#define GenericEqualityComparer_1_Equals_m41143(__this, ___x, ___y, method) (( bool (*) (GenericEqualityComparer_1_t4858 *, DateTime_t287 , DateTime_t287 , const MethodInfo*))GenericEqualityComparer_1_Equals_m41143_gshared)(__this, ___x, ___y, method)
