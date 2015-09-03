#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct DefaultComparer_t8137;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_24.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.ctor()
extern "C" void DefaultComparer__ctor_m55212_gshared (DefaultComparer_t8137 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m55212(__this, method) (( void (*) (DefaultComparer_t8137 *, const MethodInfo*))DefaultComparer__ctor_m55212_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m55213_gshared (DefaultComparer_t8137 * __this, KeyValuePair_2_t6082  ___x, KeyValuePair_2_t6082  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m55213(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t8137 *, KeyValuePair_2_t6082 , KeyValuePair_2_t6082 , const MethodInfo*))DefaultComparer_Compare_m55213_gshared)(__this, ___x, ___y, method)
