﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>
struct DefaultComparer_t6766;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>::.ctor()
extern "C" void DefaultComparer__ctor_m41086_gshared (DefaultComparer_t6766 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m41086(__this, method) (( void (*) (DefaultComparer_t6766 *, const MethodInfo*))DefaultComparer__ctor_m41086_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m41087_gshared (DefaultComparer_t6766 * __this, DateTime_t287  ___x, DateTime_t287  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m41087(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t6766 *, DateTime_t287 , DateTime_t287 , const MethodInfo*))DefaultComparer_Compare_m41087_gshared)(__this, ___x, ___y, method)
