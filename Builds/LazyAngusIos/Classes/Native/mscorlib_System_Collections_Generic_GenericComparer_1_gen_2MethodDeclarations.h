#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericComparer`1<System.TimeSpan>
struct GenericComparer_1_t2885;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.GenericComparer`1<System.TimeSpan>::.ctor()
extern "C" void GenericComparer_1__ctor_m16491_gshared (GenericComparer_1_t2885 * __this, const MethodInfo* method);
#define GenericComparer_1__ctor_m16491(__this, method) (( void (*) (GenericComparer_1_t2885 *, const MethodInfo*))GenericComparer_1__ctor_m16491_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericComparer`1<System.TimeSpan>::Compare(T,T)
extern "C" int32_t GenericComparer_1_Compare_m29378_gshared (GenericComparer_1_t2885 * __this, TimeSpan_t294  ___x, TimeSpan_t294  ___y, const MethodInfo* method);
#define GenericComparer_1_Compare_m29378(__this, ___x, ___y, method) (( int32_t (*) (GenericComparer_1_t2885 *, TimeSpan_t294 , TimeSpan_t294 , const MethodInfo*))GenericComparer_1_Compare_m29378_gshared)(__this, ___x, ___y, method)
