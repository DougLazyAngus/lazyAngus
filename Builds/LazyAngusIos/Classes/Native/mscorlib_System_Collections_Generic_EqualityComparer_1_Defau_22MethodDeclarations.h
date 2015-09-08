#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct DefaultComparer_t8330;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_77.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::.ctor()
extern "C" void DefaultComparer__ctor_m57545_gshared (DefaultComparer_t8330 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m57545(__this, method) (( void (*) (DefaultComparer_t8330 *, const MethodInfo*))DefaultComparer__ctor_m57545_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m57546_gshared (DefaultComparer_t8330 * __this, KeyValuePair_2_t7826  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m57546(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t8330 *, KeyValuePair_2_t7826 , const MethodInfo*))DefaultComparer_GetHashCode_m57546_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m57547_gshared (DefaultComparer_t8330 * __this, KeyValuePair_2_t7826  ___x, KeyValuePair_2_t7826  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m57547(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t8330 *, KeyValuePair_2_t7826 , KeyValuePair_2_t7826 , const MethodInfo*))DefaultComparer_Equals_m57547_gshared)(__this, ___x, ___y, method)
