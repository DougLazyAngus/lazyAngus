#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct DefaultComparer_t7901;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_54.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::.ctor()
extern "C" void DefaultComparer__ctor_m54851_gshared (DefaultComparer_t7901 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m54851(__this, method) (( void (*) (DefaultComparer_t7901 *, const MethodInfo*))DefaultComparer__ctor_m54851_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m54852_gshared (DefaultComparer_t7901 * __this, KeyValuePair_2_t6943  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m54852(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t7901 *, KeyValuePair_2_t6943 , const MethodInfo*))DefaultComparer_GetHashCode_m54852_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m54853_gshared (DefaultComparer_t7901 * __this, KeyValuePair_2_t6943  ___x, KeyValuePair_2_t6943  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m54853(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t7901 *, KeyValuePair_2_t6943 , KeyValuePair_2_t6943 , const MethodInfo*))DefaultComparer_Equals_m54853_gshared)(__this, ___x, ___y, method)
