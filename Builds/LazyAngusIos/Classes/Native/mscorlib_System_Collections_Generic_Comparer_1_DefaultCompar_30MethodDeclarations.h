#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>
struct DefaultComparer_t8614;
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
extern "C" void DefaultComparer__ctor_m63483_gshared (DefaultComparer_t8614 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m63483(__this, method) (( void (*) (DefaultComparer_t8614 *, const MethodInfo*))DefaultComparer__ctor_m63483_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m63484_gshared (DefaultComparer_t8614 * __this, DateTimeOffset_t2887  ___x, DateTimeOffset_t2887  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m63484(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t8614 *, DateTimeOffset_t2887 , DateTimeOffset_t2887 , const MethodInfo*))DefaultComparer_Compare_m63484_gshared)(__this, ___x, ___y, method)
