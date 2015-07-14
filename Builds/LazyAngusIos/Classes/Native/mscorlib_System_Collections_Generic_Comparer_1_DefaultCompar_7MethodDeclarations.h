#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>
struct DefaultComparer_t4131;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>::.ctor()
extern "C" void DefaultComparer__ctor_m28225_gshared (DefaultComparer_t4131 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m28225(__this, method) (( void (*) (DefaultComparer_t4131 *, const MethodInfo*))DefaultComparer__ctor_m28225_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m28226_gshared (DefaultComparer_t4131 * __this, DateTime_t219  ___x, DateTime_t219  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m28226(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t4131 *, DateTime_t219 , DateTime_t219 , const MethodInfo*))DefaultComparer_Compare_m28226_gshared)(__this, ___x, ___y, method)
