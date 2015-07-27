#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>
struct DefaultComparer_t4212;
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
extern "C" void DefaultComparer__ctor_m29338_gshared (DefaultComparer_t4212 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m29338(__this, method) (( void (*) (DefaultComparer_t4212 *, const MethodInfo*))DefaultComparer__ctor_m29338_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m29339_gshared (DefaultComparer_t4212 * __this, DateTimeOffset_t1327  ___x, DateTimeOffset_t1327  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m29339(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t4212 *, DateTimeOffset_t1327 , DateTimeOffset_t1327 , const MethodInfo*))DefaultComparer_Compare_m29339_gshared)(__this, ___x, ___y, method)
