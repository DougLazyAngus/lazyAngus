#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct DefaultComparer_t7687;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::.ctor()
extern "C" void DefaultComparer__ctor_m52128_gshared (DefaultComparer_t7687 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m52128(__this, method) (( void (*) (DefaultComparer_t7687 *, const MethodInfo*))DefaultComparer__ctor_m52128_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m52129_gshared (DefaultComparer_t7687 * __this, KeyValuePair_2_t7180  ___x, KeyValuePair_2_t7180  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m52129(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t7687 *, KeyValuePair_2_t7180 , KeyValuePair_2_t7180 , const MethodInfo*))DefaultComparer_Compare_m52129_gshared)(__this, ___x, ___y, method)
