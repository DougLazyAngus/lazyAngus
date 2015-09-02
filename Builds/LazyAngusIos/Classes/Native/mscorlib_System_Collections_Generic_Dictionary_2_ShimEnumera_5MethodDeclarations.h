#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>
struct ShimEnumerator_t7105;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Single>
struct Dictionary_2_t7096;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m45165_gshared (ShimEnumerator_t7105 * __this, Dictionary_2_t7096 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m45165(__this, ___host, method) (( void (*) (ShimEnumerator_t7105 *, Dictionary_2_t7096 *, const MethodInfo*))ShimEnumerator__ctor_m45165_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m45166_gshared (ShimEnumerator_t7105 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m45166(__this, method) (( bool (*) (ShimEnumerator_t7105 *, const MethodInfo*))ShimEnumerator_MoveNext_m45166_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::get_Entry()
extern "C" DictionaryEntry_t2156  ShimEnumerator_get_Entry_m45167_gshared (ShimEnumerator_t7105 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m45167(__this, method) (( DictionaryEntry_t2156  (*) (ShimEnumerator_t7105 *, const MethodInfo*))ShimEnumerator_get_Entry_m45167_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m45168_gshared (ShimEnumerator_t7105 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m45168(__this, method) (( Object_t * (*) (ShimEnumerator_t7105 *, const MethodInfo*))ShimEnumerator_get_Key_m45168_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m45169_gshared (ShimEnumerator_t7105 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m45169(__this, method) (( Object_t * (*) (ShimEnumerator_t7105 *, const MethodInfo*))ShimEnumerator_get_Value_m45169_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m45170_gshared (ShimEnumerator_t7105 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m45170(__this, method) (( Object_t * (*) (ShimEnumerator_t7105 *, const MethodInfo*))ShimEnumerator_get_Current_m45170_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::Reset()
extern "C" void ShimEnumerator_Reset_m45171_gshared (ShimEnumerator_t7105 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m45171(__this, method) (( void (*) (ShimEnumerator_t7105 *, const MethodInfo*))ShimEnumerator_Reset_m45171_gshared)(__this, method)
