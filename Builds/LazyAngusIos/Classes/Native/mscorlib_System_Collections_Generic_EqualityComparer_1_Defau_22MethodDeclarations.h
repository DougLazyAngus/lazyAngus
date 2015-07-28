#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct DefaultComparer_t7677;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::.ctor()
extern "C" void DefaultComparer__ctor_m52070_gshared (DefaultComparer_t7677 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m52070(__this, method) (( void (*) (DefaultComparer_t7677 *, const MethodInfo*))DefaultComparer__ctor_m52070_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m52071_gshared (DefaultComparer_t7677 * __this, KeyValuePair_2_t7173  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m52071(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t7677 *, KeyValuePair_2_t7173 , const MethodInfo*))DefaultComparer_GetHashCode_m52071_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m52072_gshared (DefaultComparer_t7677 * __this, KeyValuePair_2_t7173  ___x, KeyValuePair_2_t7173  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m52072(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t7677 *, KeyValuePair_2_t7173 , KeyValuePair_2_t7173 , const MethodInfo*))DefaultComparer_Equals_m52072_gshared)(__this, ___x, ___y, method)
