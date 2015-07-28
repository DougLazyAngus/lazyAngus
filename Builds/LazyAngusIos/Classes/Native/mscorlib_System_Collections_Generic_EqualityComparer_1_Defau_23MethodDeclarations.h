#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct DefaultComparer_t7755;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_53.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::.ctor()
extern "C" void DefaultComparer__ctor_m53159_gshared (DefaultComparer_t7755 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m53159(__this, method) (( void (*) (DefaultComparer_t7755 *, const MethodInfo*))DefaultComparer__ctor_m53159_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m53160_gshared (DefaultComparer_t7755 * __this, KeyValuePair_2_t6925  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m53160(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t7755 *, KeyValuePair_2_t6925 , const MethodInfo*))DefaultComparer_GetHashCode_m53160_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m53161_gshared (DefaultComparer_t7755 * __this, KeyValuePair_2_t6925  ___x, KeyValuePair_2_t6925  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m53161(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t7755 *, KeyValuePair_2_t6925 , KeyValuePair_2_t6925 , const MethodInfo*))DefaultComparer_Equals_m53161_gshared)(__this, ___x, ___y, method)
