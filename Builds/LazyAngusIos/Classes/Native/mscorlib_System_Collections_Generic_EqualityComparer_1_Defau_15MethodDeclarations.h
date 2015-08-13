#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct DefaultComparer_t7291;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_45.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::.ctor()
extern "C" void DefaultComparer__ctor_m47086_gshared (DefaultComparer_t7291 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m47086(__this, method) (( void (*) (DefaultComparer_t7291 *, const MethodInfo*))DefaultComparer__ctor_m47086_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m47087_gshared (DefaultComparer_t7291 * __this, KeyValuePair_2_t6182  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m47087(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t7291 *, KeyValuePair_2_t6182 , const MethodInfo*))DefaultComparer_GetHashCode_m47087_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m47088_gshared (DefaultComparer_t7291 * __this, KeyValuePair_2_t6182  ___x, KeyValuePair_2_t6182  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m47088(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t7291 *, KeyValuePair_2_t6182 , KeyValuePair_2_t6182 , const MethodInfo*))DefaultComparer_Equals_m47088_gshared)(__this, ___x, ___y, method)
