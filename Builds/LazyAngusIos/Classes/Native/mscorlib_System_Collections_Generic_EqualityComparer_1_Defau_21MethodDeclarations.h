#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct DefaultComparer_t8277;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_75.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::.ctor()
extern "C" void DefaultComparer__ctor_m56837_gshared (DefaultComparer_t8277 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m56837(__this, method) (( void (*) (DefaultComparer_t8277 *, const MethodInfo*))DefaultComparer__ctor_m56837_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m56838_gshared (DefaultComparer_t8277 * __this, KeyValuePair_2_t7827  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m56838(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t8277 *, KeyValuePair_2_t7827 , const MethodInfo*))DefaultComparer_GetHashCode_m56838_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m56839_gshared (DefaultComparer_t8277 * __this, KeyValuePair_2_t7827  ___x, KeyValuePair_2_t7827  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m56839(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t8277 *, KeyValuePair_2_t7827 , KeyValuePair_2_t7827 , const MethodInfo*))DefaultComparer_Equals_m56839_gshared)(__this, ___x, ___y, method)
