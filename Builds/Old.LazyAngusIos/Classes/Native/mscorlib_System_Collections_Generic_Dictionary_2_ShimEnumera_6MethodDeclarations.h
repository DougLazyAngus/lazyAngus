#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>
struct ShimEnumerator_t4060;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1645;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m27674_gshared (ShimEnumerator_t4060 * __this, Dictionary_2_t1645 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m27674(__this, ___host, method) (( void (*) (ShimEnumerator_t4060 *, Dictionary_2_t1645 *, const MethodInfo*))ShimEnumerator__ctor_m27674_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m27675_gshared (ShimEnumerator_t4060 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m27675(__this, method) (( bool (*) (ShimEnumerator_t4060 *, const MethodInfo*))ShimEnumerator_MoveNext_m27675_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t1710  ShimEnumerator_get_Entry_m27676_gshared (ShimEnumerator_t4060 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m27676(__this, method) (( DictionaryEntry_t1710  (*) (ShimEnumerator_t4060 *, const MethodInfo*))ShimEnumerator_get_Entry_m27676_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m27677_gshared (ShimEnumerator_t4060 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m27677(__this, method) (( Object_t * (*) (ShimEnumerator_t4060 *, const MethodInfo*))ShimEnumerator_get_Key_m27677_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m27678_gshared (ShimEnumerator_t4060 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m27678(__this, method) (( Object_t * (*) (ShimEnumerator_t4060 *, const MethodInfo*))ShimEnumerator_get_Value_m27678_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m27679_gshared (ShimEnumerator_t4060 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m27679(__this, method) (( Object_t * (*) (ShimEnumerator_t4060 *, const MethodInfo*))ShimEnumerator_get_Current_m27679_gshared)(__this, method)
