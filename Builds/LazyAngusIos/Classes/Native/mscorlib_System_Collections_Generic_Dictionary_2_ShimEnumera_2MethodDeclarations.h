#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>
struct ShimEnumerator_t3837;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t3825;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m25327_gshared (ShimEnumerator_t3837 * __this, Dictionary_2_t3825 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m25327(__this, ___host, method) (( void (*) (ShimEnumerator_t3837 *, Dictionary_2_t3825 *, const MethodInfo*))ShimEnumerator__ctor_m25327_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m25328_gshared (ShimEnumerator_t3837 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m25328(__this, method) (( bool (*) (ShimEnumerator_t3837 *, const MethodInfo*))ShimEnumerator_MoveNext_m25328_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Entry()
extern "C" DictionaryEntry_t1663  ShimEnumerator_get_Entry_m25329_gshared (ShimEnumerator_t3837 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m25329(__this, method) (( DictionaryEntry_t1663  (*) (ShimEnumerator_t3837 *, const MethodInfo*))ShimEnumerator_get_Entry_m25329_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m25330_gshared (ShimEnumerator_t3837 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m25330(__this, method) (( Object_t * (*) (ShimEnumerator_t3837 *, const MethodInfo*))ShimEnumerator_get_Key_m25330_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m25331_gshared (ShimEnumerator_t3837 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m25331(__this, method) (( Object_t * (*) (ShimEnumerator_t3837 *, const MethodInfo*))ShimEnumerator_get_Value_m25331_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m25332_gshared (ShimEnumerator_t3837 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m25332(__this, method) (( Object_t * (*) (ShimEnumerator_t3837 *, const MethodInfo*))ShimEnumerator_get_Current_m25332_gshared)(__this, method)
