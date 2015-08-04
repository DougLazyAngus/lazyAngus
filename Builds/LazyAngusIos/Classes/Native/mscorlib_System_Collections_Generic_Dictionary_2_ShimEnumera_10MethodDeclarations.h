#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>
struct ShimEnumerator_t8383;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t8374;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m60527_gshared (ShimEnumerator_t8383 * __this, Dictionary_2_t8374 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m60527(__this, ___host, method) (( void (*) (ShimEnumerator_t8383 *, Dictionary_2_t8374 *, const MethodInfo*))ShimEnumerator__ctor_m60527_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m60528_gshared (ShimEnumerator_t8383 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m60528(__this, method) (( bool (*) (ShimEnumerator_t8383 *, const MethodInfo*))ShimEnumerator_MoveNext_m60528_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Entry()
extern "C" DictionaryEntry_t2088  ShimEnumerator_get_Entry_m60529_gshared (ShimEnumerator_t8383 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m60529(__this, method) (( DictionaryEntry_t2088  (*) (ShimEnumerator_t8383 *, const MethodInfo*))ShimEnumerator_get_Entry_m60529_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m60530_gshared (ShimEnumerator_t8383 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m60530(__this, method) (( Object_t * (*) (ShimEnumerator_t8383 *, const MethodInfo*))ShimEnumerator_get_Key_m60530_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m60531_gshared (ShimEnumerator_t8383 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m60531(__this, method) (( Object_t * (*) (ShimEnumerator_t8383 *, const MethodInfo*))ShimEnumerator_get_Value_m60531_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m60532_gshared (ShimEnumerator_t8383 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m60532(__this, method) (( Object_t * (*) (ShimEnumerator_t8383 *, const MethodInfo*))ShimEnumerator_get_Current_m60532_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::Reset()
extern "C" void ShimEnumerator_Reset_m60533_gshared (ShimEnumerator_t8383 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m60533(__this, method) (( void (*) (ShimEnumerator_t8383 *, const MethodInfo*))ShimEnumerator_Reset_m60533_gshared)(__this, method)
