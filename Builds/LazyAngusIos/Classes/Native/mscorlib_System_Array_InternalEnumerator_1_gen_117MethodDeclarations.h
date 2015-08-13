#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>
struct InternalEnumerator_1_t8636;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.ArraySegment`1<System.Byte>
#include "mscorlib_System_ArraySegment_1_gen.h"

// System.Void System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m63674_gshared (InternalEnumerator_1_t8636 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m63674(__this, ___array, method) (( void (*) (InternalEnumerator_1_t8636 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m63674_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m63675_gshared (InternalEnumerator_1_t8636 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m63675(__this, method) (( void (*) (InternalEnumerator_1_t8636 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m63675_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m63676_gshared (InternalEnumerator_1_t8636 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m63676(__this, method) (( Object_t * (*) (InternalEnumerator_1_t8636 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m63676_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m63677_gshared (InternalEnumerator_1_t8636 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m63677(__this, method) (( void (*) (InternalEnumerator_1_t8636 *, const MethodInfo*))InternalEnumerator_1_Dispose_m63677_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m63678_gshared (InternalEnumerator_1_t8636 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m63678(__this, method) (( bool (*) (InternalEnumerator_1_t8636 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m63678_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>::get_Current()
extern "C" ArraySegment_1_t8635  InternalEnumerator_1_get_Current_m63679_gshared (InternalEnumerator_1_t8636 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m63679(__this, method) (( ArraySegment_1_t8635  (*) (InternalEnumerator_1_t8636 *, const MethodInfo*))InternalEnumerator_1_get_Current_m63679_gshared)(__this, method)
