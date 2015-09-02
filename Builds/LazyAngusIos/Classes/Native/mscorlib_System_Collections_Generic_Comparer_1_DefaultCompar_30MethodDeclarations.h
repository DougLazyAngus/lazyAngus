#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>
struct DefaultComparer_t8731;
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
extern "C" void DefaultComparer__ctor_m64683_gshared (DefaultComparer_t8731 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m64683(__this, method) (( void (*) (DefaultComparer_t8731 *, const MethodInfo*))DefaultComparer__ctor_m64683_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m64684_gshared (DefaultComparer_t8731 * __this, DateTimeOffset_t2962  ___x, DateTimeOffset_t2962  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m64684(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t8731 *, DateTimeOffset_t2962 , DateTimeOffset_t2962 , const MethodInfo*))DefaultComparer_Compare_m64684_gshared)(__this, ___x, ___y, method)
