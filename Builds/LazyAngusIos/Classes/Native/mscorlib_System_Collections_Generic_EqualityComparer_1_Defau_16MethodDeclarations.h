#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct DefaultComparer_t7404;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_67.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::.ctor()
extern "C" void DefaultComparer__ctor_m48608_gshared (DefaultComparer_t7404 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m48608(__this, method) (( void (*) (DefaultComparer_t7404 *, const MethodInfo*))DefaultComparer__ctor_m48608_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m48609_gshared (DefaultComparer_t7404 * __this, KeyValuePair_2_t7228  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m48609(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t7404 *, KeyValuePair_2_t7228 , const MethodInfo*))DefaultComparer_GetHashCode_m48609_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m48610_gshared (DefaultComparer_t7404 * __this, KeyValuePair_2_t7228  ___x, KeyValuePair_2_t7228  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m48610(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t7404 *, KeyValuePair_2_t7228 , KeyValuePair_2_t7228 , const MethodInfo*))DefaultComparer_Equals_m48610_gshared)(__this, ___x, ___y, method)
