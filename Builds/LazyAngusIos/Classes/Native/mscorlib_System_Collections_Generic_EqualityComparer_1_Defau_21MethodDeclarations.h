#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct DefaultComparer_t7693;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_75.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::.ctor()
extern "C" void DefaultComparer__ctor_m52037_gshared (DefaultComparer_t7693 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m52037(__this, method) (( void (*) (DefaultComparer_t7693 *, const MethodInfo*))DefaultComparer__ctor_m52037_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m52038_gshared (DefaultComparer_t7693 * __this, KeyValuePair_2_t7243  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m52038(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t7693 *, KeyValuePair_2_t7243 , const MethodInfo*))DefaultComparer_GetHashCode_m52038_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m52039_gshared (DefaultComparer_t7693 * __this, KeyValuePair_2_t7243  ___x, KeyValuePair_2_t7243  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m52039(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t7693 *, KeyValuePair_2_t7243 , KeyValuePair_2_t7243 , const MethodInfo*))DefaultComparer_Equals_m52039_gshared)(__this, ___x, ___y, method)
