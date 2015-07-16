#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>
struct DefaultComparer_t4142;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>::.ctor()
extern "C" void DefaultComparer__ctor_m28291_gshared (DefaultComparer_t4142 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m28291(__this, method) (( void (*) (DefaultComparer_t4142 *, const MethodInfo*))DefaultComparer__ctor_m28291_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m28292_gshared (DefaultComparer_t4142 * __this, DateTime_t219  ___x, DateTime_t219  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m28292(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t4142 *, DateTime_t219 , DateTime_t219 , const MethodInfo*))DefaultComparer_Compare_m28292_gshared)(__this, ___x, ___y, method)
