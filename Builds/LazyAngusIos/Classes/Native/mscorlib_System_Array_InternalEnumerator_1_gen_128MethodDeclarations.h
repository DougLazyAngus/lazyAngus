#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>
struct InternalEnumerator_1_t8672;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Hashtable/Slot
#include "mscorlib_System_Collections_Hashtable_Slot.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m64089_gshared (InternalEnumerator_1_t8672 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m64089(__this, ___array, method) (( void (*) (InternalEnumerator_1_t8672 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m64089_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m64090_gshared (InternalEnumerator_1_t8672 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m64090(__this, method) (( void (*) (InternalEnumerator_1_t8672 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m64090_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m64091_gshared (InternalEnumerator_1_t8672 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m64091(__this, method) (( Object_t * (*) (InternalEnumerator_1_t8672 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m64091_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m64092_gshared (InternalEnumerator_1_t8672 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m64092(__this, method) (( void (*) (InternalEnumerator_1_t8672 *, const MethodInfo*))InternalEnumerator_1_Dispose_m64092_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m64093_gshared (InternalEnumerator_1_t8672 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m64093(__this, method) (( bool (*) (InternalEnumerator_1_t8672 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m64093_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::get_Current()
extern "C" Slot_t4438  InternalEnumerator_1_get_Current_m64094_gshared (InternalEnumerator_1_t8672 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m64094(__this, method) (( Slot_t4438  (*) (InternalEnumerator_1_t8672 *, const MethodInfo*))InternalEnumerator_1_get_Current_m64094_gshared)(__this, method)
