#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>
struct ShimEnumerator_t7043;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>
struct Dictionary_2_t7034;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m44650_gshared (ShimEnumerator_t7043 * __this, Dictionary_2_t7034 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m44650(__this, ___host, method) (( void (*) (ShimEnumerator_t7043 *, Dictionary_2_t7034 *, const MethodInfo*))ShimEnumerator__ctor_m44650_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m44651_gshared (ShimEnumerator_t7043 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m44651(__this, method) (( bool (*) (ShimEnumerator_t7043 *, const MethodInfo*))ShimEnumerator_MoveNext_m44651_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::get_Entry()
extern "C" DictionaryEntry_t2088  ShimEnumerator_get_Entry_m44652_gshared (ShimEnumerator_t7043 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m44652(__this, method) (( DictionaryEntry_t2088  (*) (ShimEnumerator_t7043 *, const MethodInfo*))ShimEnumerator_get_Entry_m44652_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m44653_gshared (ShimEnumerator_t7043 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m44653(__this, method) (( Object_t * (*) (ShimEnumerator_t7043 *, const MethodInfo*))ShimEnumerator_get_Key_m44653_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m44654_gshared (ShimEnumerator_t7043 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m44654(__this, method) (( Object_t * (*) (ShimEnumerator_t7043 *, const MethodInfo*))ShimEnumerator_get_Value_m44654_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m44655_gshared (ShimEnumerator_t7043 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m44655(__this, method) (( Object_t * (*) (ShimEnumerator_t7043 *, const MethodInfo*))ShimEnumerator_get_Current_m44655_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::Reset()
extern "C" void ShimEnumerator_Reset_m44656_gshared (ShimEnumerator_t7043 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m44656(__this, method) (( void (*) (ShimEnumerator_t7043 *, const MethodInfo*))ShimEnumerator_Reset_m44656_gshared)(__this, method)
