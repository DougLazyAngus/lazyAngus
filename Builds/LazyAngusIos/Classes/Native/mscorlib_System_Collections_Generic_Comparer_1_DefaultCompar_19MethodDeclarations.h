﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct DefaultComparer_t7484;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_24.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.ctor()
extern "C" void DefaultComparer__ctor_m49750_gshared (DefaultComparer_t7484 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m49750(__this, method) (( void (*) (DefaultComparer_t7484 *, const MethodInfo*))DefaultComparer__ctor_m49750_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m49751_gshared (DefaultComparer_t7484 * __this, KeyValuePair_2_t5476  ___x, KeyValuePair_2_t5476  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m49751(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t7484 *, KeyValuePair_2_t5476 , KeyValuePair_2_t5476 , const MethodInfo*))DefaultComparer_Compare_m49751_gshared)(__this, ___x, ___y, method)