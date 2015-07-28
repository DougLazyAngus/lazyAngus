﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct Comparer_1_t7483;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_24.h"

// System.Void System.Collections.Generic.Comparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.ctor()
extern "C" void Comparer_1__ctor_m49746_gshared (Comparer_1_t7483 * __this, const MethodInfo* method);
#define Comparer_1__ctor_m49746(__this, method) (( void (*) (Comparer_1_t7483 *, const MethodInfo*))Comparer_1__ctor_m49746_gshared)(__this, method)
// System.Void System.Collections.Generic.Comparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.cctor()
extern "C" void Comparer_1__cctor_m49747_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define Comparer_1__cctor_m49747(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))Comparer_1__cctor_m49747_gshared)(__this /* static, unused */, method)
// System.Int32 System.Collections.Generic.Comparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IComparer.Compare(System.Object,System.Object)
extern "C" int32_t Comparer_1_System_Collections_IComparer_Compare_m49748_gshared (Comparer_1_t7483 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method);
#define Comparer_1_System_Collections_IComparer_Compare_m49748(__this, ___x, ___y, method) (( int32_t (*) (Comparer_1_t7483 *, Object_t *, Object_t *, const MethodInfo*))Comparer_1_System_Collections_IComparer_Compare_m49748_gshared)(__this, ___x, ___y, method)
// System.Int32 System.Collections.Generic.Comparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::get_Default()
extern "C" Comparer_1_t7483 * Comparer_1_get_Default_m49749_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define Comparer_1_get_Default_m49749(__this /* static, unused */, method) (( Comparer_1_t7483 * (*) (Object_t * /* static, unused */, const MethodInfo*))Comparer_1_get_Default_m49749_gshared)(__this /* static, unused */, method)