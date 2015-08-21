#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.TimeSpan>
struct InternalEnumerator_1_t8689;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Array/InternalEnumerator`1<System.TimeSpan>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m64188_gshared (InternalEnumerator_1_t8689 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m64188(__this, ___array, method) (( void (*) (InternalEnumerator_1_t8689 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m64188_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.TimeSpan>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m64189_gshared (InternalEnumerator_1_t8689 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m64189(__this, method) (( void (*) (InternalEnumerator_1_t8689 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m64189_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.TimeSpan>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m64190_gshared (InternalEnumerator_1_t8689 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m64190(__this, method) (( Object_t * (*) (InternalEnumerator_1_t8689 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m64190_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.TimeSpan>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m64191_gshared (InternalEnumerator_1_t8689 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m64191(__this, method) (( void (*) (InternalEnumerator_1_t8689 *, const MethodInfo*))InternalEnumerator_1_Dispose_m64191_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.TimeSpan>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m64192_gshared (InternalEnumerator_1_t8689 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m64192(__this, method) (( bool (*) (InternalEnumerator_1_t8689 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m64192_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.TimeSpan>::get_Current()
extern "C" TimeSpan_t334  InternalEnumerator_1_get_Current_m64193_gshared (InternalEnumerator_1_t8689 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m64193(__this, method) (( TimeSpan_t334  (*) (InternalEnumerator_1_t8689 *, const MethodInfo*))InternalEnumerator_1_get_Current_m64193_gshared)(__this, method)
