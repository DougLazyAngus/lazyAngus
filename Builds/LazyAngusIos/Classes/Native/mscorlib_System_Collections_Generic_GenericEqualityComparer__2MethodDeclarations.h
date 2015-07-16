﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>
struct GenericEqualityComparer_1_t2840;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::.ctor()
extern "C" void GenericEqualityComparer_1__ctor_m15940_gshared (GenericEqualityComparer_1_t2840 * __this, const MethodInfo* method);
#define GenericEqualityComparer_1__ctor_m15940(__this, method) (( void (*) (GenericEqualityComparer_1_t2840 *, const MethodInfo*))GenericEqualityComparer_1__ctor_m15940_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::GetHashCode(T)
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m28348_gshared (GenericEqualityComparer_1_t2840 * __this, TimeSpan_t266  ___obj, const MethodInfo* method);
#define GenericEqualityComparer_1_GetHashCode_m28348(__this, ___obj, method) (( int32_t (*) (GenericEqualityComparer_1_t2840 *, TimeSpan_t266 , const MethodInfo*))GenericEqualityComparer_1_GetHashCode_m28348_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::Equals(T,T)
extern "C" bool GenericEqualityComparer_1_Equals_m28349_gshared (GenericEqualityComparer_1_t2840 * __this, TimeSpan_t266  ___x, TimeSpan_t266  ___y, const MethodInfo* method);
#define GenericEqualityComparer_1_Equals_m28349(__this, ___x, ___y, method) (( bool (*) (GenericEqualityComparer_1_t2840 *, TimeSpan_t266 , TimeSpan_t266 , const MethodInfo*))GenericEqualityComparer_1_Equals_m28349_gshared)(__this, ___x, ___y, method)
