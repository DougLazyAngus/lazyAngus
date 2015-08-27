﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct DefaultComparer_t7375;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_67.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::.ctor()
extern "C" void DefaultComparer__ctor_m48276_gshared (DefaultComparer_t7375 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m48276(__this, method) (( void (*) (DefaultComparer_t7375 *, const MethodInfo*))DefaultComparer__ctor_m48276_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m48277_gshared (DefaultComparer_t7375 * __this, KeyValuePair_2_t7199  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m48277(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t7375 *, KeyValuePair_2_t7199 , const MethodInfo*))DefaultComparer_GetHashCode_m48277_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m48278_gshared (DefaultComparer_t7375 * __this, KeyValuePair_2_t7199  ___x, KeyValuePair_2_t7199  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m48278(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t7375 *, KeyValuePair_2_t7199 , KeyValuePair_2_t7199 , const MethodInfo*))DefaultComparer_Equals_m48278_gshared)(__this, ___x, ___y, method)
