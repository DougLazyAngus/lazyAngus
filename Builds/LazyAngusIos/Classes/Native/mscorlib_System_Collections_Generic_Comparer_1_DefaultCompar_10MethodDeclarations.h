﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>
struct DefaultComparer_t4221;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m29383_gshared (DefaultComparer_t4221 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m29383(__this, method) (( void (*) (DefaultComparer_t4221 *, const MethodInfo*))DefaultComparer__ctor_m29383_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m29384_gshared (DefaultComparer_t4221 * __this, TimeSpan_t294  ___x, TimeSpan_t294  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m29384(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t4221 *, TimeSpan_t294 , TimeSpan_t294 , const MethodInfo*))DefaultComparer_Compare_m29384_gshared)(__this, ___x, ___y, method)
