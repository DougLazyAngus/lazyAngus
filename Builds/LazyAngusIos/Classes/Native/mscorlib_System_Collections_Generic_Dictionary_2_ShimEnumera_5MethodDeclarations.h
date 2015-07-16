#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>
struct ShimEnumerator_t4048;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t4037;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m27509_gshared (ShimEnumerator_t4048 * __this, Dictionary_2_t4037 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m27509(__this, ___host, method) (( void (*) (ShimEnumerator_t4048 *, Dictionary_2_t4037 *, const MethodInfo*))ShimEnumerator__ctor_m27509_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m27510_gshared (ShimEnumerator_t4048 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m27510(__this, method) (( bool (*) (ShimEnumerator_t4048 *, const MethodInfo*))ShimEnumerator_MoveNext_m27510_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Entry()
extern "C" DictionaryEntry_t1718  ShimEnumerator_get_Entry_m27511_gshared (ShimEnumerator_t4048 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m27511(__this, method) (( DictionaryEntry_t1718  (*) (ShimEnumerator_t4048 *, const MethodInfo*))ShimEnumerator_get_Entry_m27511_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m27512_gshared (ShimEnumerator_t4048 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m27512(__this, method) (( Object_t * (*) (ShimEnumerator_t4048 *, const MethodInfo*))ShimEnumerator_get_Key_m27512_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m27513_gshared (ShimEnumerator_t4048 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m27513(__this, method) (( Object_t * (*) (ShimEnumerator_t4048 *, const MethodInfo*))ShimEnumerator_get_Value_m27513_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m27514_gshared (ShimEnumerator_t4048 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m27514(__this, method) (( Object_t * (*) (ShimEnumerator_t4048 *, const MethodInfo*))ShimEnumerator_get_Current_m27514_gshared)(__this, method)
