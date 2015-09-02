#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct DefaultComparer_t7872;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_54.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::.ctor()
extern "C" void DefaultComparer__ctor_m54359_gshared (DefaultComparer_t7872 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m54359(__this, method) (( void (*) (DefaultComparer_t7872 *, const MethodInfo*))DefaultComparer__ctor_m54359_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m54360_gshared (DefaultComparer_t7872 * __this, KeyValuePair_2_t7042  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m54360(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t7872 *, KeyValuePair_2_t7042 , const MethodInfo*))DefaultComparer_GetHashCode_m54360_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m54361_gshared (DefaultComparer_t7872 * __this, KeyValuePair_2_t7042  ___x, KeyValuePair_2_t7042  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m54361(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t7872 *, KeyValuePair_2_t7042 , KeyValuePair_2_t7042 , const MethodInfo*))DefaultComparer_Equals_m54361_gshared)(__this, ___x, ___y, method)
