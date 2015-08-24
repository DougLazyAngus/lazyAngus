#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>
struct ShimEnumerator_t8660;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t4125;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m64042_gshared (ShimEnumerator_t8660 * __this, Dictionary_2_t4125 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m64042(__this, ___host, method) (( void (*) (ShimEnumerator_t8660 *, Dictionary_2_t4125 *, const MethodInfo*))ShimEnumerator__ctor_m64042_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m64043_gshared (ShimEnumerator_t8660 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m64043(__this, method) (( bool (*) (ShimEnumerator_t8660 *, const MethodInfo*))ShimEnumerator_MoveNext_m64043_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t2140  ShimEnumerator_get_Entry_m64044_gshared (ShimEnumerator_t8660 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m64044(__this, method) (( DictionaryEntry_t2140  (*) (ShimEnumerator_t8660 *, const MethodInfo*))ShimEnumerator_get_Entry_m64044_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m64045_gshared (ShimEnumerator_t8660 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m64045(__this, method) (( Object_t * (*) (ShimEnumerator_t8660 *, const MethodInfo*))ShimEnumerator_get_Key_m64045_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m64046_gshared (ShimEnumerator_t8660 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m64046(__this, method) (( Object_t * (*) (ShimEnumerator_t8660 *, const MethodInfo*))ShimEnumerator_get_Value_m64046_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m64047_gshared (ShimEnumerator_t8660 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m64047(__this, method) (( Object_t * (*) (ShimEnumerator_t8660 *, const MethodInfo*))ShimEnumerator_get_Current_m64047_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::Reset()
extern "C" void ShimEnumerator_Reset_m64048_gshared (ShimEnumerator_t8660 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m64048(__this, method) (( void (*) (ShimEnumerator_t8660 *, const MethodInfo*))ShimEnumerator_Reset_m64048_gshared)(__this, method)
