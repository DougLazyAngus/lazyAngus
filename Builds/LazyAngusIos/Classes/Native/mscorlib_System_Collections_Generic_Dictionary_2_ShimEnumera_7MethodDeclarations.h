#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>
struct ShimEnumerator_t7044;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>
struct Dictionary_2_t7035;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m44657_gshared (ShimEnumerator_t7044 * __this, Dictionary_2_t7035 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m44657(__this, ___host, method) (( void (*) (ShimEnumerator_t7044 *, Dictionary_2_t7035 *, const MethodInfo*))ShimEnumerator__ctor_m44657_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m44658_gshared (ShimEnumerator_t7044 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m44658(__this, method) (( bool (*) (ShimEnumerator_t7044 *, const MethodInfo*))ShimEnumerator_MoveNext_m44658_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::get_Entry()
extern "C" DictionaryEntry_t2089  ShimEnumerator_get_Entry_m44659_gshared (ShimEnumerator_t7044 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m44659(__this, method) (( DictionaryEntry_t2089  (*) (ShimEnumerator_t7044 *, const MethodInfo*))ShimEnumerator_get_Entry_m44659_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m44660_gshared (ShimEnumerator_t7044 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m44660(__this, method) (( Object_t * (*) (ShimEnumerator_t7044 *, const MethodInfo*))ShimEnumerator_get_Key_m44660_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m44661_gshared (ShimEnumerator_t7044 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m44661(__this, method) (( Object_t * (*) (ShimEnumerator_t7044 *, const MethodInfo*))ShimEnumerator_get_Value_m44661_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m44662_gshared (ShimEnumerator_t7044 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m44662(__this, method) (( Object_t * (*) (ShimEnumerator_t7044 *, const MethodInfo*))ShimEnumerator_get_Current_m44662_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::Reset()
extern "C" void ShimEnumerator_Reset_m44663_gshared (ShimEnumerator_t7044 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m44663(__this, method) (( void (*) (ShimEnumerator_t7044 *, const MethodInfo*))ShimEnumerator_Reset_m44663_gshared)(__this, method)
