#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct DefaultComparer_t7697;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_75.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::.ctor()
extern "C" void DefaultComparer__ctor_m52128_gshared (DefaultComparer_t7697 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m52128(__this, method) (( void (*) (DefaultComparer_t7697 *, const MethodInfo*))DefaultComparer__ctor_m52128_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m52129_gshared (DefaultComparer_t7697 * __this, KeyValuePair_2_t7247  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m52129(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t7697 *, KeyValuePair_2_t7247 , const MethodInfo*))DefaultComparer_GetHashCode_m52129_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m52130_gshared (DefaultComparer_t7697 * __this, KeyValuePair_2_t7247  ___x, KeyValuePair_2_t7247  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m52130(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t7697 *, KeyValuePair_2_t7247 , KeyValuePair_2_t7247 , const MethodInfo*))DefaultComparer_Equals_m52130_gshared)(__this, ___x, ___y, method)
