#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>
struct ShimEnumerator_t7041;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>
struct Dictionary_2_t7032;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m44634_gshared (ShimEnumerator_t7041 * __this, Dictionary_2_t7032 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m44634(__this, ___host, method) (( void (*) (ShimEnumerator_t7041 *, Dictionary_2_t7032 *, const MethodInfo*))ShimEnumerator__ctor_m44634_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m44635_gshared (ShimEnumerator_t7041 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m44635(__this, method) (( bool (*) (ShimEnumerator_t7041 *, const MethodInfo*))ShimEnumerator_MoveNext_m44635_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::get_Entry()
extern "C" DictionaryEntry_t2086  ShimEnumerator_get_Entry_m44636_gshared (ShimEnumerator_t7041 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m44636(__this, method) (( DictionaryEntry_t2086  (*) (ShimEnumerator_t7041 *, const MethodInfo*))ShimEnumerator_get_Entry_m44636_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m44637_gshared (ShimEnumerator_t7041 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m44637(__this, method) (( Object_t * (*) (ShimEnumerator_t7041 *, const MethodInfo*))ShimEnumerator_get_Key_m44637_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m44638_gshared (ShimEnumerator_t7041 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m44638(__this, method) (( Object_t * (*) (ShimEnumerator_t7041 *, const MethodInfo*))ShimEnumerator_get_Value_m44638_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m44639_gshared (ShimEnumerator_t7041 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m44639(__this, method) (( Object_t * (*) (ShimEnumerator_t7041 *, const MethodInfo*))ShimEnumerator_get_Current_m44639_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::Reset()
extern "C" void ShimEnumerator_Reset_m44640_gshared (ShimEnumerator_t7041 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m44640(__this, method) (( void (*) (ShimEnumerator_t7041 *, const MethodInfo*))ShimEnumerator_Reset_m44640_gshared)(__this, method)
