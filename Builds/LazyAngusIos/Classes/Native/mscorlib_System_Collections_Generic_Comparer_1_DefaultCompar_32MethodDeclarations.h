﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>
struct DefaultComparer_t8710;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m64385_gshared (DefaultComparer_t8710 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m64385(__this, method) (( void (*) (DefaultComparer_t8710 *, const MethodInfo*))DefaultComparer__ctor_m64385_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m64386_gshared (DefaultComparer_t8710 * __this, TimeSpan_t334  ___x, TimeSpan_t334  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m64386(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t8710 *, TimeSpan_t334 , TimeSpan_t334 , const MethodInfo*))DefaultComparer_Compare_m64386_gshared)(__this, ___x, ___y, method)
