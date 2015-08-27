#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct DefaultComparer_t7765;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_77.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::.ctor()
extern "C" void DefaultComparer__ctor_m52938_gshared (DefaultComparer_t7765 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m52938(__this, method) (( void (*) (DefaultComparer_t7765 *, const MethodInfo*))DefaultComparer__ctor_m52938_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m52939_gshared (DefaultComparer_t7765 * __this, KeyValuePair_2_t7261  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m52939(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t7765 *, KeyValuePair_2_t7261 , const MethodInfo*))DefaultComparer_GetHashCode_m52939_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m52940_gshared (DefaultComparer_t7765 * __this, KeyValuePair_2_t7261  ___x, KeyValuePair_2_t7261  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m52940(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t7765 *, KeyValuePair_2_t7261 , KeyValuePair_2_t7261 , const MethodInfo*))DefaultComparer_Equals_m52940_gshared)(__this, ___x, ___y, method)
