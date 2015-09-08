#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct DefaultComparer_t8135;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_24.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.ctor()
extern "C" void DefaultComparer__ctor_m55214_gshared (DefaultComparer_t8135 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m55214(__this, method) (( void (*) (DefaultComparer_t8135 *, const MethodInfo*))DefaultComparer__ctor_m55214_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m55215_gshared (DefaultComparer_t8135 * __this, KeyValuePair_2_t6083  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m55215(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t8135 *, KeyValuePair_2_t6083 , const MethodInfo*))DefaultComparer_GetHashCode_m55215_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m55216_gshared (DefaultComparer_t8135 * __this, KeyValuePair_2_t6083  ___x, KeyValuePair_2_t6083  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m55216(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t8135 *, KeyValuePair_2_t6083 , KeyValuePair_2_t6083 , const MethodInfo*))DefaultComparer_Equals_m55216_gshared)(__this, ___x, ___y, method)
