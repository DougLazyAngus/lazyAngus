#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>
struct DefaultComparer_t8631;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m63580_gshared (DefaultComparer_t8631 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m63580(__this, method) (( void (*) (DefaultComparer_t8631 *, const MethodInfo*))DefaultComparer__ctor_m63580_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m63581_gshared (DefaultComparer_t8631 * __this, TimeSpan_t334  ___x, TimeSpan_t334  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m63581(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t8631 *, TimeSpan_t334 , TimeSpan_t334 , const MethodInfo*))DefaultComparer_Compare_m63581_gshared)(__this, ___x, ___y, method)
