#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct DefaultComparer_t7836;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_54.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::.ctor()
extern "C" void DefaultComparer__ctor_m53903_gshared (DefaultComparer_t7836 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m53903(__this, method) (( void (*) (DefaultComparer_t7836 *, const MethodInfo*))DefaultComparer__ctor_m53903_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m53904_gshared (DefaultComparer_t7836 * __this, KeyValuePair_2_t7006  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m53904(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t7836 *, KeyValuePair_2_t7006 , const MethodInfo*))DefaultComparer_GetHashCode_m53904_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m53905_gshared (DefaultComparer_t7836 * __this, KeyValuePair_2_t7006  ___x, KeyValuePair_2_t7006  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m53905(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t7836 *, KeyValuePair_2_t7006 , KeyValuePair_2_t7006 , const MethodInfo*))DefaultComparer_Equals_m53905_gshared)(__this, ___x, ___y, method)
