#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct DefaultComparer_t8264;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_75.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::.ctor()
extern "C" void DefaultComparer__ctor_m56755_gshared (DefaultComparer_t8264 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m56755(__this, method) (( void (*) (DefaultComparer_t8264 *, const MethodInfo*))DefaultComparer__ctor_m56755_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m56756_gshared (DefaultComparer_t8264 * __this, KeyValuePair_2_t7814  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m56756(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t8264 *, KeyValuePair_2_t7814 , const MethodInfo*))DefaultComparer_GetHashCode_m56756_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m56757_gshared (DefaultComparer_t8264 * __this, KeyValuePair_2_t7814  ___x, KeyValuePair_2_t7814  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m56757(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t8264 *, KeyValuePair_2_t7814 , KeyValuePair_2_t7814 , const MethodInfo*))DefaultComparer_Equals_m56757_gshared)(__this, ___x, ___y, method)
