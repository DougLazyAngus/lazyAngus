#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct DefaultComparer_t7975;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_55.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::.ctor()
extern "C" void DefaultComparer__ctor_m55551_gshared (DefaultComparer_t7975 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m55551(__this, method) (( void (*) (DefaultComparer_t7975 *, const MethodInfo*))DefaultComparer__ctor_m55551_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m55552_gshared (DefaultComparer_t7975 * __this, KeyValuePair_2_t7017  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m55552(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t7975 *, KeyValuePair_2_t7017 , const MethodInfo*))DefaultComparer_GetHashCode_m55552_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m55553_gshared (DefaultComparer_t7975 * __this, KeyValuePair_2_t7017  ___x, KeyValuePair_2_t7017  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m55553(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t7975 *, KeyValuePair_2_t7017 , KeyValuePair_2_t7017 , const MethodInfo*))DefaultComparer_Equals_m55553_gshared)(__this, ___x, ___y, method)
