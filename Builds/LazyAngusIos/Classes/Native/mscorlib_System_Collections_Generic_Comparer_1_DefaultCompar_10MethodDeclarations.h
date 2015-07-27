#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>
struct DefaultComparer_t4220;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m29376_gshared (DefaultComparer_t4220 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m29376(__this, method) (( void (*) (DefaultComparer_t4220 *, const MethodInfo*))DefaultComparer__ctor_m29376_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m29377_gshared (DefaultComparer_t4220 * __this, TimeSpan_t292  ___x, TimeSpan_t292  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m29377(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t4220 *, TimeSpan_t292 , TimeSpan_t292 , const MethodInfo*))DefaultComparer_Compare_m29377_gshared)(__this, ___x, ___y, method)
