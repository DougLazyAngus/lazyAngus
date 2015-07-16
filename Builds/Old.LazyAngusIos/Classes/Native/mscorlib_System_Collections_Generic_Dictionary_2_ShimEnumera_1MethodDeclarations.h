#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
struct ShimEnumerator_t3441;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t3430;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m18750_gshared (ShimEnumerator_t3441 * __this, Dictionary_2_t3430 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m18750(__this, ___host, method) (( void (*) (ShimEnumerator_t3441 *, Dictionary_2_t3430 *, const MethodInfo*))ShimEnumerator__ctor_m18750_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m18751_gshared (ShimEnumerator_t3441 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m18751(__this, method) (( bool (*) (ShimEnumerator_t3441 *, const MethodInfo*))ShimEnumerator_MoveNext_m18751_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t1710  ShimEnumerator_get_Entry_m18752_gshared (ShimEnumerator_t3441 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m18752(__this, method) (( DictionaryEntry_t1710  (*) (ShimEnumerator_t3441 *, const MethodInfo*))ShimEnumerator_get_Entry_m18752_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m18753_gshared (ShimEnumerator_t3441 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m18753(__this, method) (( Object_t * (*) (ShimEnumerator_t3441 *, const MethodInfo*))ShimEnumerator_get_Key_m18753_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m18754_gshared (ShimEnumerator_t3441 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m18754(__this, method) (( Object_t * (*) (ShimEnumerator_t3441 *, const MethodInfo*))ShimEnumerator_get_Value_m18754_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m18755_gshared (ShimEnumerator_t3441 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m18755(__this, method) (( Object_t * (*) (ShimEnumerator_t3441 *, const MethodInfo*))ShimEnumerator_get_Current_m18755_gshared)(__this, method)
