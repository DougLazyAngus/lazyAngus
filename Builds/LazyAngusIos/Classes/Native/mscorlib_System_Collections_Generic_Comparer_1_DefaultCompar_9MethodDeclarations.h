#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t4215;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m29351_gshared (DefaultComparer_t4215 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m29351(__this, method) (( void (*) (DefaultComparer_t4215 *, const MethodInfo*))DefaultComparer__ctor_m29351_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m29352_gshared (DefaultComparer_t4215 * __this, Guid_t44  ___x, Guid_t44  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m29352(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t4215 *, Guid_t44 , Guid_t44 , const MethodInfo*))DefaultComparer_Compare_m29352_gshared)(__this, ___x, ___y, method)
