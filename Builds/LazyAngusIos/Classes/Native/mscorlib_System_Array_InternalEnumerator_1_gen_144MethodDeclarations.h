#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.TimeSpan>
struct InternalEnumerator_1_t8721;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Array/InternalEnumerator`1<System.TimeSpan>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m64552_gshared (InternalEnumerator_1_t8721 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m64552(__this, ___array, method) (( void (*) (InternalEnumerator_1_t8721 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m64552_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.TimeSpan>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m64553_gshared (InternalEnumerator_1_t8721 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m64553(__this, method) (( void (*) (InternalEnumerator_1_t8721 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m64553_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.TimeSpan>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m64554_gshared (InternalEnumerator_1_t8721 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m64554(__this, method) (( Object_t * (*) (InternalEnumerator_1_t8721 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m64554_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.TimeSpan>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m64555_gshared (InternalEnumerator_1_t8721 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m64555(__this, method) (( void (*) (InternalEnumerator_1_t8721 *, const MethodInfo*))InternalEnumerator_1_Dispose_m64555_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.TimeSpan>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m64556_gshared (InternalEnumerator_1_t8721 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m64556(__this, method) (( bool (*) (InternalEnumerator_1_t8721 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m64556_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.TimeSpan>::get_Current()
extern "C" TimeSpan_t334  InternalEnumerator_1_get_Current_m64557_gshared (InternalEnumerator_1_t8721 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m64557(__this, method) (( TimeSpan_t334  (*) (InternalEnumerator_1_t8721 *, const MethodInfo*))InternalEnumerator_1_get_Current_m64557_gshared)(__this, method)
