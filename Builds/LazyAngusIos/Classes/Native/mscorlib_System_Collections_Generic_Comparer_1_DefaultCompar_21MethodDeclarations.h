#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct DefaultComparer_t7732;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_75.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::.ctor()
extern "C" void DefaultComparer__ctor_m52504_gshared (DefaultComparer_t7732 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m52504(__this, method) (( void (*) (DefaultComparer_t7732 *, const MethodInfo*))DefaultComparer__ctor_m52504_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m52505_gshared (DefaultComparer_t7732 * __this, KeyValuePair_2_t7279  ___x, KeyValuePair_2_t7279  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m52505(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t7732 *, KeyValuePair_2_t7279 , KeyValuePair_2_t7279 , const MethodInfo*))DefaultComparer_Compare_m52505_gshared)(__this, ___x, ___y, method)
