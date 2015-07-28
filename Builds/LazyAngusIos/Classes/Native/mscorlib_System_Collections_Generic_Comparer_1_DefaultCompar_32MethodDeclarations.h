#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>
struct DefaultComparer_t8622;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m63517_gshared (DefaultComparer_t8622 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m63517(__this, method) (( void (*) (DefaultComparer_t8622 *, const MethodInfo*))DefaultComparer__ctor_m63517_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m63518_gshared (DefaultComparer_t8622 * __this, TimeSpan_t334  ___x, TimeSpan_t334  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m63518(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t8622 *, TimeSpan_t334 , TimeSpan_t334 , const MethodInfo*))DefaultComparer_Compare_m63518_gshared)(__this, ___x, ___y, method)
