#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct DefaultComparer_t8407;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_54.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::.ctor()
extern "C" void DefaultComparer__ctor_m58621_gshared (DefaultComparer_t8407 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m58621(__this, method) (( void (*) (DefaultComparer_t8407 *, const MethodInfo*))DefaultComparer__ctor_m58621_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m58622_gshared (DefaultComparer_t8407 * __this, KeyValuePair_2_t7577  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m58622(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t8407 *, KeyValuePair_2_t7577 , const MethodInfo*))DefaultComparer_GetHashCode_m58622_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m58623_gshared (DefaultComparer_t8407 * __this, KeyValuePair_2_t7577  ___x, KeyValuePair_2_t7577  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m58623(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t8407 *, KeyValuePair_2_t7577 , KeyValuePair_2_t7577 , const MethodInfo*))DefaultComparer_Equals_m58623_gshared)(__this, ___x, ___y, method)
