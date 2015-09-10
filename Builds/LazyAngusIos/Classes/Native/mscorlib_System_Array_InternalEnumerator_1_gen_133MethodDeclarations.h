#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>
struct InternalEnumerator_1_t9257;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.ArraySegment`1<System.Byte>
#include "mscorlib_System_ArraySegment_1_gen.h"

// System.Void System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m69013_gshared (InternalEnumerator_1_t9257 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m69013(__this, ___array, method) (( void (*) (InternalEnumerator_1_t9257 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m69013_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m69014_gshared (InternalEnumerator_1_t9257 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m69014(__this, method) (( void (*) (InternalEnumerator_1_t9257 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m69014_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m69015_gshared (InternalEnumerator_1_t9257 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m69015(__this, method) (( Object_t * (*) (InternalEnumerator_1_t9257 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m69015_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m69016_gshared (InternalEnumerator_1_t9257 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m69016(__this, method) (( void (*) (InternalEnumerator_1_t9257 *, const MethodInfo*))InternalEnumerator_1_Dispose_m69016_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m69017_gshared (InternalEnumerator_1_t9257 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m69017(__this, method) (( bool (*) (InternalEnumerator_1_t9257 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m69017_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>::get_Current()
extern "C" ArraySegment_1_t9256  InternalEnumerator_1_get_Current_m69018_gshared (InternalEnumerator_1_t9257 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m69018(__this, method) (( ArraySegment_1_t9256  (*) (InternalEnumerator_1_t9257 *, const MethodInfo*))InternalEnumerator_1_get_Current_m69018_gshared)(__this, method)
