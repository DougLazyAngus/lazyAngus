#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>
struct ShimEnumerator_t3861;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t3849;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m25485_gshared (ShimEnumerator_t3861 * __this, Dictionary_2_t3849 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m25485(__this, ___host, method) (( void (*) (ShimEnumerator_t3861 *, Dictionary_2_t3849 *, const MethodInfo*))ShimEnumerator__ctor_m25485_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m25486_gshared (ShimEnumerator_t3861 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m25486(__this, method) (( bool (*) (ShimEnumerator_t3861 *, const MethodInfo*))ShimEnumerator_MoveNext_m25486_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Entry()
extern "C" DictionaryEntry_t1685  ShimEnumerator_get_Entry_m25487_gshared (ShimEnumerator_t3861 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m25487(__this, method) (( DictionaryEntry_t1685  (*) (ShimEnumerator_t3861 *, const MethodInfo*))ShimEnumerator_get_Entry_m25487_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m25488_gshared (ShimEnumerator_t3861 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m25488(__this, method) (( Object_t * (*) (ShimEnumerator_t3861 *, const MethodInfo*))ShimEnumerator_get_Key_m25488_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m25489_gshared (ShimEnumerator_t3861 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m25489(__this, method) (( Object_t * (*) (ShimEnumerator_t3861 *, const MethodInfo*))ShimEnumerator_get_Value_m25489_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m25490_gshared (ShimEnumerator_t3861 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m25490(__this, method) (( Object_t * (*) (ShimEnumerator_t3861 *, const MethodInfo*))ShimEnumerator_get_Current_m25490_gshared)(__this, method)
