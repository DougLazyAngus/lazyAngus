#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct DefaultComparer_t8143;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_24.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.ctor()
extern "C" void DefaultComparer__ctor_m55237_gshared (DefaultComparer_t8143 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m55237(__this, method) (( void (*) (DefaultComparer_t8143 *, const MethodInfo*))DefaultComparer__ctor_m55237_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m55238_gshared (DefaultComparer_t8143 * __this, KeyValuePair_2_t6086  ___x, KeyValuePair_2_t6086  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m55238(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t8143 *, KeyValuePair_2_t6086 , KeyValuePair_2_t6086 , const MethodInfo*))DefaultComparer_Compare_m55238_gshared)(__this, ___x, ___y, method)
