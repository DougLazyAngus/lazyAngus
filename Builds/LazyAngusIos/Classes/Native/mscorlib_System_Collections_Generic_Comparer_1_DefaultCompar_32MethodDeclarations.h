#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>
struct DefaultComparer_t8707;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m64352_gshared (DefaultComparer_t8707 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m64352(__this, method) (( void (*) (DefaultComparer_t8707 *, const MethodInfo*))DefaultComparer__ctor_m64352_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m64353_gshared (DefaultComparer_t8707 * __this, TimeSpan_t334  ___x, TimeSpan_t334  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m64353(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t8707 *, TimeSpan_t334 , TimeSpan_t334 , const MethodInfo*))DefaultComparer_Compare_m64353_gshared)(__this, ___x, ___y, method)
