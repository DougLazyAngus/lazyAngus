#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct DefaultComparer_t8150;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_24.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.ctor()
extern "C" void DefaultComparer__ctor_m55294_gshared (DefaultComparer_t8150 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m55294(__this, method) (( void (*) (DefaultComparer_t8150 *, const MethodInfo*))DefaultComparer__ctor_m55294_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m55295_gshared (DefaultComparer_t8150 * __this, KeyValuePair_2_t6093  ___x, KeyValuePair_2_t6093  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m55295(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t8150 *, KeyValuePair_2_t6093 , KeyValuePair_2_t6093 , const MethodInfo*))DefaultComparer_Compare_m55295_gshared)(__this, ___x, ___y, method)
