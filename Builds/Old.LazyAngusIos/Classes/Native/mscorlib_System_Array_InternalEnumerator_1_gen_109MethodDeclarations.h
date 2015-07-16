#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.DateTime>
struct InternalEnumerator_1_t4121;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Array/InternalEnumerator`1<System.DateTime>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m28120_gshared (InternalEnumerator_1_t4121 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m28120(__this, ___array, method) (( void (*) (InternalEnumerator_1_t4121 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m28120_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.DateTime>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28121_gshared (InternalEnumerator_1_t4121 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28121(__this, method) (( Object_t * (*) (InternalEnumerator_1_t4121 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28121_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.DateTime>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m28122_gshared (InternalEnumerator_1_t4121 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m28122(__this, method) (( void (*) (InternalEnumerator_1_t4121 *, const MethodInfo*))InternalEnumerator_1_Dispose_m28122_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.DateTime>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m28123_gshared (InternalEnumerator_1_t4121 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m28123(__this, method) (( bool (*) (InternalEnumerator_1_t4121 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m28123_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.DateTime>::get_Current()
extern "C" DateTime_t219  InternalEnumerator_1_get_Current_m28124_gshared (InternalEnumerator_1_t4121 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m28124(__this, method) (( DateTime_t219  (*) (InternalEnumerator_1_t4121 *, const MethodInfo*))InternalEnumerator_1_get_Current_m28124_gshared)(__this, method)
