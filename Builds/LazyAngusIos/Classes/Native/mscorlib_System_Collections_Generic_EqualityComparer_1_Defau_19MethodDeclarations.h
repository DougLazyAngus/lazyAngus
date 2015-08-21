#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct DefaultComparer_t7567;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_24.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.ctor()
extern "C" void DefaultComparer__ctor_m50575_gshared (DefaultComparer_t7567 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m50575(__this, method) (( void (*) (DefaultComparer_t7567 *, const MethodInfo*))DefaultComparer__ctor_m50575_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m50576_gshared (DefaultComparer_t7567 * __this, KeyValuePair_2_t5530  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m50576(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t7567 *, KeyValuePair_2_t5530 , const MethodInfo*))DefaultComparer_GetHashCode_m50576_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m50577_gshared (DefaultComparer_t7567 * __this, KeyValuePair_2_t5530  ___x, KeyValuePair_2_t5530  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m50577(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t7567 *, KeyValuePair_2_t5530 , KeyValuePair_2_t5530 , const MethodInfo*))DefaultComparer_Equals_m50577_gshared)(__this, ___x, ___y, method)
