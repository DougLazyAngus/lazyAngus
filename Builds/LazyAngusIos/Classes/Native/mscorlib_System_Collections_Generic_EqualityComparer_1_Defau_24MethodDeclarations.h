#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct DefaultComparer_t7827;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_52.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::.ctor()
extern "C" void DefaultComparer__ctor_m53983_gshared (DefaultComparer_t7827 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m53983(__this, method) (( void (*) (DefaultComparer_t7827 *, const MethodInfo*))DefaultComparer__ctor_m53983_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m53984_gshared (DefaultComparer_t7827 * __this, KeyValuePair_2_t6926  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m53984(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t7827 *, KeyValuePair_2_t6926 , const MethodInfo*))DefaultComparer_GetHashCode_m53984_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m53985_gshared (DefaultComparer_t7827 * __this, KeyValuePair_2_t6926  ___x, KeyValuePair_2_t6926  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m53985(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t7827 *, KeyValuePair_2_t6926 , KeyValuePair_2_t6926 , const MethodInfo*))DefaultComparer_Equals_m53985_gshared)(__this, ___x, ___y, method)
