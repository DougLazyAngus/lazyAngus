#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct DefaultComparer_t7762;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_77.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::.ctor()
extern "C" void DefaultComparer__ctor_m52906_gshared (DefaultComparer_t7762 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m52906(__this, method) (( void (*) (DefaultComparer_t7762 *, const MethodInfo*))DefaultComparer__ctor_m52906_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m52907_gshared (DefaultComparer_t7762 * __this, KeyValuePair_2_t7258  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m52907(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t7762 *, KeyValuePair_2_t7258 , const MethodInfo*))DefaultComparer_GetHashCode_m52907_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m52908_gshared (DefaultComparer_t7762 * __this, KeyValuePair_2_t7258  ___x, KeyValuePair_2_t7258  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m52908(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t7762 *, KeyValuePair_2_t7258 , KeyValuePair_2_t7258 , const MethodInfo*))DefaultComparer_Equals_m52908_gshared)(__this, ___x, ___y, method)
