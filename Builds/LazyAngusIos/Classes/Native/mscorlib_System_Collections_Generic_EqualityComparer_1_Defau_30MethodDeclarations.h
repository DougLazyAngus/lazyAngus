#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct DefaultComparer_t8547;
// System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_17.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.ctor()
extern "C" void DefaultComparer__ctor_m62820_gshared (DefaultComparer_t8547 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m62820(__this, method) (( void (*) (DefaultComparer_t8547 *, const MethodInfo*))DefaultComparer__ctor_m62820_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m62821_gshared (DefaultComparer_t8547 * __this, KeyValuePair_2_t3332  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m62821(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t8547 *, KeyValuePair_2_t3332 , const MethodInfo*))DefaultComparer_GetHashCode_m62821_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m62822_gshared (DefaultComparer_t8547 * __this, KeyValuePair_2_t3332  ___x, KeyValuePair_2_t3332  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m62822(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t8547 *, KeyValuePair_2_t3332 , KeyValuePair_2_t3332 , const MethodInfo*))DefaultComparer_Equals_m62822_gshared)(__this, ___x, ___y, method)
