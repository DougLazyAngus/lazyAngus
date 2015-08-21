#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct DefaultComparer_t7295;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_45.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::.ctor()
extern "C" void DefaultComparer__ctor_m47175_gshared (DefaultComparer_t7295 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m47175(__this, method) (( void (*) (DefaultComparer_t7295 *, const MethodInfo*))DefaultComparer__ctor_m47175_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m47176_gshared (DefaultComparer_t7295 * __this, KeyValuePair_2_t6186  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m47176(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t7295 *, KeyValuePair_2_t6186 , const MethodInfo*))DefaultComparer_GetHashCode_m47176_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m47177_gshared (DefaultComparer_t7295 * __this, KeyValuePair_2_t6186  ___x, KeyValuePair_2_t6186  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m47177(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t7295 *, KeyValuePair_2_t6186 , KeyValuePair_2_t6186 , const MethodInfo*))DefaultComparer_Equals_m47177_gshared)(__this, ___x, ___y, method)
