#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t4150;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m28329_gshared (DefaultComparer_t4150 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m28329(__this, method) (( void (*) (DefaultComparer_t4150 *, const MethodInfo*))DefaultComparer__ctor_m28329_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m28330_gshared (DefaultComparer_t4150 * __this, Guid_t44  ___x, Guid_t44  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m28330(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t4150 *, Guid_t44 , Guid_t44 , const MethodInfo*))DefaultComparer_Compare_m28330_gshared)(__this, ___x, ___y, method)
