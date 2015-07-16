#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>
struct DefaultComparer_t4154;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m28346_gshared (DefaultComparer_t4154 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m28346(__this, method) (( void (*) (DefaultComparer_t4154 *, const MethodInfo*))DefaultComparer__ctor_m28346_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m28347_gshared (DefaultComparer_t4154 * __this, TimeSpan_t266  ___x, TimeSpan_t266  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m28347(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t4154 *, TimeSpan_t266 , TimeSpan_t266 , const MethodInfo*))DefaultComparer_Compare_m28347_gshared)(__this, ___x, ___y, method)
