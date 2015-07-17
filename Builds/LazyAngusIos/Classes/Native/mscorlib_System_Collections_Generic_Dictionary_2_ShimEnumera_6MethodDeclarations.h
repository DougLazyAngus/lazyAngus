#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>
struct ShimEnumerator_t4160;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t2115;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m29014_gshared (ShimEnumerator_t4160 * __this, Dictionary_2_t2115 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m29014(__this, ___host, method) (( void (*) (ShimEnumerator_t4160 *, Dictionary_2_t2115 *, const MethodInfo*))ShimEnumerator__ctor_m29014_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m29015_gshared (ShimEnumerator_t4160 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m29015(__this, method) (( bool (*) (ShimEnumerator_t4160 *, const MethodInfo*))ShimEnumerator_MoveNext_m29015_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t2179  ShimEnumerator_get_Entry_m29016_gshared (ShimEnumerator_t4160 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m29016(__this, method) (( DictionaryEntry_t2179  (*) (ShimEnumerator_t4160 *, const MethodInfo*))ShimEnumerator_get_Entry_m29016_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m29017_gshared (ShimEnumerator_t4160 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m29017(__this, method) (( Object_t * (*) (ShimEnumerator_t4160 *, const MethodInfo*))ShimEnumerator_get_Key_m29017_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m29018_gshared (ShimEnumerator_t4160 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m29018(__this, method) (( Object_t * (*) (ShimEnumerator_t4160 *, const MethodInfo*))ShimEnumerator_get_Value_m29018_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m29019_gshared (ShimEnumerator_t4160 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m29019(__this, method) (( Object_t * (*) (ShimEnumerator_t4160 *, const MethodInfo*))ShimEnumerator_get_Current_m29019_gshared)(__this, method)
