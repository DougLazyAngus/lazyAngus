#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>
struct InternalEnumerator_1_t3978;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.ArraySegment`1<System.Byte>
#include "mscorlib_System_ArraySegment_1_gen.h"

// System.Void System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m26979_gshared (InternalEnumerator_1_t3978 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m26979(__this, ___array, method) (( void (*) (InternalEnumerator_1_t3978 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m26979_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26980_gshared (InternalEnumerator_1_t3978 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26980(__this, method) (( Object_t * (*) (InternalEnumerator_1_t3978 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26980_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m26981_gshared (InternalEnumerator_1_t3978 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m26981(__this, method) (( void (*) (InternalEnumerator_1_t3978 *, const MethodInfo*))InternalEnumerator_1_Dispose_m26981_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m26982_gshared (InternalEnumerator_1_t3978 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m26982(__this, method) (( bool (*) (InternalEnumerator_1_t3978 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m26982_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>::get_Current()
extern "C" ArraySegment_1_t3977  InternalEnumerator_1_get_Current_m26983_gshared (InternalEnumerator_1_t3978 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m26983(__this, method) (( ArraySegment_1_t3977  (*) (InternalEnumerator_1_t3978 *, const MethodInfo*))InternalEnumerator_1_get_Current_m26983_gshared)(__this, method)
