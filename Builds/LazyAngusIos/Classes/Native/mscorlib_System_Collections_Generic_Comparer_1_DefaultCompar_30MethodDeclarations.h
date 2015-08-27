﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>
struct DefaultComparer_t8702;
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
extern "C" void DefaultComparer__ctor_m64351_gshared (DefaultComparer_t8702 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m64351(__this, method) (( void (*) (DefaultComparer_t8702 *, const MethodInfo*))DefaultComparer__ctor_m64351_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m64352_gshared (DefaultComparer_t8702 * __this, DateTimeOffset_t2946  ___x, DateTimeOffset_t2946  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m64352(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t8702 *, DateTimeOffset_t2946 , DateTimeOffset_t2946 , const MethodInfo*))DefaultComparer_Compare_m64352_gshared)(__this, ___x, ___y, method)
