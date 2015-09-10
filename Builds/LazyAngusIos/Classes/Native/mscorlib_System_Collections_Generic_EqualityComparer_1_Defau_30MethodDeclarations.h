#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct DefaultComparer_t9216;
// System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_17.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.ctor()
extern "C" void DefaultComparer__ctor_m68370_gshared (DefaultComparer_t9216 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m68370(__this, method) (( void (*) (DefaultComparer_t9216 *, const MethodInfo*))DefaultComparer__ctor_m68370_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m68371_gshared (DefaultComparer_t9216 * __this, KeyValuePair_2_t3806  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m68371(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t9216 *, KeyValuePair_2_t3806 , const MethodInfo*))DefaultComparer_GetHashCode_m68371_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m68372_gshared (DefaultComparer_t9216 * __this, KeyValuePair_2_t3806  ___x, KeyValuePair_2_t3806  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m68372(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t9216 *, KeyValuePair_2_t3806 , KeyValuePair_2_t3806 , const MethodInfo*))DefaultComparer_Equals_m68372_gshared)(__this, ___x, ___y, method)
