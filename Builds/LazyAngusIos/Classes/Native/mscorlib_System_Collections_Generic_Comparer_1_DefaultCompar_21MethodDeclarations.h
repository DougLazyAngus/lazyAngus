﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct DefaultComparer_t7614;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::.ctor()
extern "C" void DefaultComparer__ctor_m51304_gshared (DefaultComparer_t7614 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m51304(__this, method) (( void (*) (DefaultComparer_t7614 *, const MethodInfo*))DefaultComparer__ctor_m51304_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m51305_gshared (DefaultComparer_t7614 * __this, KeyValuePair_2_t7161  ___x, KeyValuePair_2_t7161  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m51305(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t7614 *, KeyValuePair_2_t7161 , KeyValuePair_2_t7161 , const MethodInfo*))DefaultComparer_Compare_m51305_gshared)(__this, ___x, ___y, method)