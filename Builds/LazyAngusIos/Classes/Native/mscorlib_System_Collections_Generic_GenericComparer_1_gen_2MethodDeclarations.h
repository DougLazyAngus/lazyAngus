#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericComparer`1<System.TimeSpan>
struct GenericComparer_1_t2829;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.GenericComparer`1<System.TimeSpan>::.ctor()
extern "C" void GenericComparer_1__ctor_m15878_gshared (GenericComparer_1_t2829 * __this, const MethodInfo* method);
#define GenericComparer_1__ctor_m15878(__this, method) (( void (*) (GenericComparer_1_t2829 *, const MethodInfo*))GenericComparer_1__ctor_m15878_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericComparer`1<System.TimeSpan>::Compare(T,T)
extern "C" int32_t GenericComparer_1_Compare_m28275_gshared (GenericComparer_1_t2829 * __this, TimeSpan_t266  ___x, TimeSpan_t266  ___y, const MethodInfo* method);
#define GenericComparer_1_Compare_m28275(__this, ___x, ___y, method) (( int32_t (*) (GenericComparer_1_t2829 *, TimeSpan_t266 , TimeSpan_t266 , const MethodInfo*))GenericComparer_1_Compare_m28275_gshared)(__this, ___x, ___y, method)
