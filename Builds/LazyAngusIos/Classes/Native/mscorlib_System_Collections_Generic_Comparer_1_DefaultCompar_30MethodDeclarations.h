#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>
struct DefaultComparer_t8699;
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
extern "C" void DefaultComparer__ctor_m64318_gshared (DefaultComparer_t8699 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m64318(__this, method) (( void (*) (DefaultComparer_t8699 *, const MethodInfo*))DefaultComparer__ctor_m64318_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m64319_gshared (DefaultComparer_t8699 * __this, DateTimeOffset_t2943  ___x, DateTimeOffset_t2943  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m64319(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t8699 *, DateTimeOffset_t2943 , DateTimeOffset_t2943 , const MethodInfo*))DefaultComparer_Compare_m64319_gshared)(__this, ___x, ___y, method)
