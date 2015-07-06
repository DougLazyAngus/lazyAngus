#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
struct ShimEnumerator_t3326;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t3314;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m17040_gshared (ShimEnumerator_t3326 * __this, Dictionary_2_t3314 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m17040(__this, ___host, method) (( void (*) (ShimEnumerator_t3326 *, Dictionary_2_t3314 *, const MethodInfo*))ShimEnumerator__ctor_m17040_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m17041_gshared (ShimEnumerator_t3326 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m17041(__this, method) (( bool (*) (ShimEnumerator_t3326 *, const MethodInfo*))ShimEnumerator_MoveNext_m17041_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1685  ShimEnumerator_get_Entry_m17042_gshared (ShimEnumerator_t3326 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m17042(__this, method) (( DictionaryEntry_t1685  (*) (ShimEnumerator_t3326 *, const MethodInfo*))ShimEnumerator_get_Entry_m17042_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m17043_gshared (ShimEnumerator_t3326 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m17043(__this, method) (( Object_t * (*) (ShimEnumerator_t3326 *, const MethodInfo*))ShimEnumerator_get_Key_m17043_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m17044_gshared (ShimEnumerator_t3326 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m17044(__this, method) (( Object_t * (*) (ShimEnumerator_t3326 *, const MethodInfo*))ShimEnumerator_get_Value_m17044_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m17045_gshared (ShimEnumerator_t3326 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m17045(__this, method) (( Object_t * (*) (ShimEnumerator_t3326 *, const MethodInfo*))ShimEnumerator_get_Current_m17045_gshared)(__this, method)
