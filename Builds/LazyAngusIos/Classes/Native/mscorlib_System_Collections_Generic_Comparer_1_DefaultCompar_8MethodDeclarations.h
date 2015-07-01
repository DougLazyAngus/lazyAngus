#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>
struct DefaultComparer_t4090;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>::.ctor()
extern "C" void DefaultComparer__ctor_m28036_gshared (DefaultComparer_t4090 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m28036(__this, method) (( void (*) (DefaultComparer_t4090 *, const MethodInfo*))DefaultComparer__ctor_m28036_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m28037_gshared (DefaultComparer_t4090 * __this, DateTime_t219  ___x, DateTime_t219  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m28037(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t4090 *, DateTime_t219 , DateTime_t219 , const MethodInfo*))DefaultComparer_Compare_m28037_gshared)(__this, ___x, ___y, method)
