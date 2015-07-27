#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>
struct DefaultComparer_t4213;
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
extern "C" void DefaultComparer__ctor_m29345_gshared (DefaultComparer_t4213 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m29345(__this, method) (( void (*) (DefaultComparer_t4213 *, const MethodInfo*))DefaultComparer__ctor_m29345_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m29346_gshared (DefaultComparer_t4213 * __this, DateTimeOffset_t1328  ___x, DateTimeOffset_t1328  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m29346(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t4213 *, DateTimeOffset_t1328 , DateTimeOffset_t1328 , const MethodInfo*))DefaultComparer_Compare_m29346_gshared)(__this, ___x, ___y, method)
