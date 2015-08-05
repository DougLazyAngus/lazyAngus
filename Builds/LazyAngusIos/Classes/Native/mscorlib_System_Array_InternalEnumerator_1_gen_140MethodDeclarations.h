#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.TimeSpan>
struct InternalEnumerator_1_t8615;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Array/InternalEnumerator`1<System.TimeSpan>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m63427_gshared (InternalEnumerator_1_t8615 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m63427(__this, ___array, method) (( void (*) (InternalEnumerator_1_t8615 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m63427_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.TimeSpan>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m63428_gshared (InternalEnumerator_1_t8615 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m63428(__this, method) (( void (*) (InternalEnumerator_1_t8615 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m63428_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.TimeSpan>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m63429_gshared (InternalEnumerator_1_t8615 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m63429(__this, method) (( Object_t * (*) (InternalEnumerator_1_t8615 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m63429_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.TimeSpan>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m63430_gshared (InternalEnumerator_1_t8615 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m63430(__this, method) (( void (*) (InternalEnumerator_1_t8615 *, const MethodInfo*))InternalEnumerator_1_Dispose_m63430_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.TimeSpan>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m63431_gshared (InternalEnumerator_1_t8615 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m63431(__this, method) (( bool (*) (InternalEnumerator_1_t8615 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m63431_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.TimeSpan>::get_Current()
extern "C" TimeSpan_t334  InternalEnumerator_1_get_Current_m63432_gshared (InternalEnumerator_1_t8615 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m63432(__this, method) (( TimeSpan_t334  (*) (InternalEnumerator_1_t8615 *, const MethodInfo*))InternalEnumerator_1_get_Current_m63432_gshared)(__this, method)
