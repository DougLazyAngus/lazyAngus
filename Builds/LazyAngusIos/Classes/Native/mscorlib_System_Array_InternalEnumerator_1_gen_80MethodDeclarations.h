#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>
struct InternalEnumerator_1_t4122;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.ArraySegment`1<System.Byte>
#include "mscorlib_System_ArraySegment_1_gen.h"

// System.Void System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m28538_gshared (InternalEnumerator_1_t4122 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m28538(__this, ___array, method) (( void (*) (InternalEnumerator_1_t4122 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m28538_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28539_gshared (InternalEnumerator_1_t4122 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28539(__this, method) (( Object_t * (*) (InternalEnumerator_1_t4122 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28539_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m28540_gshared (InternalEnumerator_1_t4122 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m28540(__this, method) (( void (*) (InternalEnumerator_1_t4122 *, const MethodInfo*))InternalEnumerator_1_Dispose_m28540_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m28541_gshared (InternalEnumerator_1_t4122 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m28541(__this, method) (( bool (*) (InternalEnumerator_1_t4122 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m28541_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>::get_Current()
extern "C" ArraySegment_1_t4121  InternalEnumerator_1_get_Current_m28542_gshared (InternalEnumerator_1_t4122 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m28542(__this, method) (( ArraySegment_1_t4121  (*) (InternalEnumerator_1_t4122 *, const MethodInfo*))InternalEnumerator_1_get_Current_m28542_gshared)(__this, method)
