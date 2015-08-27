﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>
struct GenericEqualityComparer_1_t4910;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::.ctor()
extern "C" void GenericEqualityComparer_1__ctor_m20201_gshared (GenericEqualityComparer_1_t4910 * __this, const MethodInfo* method);
#define GenericEqualityComparer_1__ctor_m20201(__this, method) (( void (*) (GenericEqualityComparer_1_t4910 *, const MethodInfo*))GenericEqualityComparer_1__ctor_m20201_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::GetHashCode(T)
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m64387_gshared (GenericEqualityComparer_1_t4910 * __this, TimeSpan_t334  ___obj, const MethodInfo* method);
#define GenericEqualityComparer_1_GetHashCode_m64387(__this, ___obj, method) (( int32_t (*) (GenericEqualityComparer_1_t4910 *, TimeSpan_t334 , const MethodInfo*))GenericEqualityComparer_1_GetHashCode_m64387_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::Equals(T,T)
extern "C" bool GenericEqualityComparer_1_Equals_m64388_gshared (GenericEqualityComparer_1_t4910 * __this, TimeSpan_t334  ___x, TimeSpan_t334  ___y, const MethodInfo* method);
#define GenericEqualityComparer_1_Equals_m64388(__this, ___x, ___y, method) (( bool (*) (GenericEqualityComparer_1_t4910 *, TimeSpan_t334 , TimeSpan_t334 , const MethodInfo*))GenericEqualityComparer_1_Equals_m64388_gshared)(__this, ___x, ___y, method)
