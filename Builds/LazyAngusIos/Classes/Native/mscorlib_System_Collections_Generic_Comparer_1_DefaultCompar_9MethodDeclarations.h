#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>
struct DefaultComparer_t4118;
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
extern "C" void DefaultComparer__ctor_m28211_gshared (DefaultComparer_t4118 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m28211(__this, method) (( void (*) (DefaultComparer_t4118 *, const MethodInfo*))DefaultComparer__ctor_m28211_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m28212_gshared (DefaultComparer_t4118 * __this, DateTimeOffset_t1248  ___x, DateTimeOffset_t1248  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m28212(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t4118 *, DateTimeOffset_t1248 , DateTimeOffset_t1248 , const MethodInfo*))DefaultComparer_Compare_m28212_gshared)(__this, ___x, ___y, method)
