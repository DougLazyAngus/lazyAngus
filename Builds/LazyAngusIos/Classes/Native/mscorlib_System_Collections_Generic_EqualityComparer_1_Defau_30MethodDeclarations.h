#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct DefaultComparer_t9203;
// System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_17.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.ctor()
extern "C" void DefaultComparer__ctor_m68288_gshared (DefaultComparer_t9203 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m68288(__this, method) (( void (*) (DefaultComparer_t9203 *, const MethodInfo*))DefaultComparer__ctor_m68288_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m68289_gshared (DefaultComparer_t9203 * __this, KeyValuePair_2_t3795  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m68289(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t9203 *, KeyValuePair_2_t3795 , const MethodInfo*))DefaultComparer_GetHashCode_m68289_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m68290_gshared (DefaultComparer_t9203 * __this, KeyValuePair_2_t3795  ___x, KeyValuePair_2_t3795  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m68290(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t9203 *, KeyValuePair_2_t3795 , KeyValuePair_2_t3795 , const MethodInfo*))DefaultComparer_Equals_m68290_gshared)(__this, ___x, ___y, method)
