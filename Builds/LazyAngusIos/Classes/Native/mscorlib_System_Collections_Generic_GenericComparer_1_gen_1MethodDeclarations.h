#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericComparer`1<System.Guid>
struct GenericComparer_1_t2804;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.GenericComparer`1<System.Guid>::.ctor()
extern "C" void GenericComparer_1__ctor_m15721_gshared (GenericComparer_1_t2804 * __this, const MethodInfo* method);
#define GenericComparer_1__ctor_m15721(__this, method) (( void (*) (GenericComparer_1_t2804 *, const MethodInfo*))GenericComparer_1__ctor_m15721_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericComparer`1<System.Guid>::Compare(T,T)
extern "C" int32_t GenericComparer_1_Compare_m28227_gshared (GenericComparer_1_t2804 * __this, Guid_t44  ___x, Guid_t44  ___y, const MethodInfo* method);
#define GenericComparer_1_Compare_m28227(__this, ___x, ___y, method) (( int32_t (*) (GenericComparer_1_t2804 *, Guid_t44 , Guid_t44 , const MethodInfo*))GenericComparer_1_Compare_m28227_gshared)(__this, ___x, ___y, method)
