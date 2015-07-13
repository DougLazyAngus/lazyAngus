﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericComparer`1<System.DateTime>
struct GenericComparer_1_t2800;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.GenericComparer`1<System.DateTime>::.ctor()
extern "C" void GenericComparer_1__ctor_m15714_gshared (GenericComparer_1_t2800 * __this, const MethodInfo* method);
#define GenericComparer_1__ctor_m15714(__this, method) (( void (*) (GenericComparer_1_t2800 *, const MethodInfo*))GenericComparer_1__ctor_m15714_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericComparer`1<System.DateTime>::Compare(T,T)
extern "C" int32_t GenericComparer_1_Compare_m28189_gshared (GenericComparer_1_t2800 * __this, DateTime_t219  ___x, DateTime_t219  ___y, const MethodInfo* method);
#define GenericComparer_1_Compare_m28189(__this, ___x, ___y, method) (( int32_t (*) (GenericComparer_1_t2800 *, DateTime_t219 , DateTime_t219 , const MethodInfo*))GenericComparer_1_Compare_m28189_gshared)(__this, ___x, ___y, method)