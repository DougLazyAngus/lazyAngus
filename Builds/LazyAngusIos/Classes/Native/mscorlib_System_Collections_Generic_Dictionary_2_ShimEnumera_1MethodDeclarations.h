#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
struct ShimEnumerator_t5543;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t5532;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m23956_gshared (ShimEnumerator_t5543 * __this, Dictionary_2_t5532 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m23956(__this, ___host, method) (( void (*) (ShimEnumerator_t5543 *, Dictionary_2_t5532 *, const MethodInfo*))ShimEnumerator__ctor_m23956_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m23957_gshared (ShimEnumerator_t5543 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m23957(__this, method) (( bool (*) (ShimEnumerator_t5543 *, const MethodInfo*))ShimEnumerator_MoveNext_m23957_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t2140  ShimEnumerator_get_Entry_m23958_gshared (ShimEnumerator_t5543 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m23958(__this, method) (( DictionaryEntry_t2140  (*) (ShimEnumerator_t5543 *, const MethodInfo*))ShimEnumerator_get_Entry_m23958_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m23959_gshared (ShimEnumerator_t5543 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m23959(__this, method) (( Object_t * (*) (ShimEnumerator_t5543 *, const MethodInfo*))ShimEnumerator_get_Key_m23959_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m23960_gshared (ShimEnumerator_t5543 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m23960(__this, method) (( Object_t * (*) (ShimEnumerator_t5543 *, const MethodInfo*))ShimEnumerator_get_Value_m23960_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m23961_gshared (ShimEnumerator_t5543 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m23961(__this, method) (( Object_t * (*) (ShimEnumerator_t5543 *, const MethodInfo*))ShimEnumerator_get_Current_m23961_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::Reset()
extern "C" void ShimEnumerator_Reset_m23962_gshared (ShimEnumerator_t5543 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m23962(__this, method) (( void (*) (ShimEnumerator_t5543 *, const MethodInfo*))ShimEnumerator_Reset_m23962_gshared)(__this, method)
