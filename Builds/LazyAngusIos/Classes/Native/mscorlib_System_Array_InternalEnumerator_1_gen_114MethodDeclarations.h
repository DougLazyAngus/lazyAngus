#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>
struct InternalEnumerator_1_t8566;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.ArraySegment`1<System.Byte>
#include "mscorlib_System_ArraySegment_1_gen.h"

// System.Void System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m63002_gshared (InternalEnumerator_1_t8566 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m63002(__this, ___array, method) (( void (*) (InternalEnumerator_1_t8566 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m63002_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m63003_gshared (InternalEnumerator_1_t8566 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m63003(__this, method) (( void (*) (InternalEnumerator_1_t8566 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m63003_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m63004_gshared (InternalEnumerator_1_t8566 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m63004(__this, method) (( Object_t * (*) (InternalEnumerator_1_t8566 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m63004_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m63005_gshared (InternalEnumerator_1_t8566 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m63005(__this, method) (( void (*) (InternalEnumerator_1_t8566 *, const MethodInfo*))InternalEnumerator_1_Dispose_m63005_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m63006_gshared (InternalEnumerator_1_t8566 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m63006(__this, method) (( bool (*) (InternalEnumerator_1_t8566 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m63006_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>::get_Current()
extern "C" ArraySegment_1_t8565  InternalEnumerator_1_get_Current_m63007_gshared (InternalEnumerator_1_t8566 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m63007(__this, method) (( ArraySegment_1_t8565  (*) (InternalEnumerator_1_t8566 *, const MethodInfo*))InternalEnumerator_1_get_Current_m63007_gshared)(__this, method)
