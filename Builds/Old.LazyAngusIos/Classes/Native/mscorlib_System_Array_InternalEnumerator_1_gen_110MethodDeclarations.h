#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.Decimal>
struct InternalEnumerator_1_t4122;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Decimal
#include "mscorlib_System_Decimal.h"

// System.Void System.Array/InternalEnumerator`1<System.Decimal>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m28125_gshared (InternalEnumerator_1_t4122 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m28125(__this, ___array, method) (( void (*) (InternalEnumerator_1_t4122 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m28125_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Decimal>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28126_gshared (InternalEnumerator_1_t4122 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28126(__this, method) (( Object_t * (*) (InternalEnumerator_1_t4122 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28126_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Decimal>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m28127_gshared (InternalEnumerator_1_t4122 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m28127(__this, method) (( void (*) (InternalEnumerator_1_t4122 *, const MethodInfo*))InternalEnumerator_1_Dispose_m28127_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Decimal>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m28128_gshared (InternalEnumerator_1_t4122 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m28128(__this, method) (( bool (*) (InternalEnumerator_1_t4122 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m28128_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Decimal>::get_Current()
extern "C" Decimal_t582  InternalEnumerator_1_get_Current_m28129_gshared (InternalEnumerator_1_t4122 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m28129(__this, method) (( Decimal_t582  (*) (InternalEnumerator_1_t4122 *, const MethodInfo*))InternalEnumerator_1_get_Current_m28129_gshared)(__this, method)
