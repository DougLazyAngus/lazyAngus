#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>
struct DefaultComparer_t6847;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>::.ctor()
extern "C" void DefaultComparer__ctor_m41833_gshared (DefaultComparer_t6847 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m41833(__this, method) (( void (*) (DefaultComparer_t6847 *, const MethodInfo*))DefaultComparer__ctor_m41833_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m41834_gshared (DefaultComparer_t6847 * __this, DateTime_t287  ___x, DateTime_t287  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m41834(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t6847 *, DateTime_t287 , DateTime_t287 , const MethodInfo*))DefaultComparer_Compare_m41834_gshared)(__this, ___x, ___y, method)
