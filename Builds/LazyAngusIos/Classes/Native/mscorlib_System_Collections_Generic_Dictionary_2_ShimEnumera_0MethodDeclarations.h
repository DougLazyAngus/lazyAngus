#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
struct ShimEnumerator_t6002;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1508;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m26327_gshared (ShimEnumerator_t6002 * __this, Dictionary_2_t1508 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m26327(__this, ___host, method) (( void (*) (ShimEnumerator_t6002 *, Dictionary_2_t1508 *, const MethodInfo*))ShimEnumerator__ctor_m26327_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m26328_gshared (ShimEnumerator_t6002 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m26328(__this, method) (( bool (*) (ShimEnumerator_t6002 *, const MethodInfo*))ShimEnumerator_MoveNext_m26328_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t2160  ShimEnumerator_get_Entry_m26329_gshared (ShimEnumerator_t6002 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m26329(__this, method) (( DictionaryEntry_t2160  (*) (ShimEnumerator_t6002 *, const MethodInfo*))ShimEnumerator_get_Entry_m26329_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m26330_gshared (ShimEnumerator_t6002 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m26330(__this, method) (( Object_t * (*) (ShimEnumerator_t6002 *, const MethodInfo*))ShimEnumerator_get_Key_m26330_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m26331_gshared (ShimEnumerator_t6002 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m26331(__this, method) (( Object_t * (*) (ShimEnumerator_t6002 *, const MethodInfo*))ShimEnumerator_get_Value_m26331_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m26332_gshared (ShimEnumerator_t6002 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m26332(__this, method) (( Object_t * (*) (ShimEnumerator_t6002 *, const MethodInfo*))ShimEnumerator_get_Current_m26332_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m26333_gshared (ShimEnumerator_t6002 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m26333(__this, method) (( void (*) (ShimEnumerator_t6002 *, const MethodInfo*))ShimEnumerator_Reset_m26333_gshared)(__this, method)
