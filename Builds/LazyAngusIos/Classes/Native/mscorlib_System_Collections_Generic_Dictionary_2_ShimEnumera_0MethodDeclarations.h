#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
struct ShimEnumerator_t5446;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1485;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m21962_gshared (ShimEnumerator_t5446 * __this, Dictionary_2_t1485 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m21962(__this, ___host, method) (( void (*) (ShimEnumerator_t5446 *, Dictionary_2_t1485 *, const MethodInfo*))ShimEnumerator__ctor_m21962_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m21963_gshared (ShimEnumerator_t5446 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m21963(__this, method) (( bool (*) (ShimEnumerator_t5446 *, const MethodInfo*))ShimEnumerator_MoveNext_m21963_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t2137  ShimEnumerator_get_Entry_m21964_gshared (ShimEnumerator_t5446 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m21964(__this, method) (( DictionaryEntry_t2137  (*) (ShimEnumerator_t5446 *, const MethodInfo*))ShimEnumerator_get_Entry_m21964_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m21965_gshared (ShimEnumerator_t5446 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m21965(__this, method) (( Object_t * (*) (ShimEnumerator_t5446 *, const MethodInfo*))ShimEnumerator_get_Key_m21965_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m21966_gshared (ShimEnumerator_t5446 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m21966(__this, method) (( Object_t * (*) (ShimEnumerator_t5446 *, const MethodInfo*))ShimEnumerator_get_Value_m21966_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m21967_gshared (ShimEnumerator_t5446 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m21967(__this, method) (( Object_t * (*) (ShimEnumerator_t5446 *, const MethodInfo*))ShimEnumerator_get_Current_m21967_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m21968_gshared (ShimEnumerator_t5446 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m21968(__this, method) (( void (*) (ShimEnumerator_t5446 *, const MethodInfo*))ShimEnumerator_Reset_m21968_gshared)(__this, method)
