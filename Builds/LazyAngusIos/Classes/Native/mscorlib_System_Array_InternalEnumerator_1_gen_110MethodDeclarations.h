#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.TimeSpan>
struct InternalEnumerator_1_t4080;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Array/InternalEnumerator`1<System.TimeSpan>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m27916_gshared (InternalEnumerator_1_t4080 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m27916(__this, ___array, method) (( void (*) (InternalEnumerator_1_t4080 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m27916_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.TimeSpan>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m27917_gshared (InternalEnumerator_1_t4080 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m27917(__this, method) (( Object_t * (*) (InternalEnumerator_1_t4080 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m27917_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.TimeSpan>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m27918_gshared (InternalEnumerator_1_t4080 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m27918(__this, method) (( void (*) (InternalEnumerator_1_t4080 *, const MethodInfo*))InternalEnumerator_1_Dispose_m27918_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.TimeSpan>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m27919_gshared (InternalEnumerator_1_t4080 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m27919(__this, method) (( bool (*) (InternalEnumerator_1_t4080 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m27919_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.TimeSpan>::get_Current()
extern "C" TimeSpan_t266  InternalEnumerator_1_get_Current_m27920_gshared (InternalEnumerator_1_t4080 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m27920(__this, method) (( TimeSpan_t266  (*) (InternalEnumerator_1_t4080 *, const MethodInfo*))InternalEnumerator_1_get_Current_m27920_gshared)(__this, method)
