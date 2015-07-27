#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t4217;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m29366_gshared (DefaultComparer_t4217 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m29366(__this, method) (( void (*) (DefaultComparer_t4217 *, const MethodInfo*))DefaultComparer__ctor_m29366_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m29367_gshared (DefaultComparer_t4217 * __this, Guid_t44  ___x, Guid_t44  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m29367(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t4217 *, Guid_t44 , Guid_t44 , const MethodInfo*))DefaultComparer_Compare_m29367_gshared)(__this, ___x, ___y, method)
