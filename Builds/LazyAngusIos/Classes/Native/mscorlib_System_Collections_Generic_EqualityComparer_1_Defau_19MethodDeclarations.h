#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct DefaultComparer_t7489;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_24.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.ctor()
extern "C" void DefaultComparer__ctor_m49786_gshared (DefaultComparer_t7489 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m49786(__this, method) (( void (*) (DefaultComparer_t7489 *, const MethodInfo*))DefaultComparer__ctor_m49786_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m49787_gshared (DefaultComparer_t7489 * __this, KeyValuePair_2_t5484  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m49787(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t7489 *, KeyValuePair_2_t5484 , const MethodInfo*))DefaultComparer_GetHashCode_m49787_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m49788_gshared (DefaultComparer_t7489 * __this, KeyValuePair_2_t5484  ___x, KeyValuePair_2_t5484  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m49788(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t7489 *, KeyValuePair_2_t5484 , KeyValuePair_2_t5484 , const MethodInfo*))DefaultComparer_Equals_m49788_gshared)(__this, ___x, ___y, method)
