#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct DefaultComparer_t7843;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_54.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::.ctor()
extern "C" void DefaultComparer__ctor_m54027_gshared (DefaultComparer_t7843 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m54027(__this, method) (( void (*) (DefaultComparer_t7843 *, const MethodInfo*))DefaultComparer__ctor_m54027_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m54028_gshared (DefaultComparer_t7843 * __this, KeyValuePair_2_t7013  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m54028(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t7843 *, KeyValuePair_2_t7013 , const MethodInfo*))DefaultComparer_GetHashCode_m54028_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m54029_gshared (DefaultComparer_t7843 * __this, KeyValuePair_2_t7013  ___x, KeyValuePair_2_t7013  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m54029(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t7843 *, KeyValuePair_2_t7013 , KeyValuePair_2_t7013 , const MethodInfo*))DefaultComparer_Equals_m54029_gshared)(__this, ___x, ___y, method)
