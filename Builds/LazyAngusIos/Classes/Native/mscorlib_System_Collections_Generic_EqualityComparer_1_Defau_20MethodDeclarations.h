#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
struct DefaultComparer_t7556;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_72.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::.ctor()
extern "C" void DefaultComparer__ctor_m50579_gshared (DefaultComparer_t7556 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m50579(__this, method) (( void (*) (DefaultComparer_t7556 *, const MethodInfo*))DefaultComparer__ctor_m50579_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m50580_gshared (DefaultComparer_t7556 * __this, KeyValuePair_2_t7160  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m50580(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t7556 *, KeyValuePair_2_t7160 , const MethodInfo*))DefaultComparer_GetHashCode_m50580_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m50581_gshared (DefaultComparer_t7556 * __this, KeyValuePair_2_t7160  ___x, KeyValuePair_2_t7160  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m50581(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t7556 *, KeyValuePair_2_t7160 , KeyValuePair_2_t7160 , const MethodInfo*))DefaultComparer_Equals_m50581_gshared)(__this, ___x, ___y, method)
