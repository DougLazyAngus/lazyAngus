﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.DateTime>
struct InternalEnumerator_1_t4102;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Array/InternalEnumerator`1<System.DateTime>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m28064_gshared (InternalEnumerator_1_t4102 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m28064(__this, ___array, method) (( void (*) (InternalEnumerator_1_t4102 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m28064_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.DateTime>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28065_gshared (InternalEnumerator_1_t4102 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28065(__this, method) (( Object_t * (*) (InternalEnumerator_1_t4102 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28065_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.DateTime>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m28066_gshared (InternalEnumerator_1_t4102 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m28066(__this, method) (( void (*) (InternalEnumerator_1_t4102 *, const MethodInfo*))InternalEnumerator_1_Dispose_m28066_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.DateTime>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m28067_gshared (InternalEnumerator_1_t4102 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m28067(__this, method) (( bool (*) (InternalEnumerator_1_t4102 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m28067_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.DateTime>::get_Current()
extern "C" DateTime_t219  InternalEnumerator_1_get_Current_m28068_gshared (InternalEnumerator_1_t4102 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m28068(__this, method) (( DateTime_t219  (*) (InternalEnumerator_1_t4102 *, const MethodInfo*))InternalEnumerator_1_get_Current_m28068_gshared)(__this, method)