#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>
struct InternalEnumerator_1_t8640;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.ArraySegment`1<System.Byte>
#include "mscorlib_System_ArraySegment_1_gen.h"

// System.Void System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m63762_gshared (InternalEnumerator_1_t8640 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m63762(__this, ___array, method) (( void (*) (InternalEnumerator_1_t8640 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m63762_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m63763_gshared (InternalEnumerator_1_t8640 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m63763(__this, method) (( void (*) (InternalEnumerator_1_t8640 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m63763_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m63764_gshared (InternalEnumerator_1_t8640 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m63764(__this, method) (( Object_t * (*) (InternalEnumerator_1_t8640 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m63764_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m63765_gshared (InternalEnumerator_1_t8640 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m63765(__this, method) (( void (*) (InternalEnumerator_1_t8640 *, const MethodInfo*))InternalEnumerator_1_Dispose_m63765_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m63766_gshared (InternalEnumerator_1_t8640 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m63766(__this, method) (( bool (*) (InternalEnumerator_1_t8640 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m63766_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>::get_Current()
extern "C" ArraySegment_1_t8639  InternalEnumerator_1_get_Current_m63767_gshared (InternalEnumerator_1_t8640 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m63767(__this, method) (( ArraySegment_1_t8639  (*) (InternalEnumerator_1_t8640 *, const MethodInfo*))InternalEnumerator_1_get_Current_m63767_gshared)(__this, method)
