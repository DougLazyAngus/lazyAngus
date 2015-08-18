#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.TimeSpan>
struct InternalEnumerator_1_t8685;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Array/InternalEnumerator`1<System.TimeSpan>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m64096_gshared (InternalEnumerator_1_t8685 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m64096(__this, ___array, method) (( void (*) (InternalEnumerator_1_t8685 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m64096_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.TimeSpan>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m64097_gshared (InternalEnumerator_1_t8685 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m64097(__this, method) (( void (*) (InternalEnumerator_1_t8685 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m64097_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.TimeSpan>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m64098_gshared (InternalEnumerator_1_t8685 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m64098(__this, method) (( Object_t * (*) (InternalEnumerator_1_t8685 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m64098_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.TimeSpan>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m64099_gshared (InternalEnumerator_1_t8685 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m64099(__this, method) (( void (*) (InternalEnumerator_1_t8685 *, const MethodInfo*))InternalEnumerator_1_Dispose_m64099_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.TimeSpan>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m64100_gshared (InternalEnumerator_1_t8685 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m64100(__this, method) (( bool (*) (InternalEnumerator_1_t8685 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m64100_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.TimeSpan>::get_Current()
extern "C" TimeSpan_t334  InternalEnumerator_1_get_Current_m64101_gshared (InternalEnumerator_1_t8685 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m64101(__this, method) (( TimeSpan_t334  (*) (InternalEnumerator_1_t8685 *, const MethodInfo*))InternalEnumerator_1_get_Current_m64101_gshared)(__this, method)
