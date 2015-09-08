#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct DefaultComparer_t8413;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_54.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::.ctor()
extern "C" void DefaultComparer__ctor_m58646_gshared (DefaultComparer_t8413 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m58646(__this, method) (( void (*) (DefaultComparer_t8413 *, const MethodInfo*))DefaultComparer__ctor_m58646_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m58647_gshared (DefaultComparer_t8413 * __this, KeyValuePair_2_t7583  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m58647(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t8413 *, KeyValuePair_2_t7583 , const MethodInfo*))DefaultComparer_GetHashCode_m58647_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m58648_gshared (DefaultComparer_t8413 * __this, KeyValuePair_2_t7583  ___x, KeyValuePair_2_t7583  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m58648(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t8413 *, KeyValuePair_2_t7583 , KeyValuePair_2_t7583 , const MethodInfo*))DefaultComparer_Equals_m58648_gshared)(__this, ___x, ___y, method)
