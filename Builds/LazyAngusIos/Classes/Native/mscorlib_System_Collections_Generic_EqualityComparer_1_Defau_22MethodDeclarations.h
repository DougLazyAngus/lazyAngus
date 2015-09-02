#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct DefaultComparer_t7794;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_77.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::.ctor()
extern "C" void DefaultComparer__ctor_m53270_gshared (DefaultComparer_t7794 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m53270(__this, method) (( void (*) (DefaultComparer_t7794 *, const MethodInfo*))DefaultComparer__ctor_m53270_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m53271_gshared (DefaultComparer_t7794 * __this, KeyValuePair_2_t7290  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m53271(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t7794 *, KeyValuePair_2_t7290 , const MethodInfo*))DefaultComparer_GetHashCode_m53271_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m53272_gshared (DefaultComparer_t7794 * __this, KeyValuePair_2_t7290  ___x, KeyValuePair_2_t7290  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m53272(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t7794 *, KeyValuePair_2_t7290 , KeyValuePair_2_t7290 , const MethodInfo*))DefaultComparer_Equals_m53272_gshared)(__this, ___x, ___y, method)
