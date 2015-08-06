#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>
struct DefaultComparer_t8623;
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
extern "C" void DefaultComparer__ctor_m63546_gshared (DefaultComparer_t8623 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m63546(__this, method) (( void (*) (DefaultComparer_t8623 *, const MethodInfo*))DefaultComparer__ctor_m63546_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m63547_gshared (DefaultComparer_t8623 * __this, DateTimeOffset_t2895  ___x, DateTimeOffset_t2895  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m63547(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t8623 *, DateTimeOffset_t2895 , DateTimeOffset_t2895 , const MethodInfo*))DefaultComparer_Compare_m63547_gshared)(__this, ___x, ___y, method)
