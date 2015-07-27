#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>
struct DefaultComparer_t4208;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>::.ctor()
extern "C" void DefaultComparer__ctor_m29321_gshared (DefaultComparer_t4208 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m29321(__this, method) (( void (*) (DefaultComparer_t4208 *, const MethodInfo*))DefaultComparer__ctor_m29321_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m29322_gshared (DefaultComparer_t4208 * __this, DateTime_t245  ___x, DateTime_t245  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m29322(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t4208 *, DateTime_t245 , DateTime_t245 , const MethodInfo*))DefaultComparer_Compare_m29322_gshared)(__this, ___x, ___y, method)
