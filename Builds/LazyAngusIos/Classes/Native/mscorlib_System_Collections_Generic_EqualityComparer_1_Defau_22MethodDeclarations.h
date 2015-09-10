#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct DefaultComparer_t8342;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_77.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::.ctor()
extern "C" void DefaultComparer__ctor_m57614_gshared (DefaultComparer_t8342 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m57614(__this, method) (( void (*) (DefaultComparer_t8342 *, const MethodInfo*))DefaultComparer__ctor_m57614_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m57615_gshared (DefaultComparer_t8342 * __this, KeyValuePair_2_t7838  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m57615(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t8342 *, KeyValuePair_2_t7838 , const MethodInfo*))DefaultComparer_GetHashCode_m57615_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m57616_gshared (DefaultComparer_t8342 * __this, KeyValuePair_2_t7838  ___x, KeyValuePair_2_t7838  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m57616(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t8342 *, KeyValuePair_2_t7838 , KeyValuePair_2_t7838 , const MethodInfo*))DefaultComparer_Equals_m57616_gshared)(__this, ___x, ___y, method)
