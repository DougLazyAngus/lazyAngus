#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
struct ShimEnumerator_t5404;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1438;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m21731_gshared (ShimEnumerator_t5404 * __this, Dictionary_2_t1438 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m21731(__this, ___host, method) (( void (*) (ShimEnumerator_t5404 *, Dictionary_2_t1438 *, const MethodInfo*))ShimEnumerator__ctor_m21731_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m21732_gshared (ShimEnumerator_t5404 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m21732(__this, method) (( bool (*) (ShimEnumerator_t5404 *, const MethodInfo*))ShimEnumerator_MoveNext_m21732_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t2090  ShimEnumerator_get_Entry_m21733_gshared (ShimEnumerator_t5404 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m21733(__this, method) (( DictionaryEntry_t2090  (*) (ShimEnumerator_t5404 *, const MethodInfo*))ShimEnumerator_get_Entry_m21733_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m21734_gshared (ShimEnumerator_t5404 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m21734(__this, method) (( Object_t * (*) (ShimEnumerator_t5404 *, const MethodInfo*))ShimEnumerator_get_Key_m21734_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m21735_gshared (ShimEnumerator_t5404 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m21735(__this, method) (( Object_t * (*) (ShimEnumerator_t5404 *, const MethodInfo*))ShimEnumerator_get_Value_m21735_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m21736_gshared (ShimEnumerator_t5404 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m21736(__this, method) (( Object_t * (*) (ShimEnumerator_t5404 *, const MethodInfo*))ShimEnumerator_get_Current_m21736_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m21737_gshared (ShimEnumerator_t5404 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m21737(__this, method) (( void (*) (ShimEnumerator_t5404 *, const MethodInfo*))ShimEnumerator_Reset_m21737_gshared)(__this, method)
