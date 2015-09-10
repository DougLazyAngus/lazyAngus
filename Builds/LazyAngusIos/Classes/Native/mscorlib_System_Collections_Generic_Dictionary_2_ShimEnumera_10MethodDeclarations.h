#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>
struct ShimEnumerator_t9039;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t9030;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m66013_gshared (ShimEnumerator_t9039 * __this, Dictionary_2_t9030 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m66013(__this, ___host, method) (( void (*) (ShimEnumerator_t9039 *, Dictionary_2_t9030 *, const MethodInfo*))ShimEnumerator__ctor_m66013_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m66014_gshared (ShimEnumerator_t9039 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m66014(__this, method) (( bool (*) (ShimEnumerator_t9039 *, const MethodInfo*))ShimEnumerator_MoveNext_m66014_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Entry()
extern "C" DictionaryEntry_t2167  ShimEnumerator_get_Entry_m66015_gshared (ShimEnumerator_t9039 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m66015(__this, method) (( DictionaryEntry_t2167  (*) (ShimEnumerator_t9039 *, const MethodInfo*))ShimEnumerator_get_Entry_m66015_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m66016_gshared (ShimEnumerator_t9039 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m66016(__this, method) (( Object_t * (*) (ShimEnumerator_t9039 *, const MethodInfo*))ShimEnumerator_get_Key_m66016_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m66017_gshared (ShimEnumerator_t9039 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m66017(__this, method) (( Object_t * (*) (ShimEnumerator_t9039 *, const MethodInfo*))ShimEnumerator_get_Value_m66017_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m66018_gshared (ShimEnumerator_t9039 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m66018(__this, method) (( Object_t * (*) (ShimEnumerator_t9039 *, const MethodInfo*))ShimEnumerator_get_Current_m66018_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::Reset()
extern "C" void ShimEnumerator_Reset_m66019_gshared (ShimEnumerator_t9039 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m66019(__this, method) (( void (*) (ShimEnumerator_t9039 *, const MethodInfo*))ShimEnumerator_Reset_m66019_gshared)(__this, method)
