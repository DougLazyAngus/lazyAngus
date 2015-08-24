#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>
struct ShimEnumerator_t7122;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>
struct Dictionary_2_t7113;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m45455_gshared (ShimEnumerator_t7122 * __this, Dictionary_2_t7113 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m45455(__this, ___host, method) (( void (*) (ShimEnumerator_t7122 *, Dictionary_2_t7113 *, const MethodInfo*))ShimEnumerator__ctor_m45455_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m45456_gshared (ShimEnumerator_t7122 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m45456(__this, method) (( bool (*) (ShimEnumerator_t7122 *, const MethodInfo*))ShimEnumerator_MoveNext_m45456_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::get_Entry()
extern "C" DictionaryEntry_t2140  ShimEnumerator_get_Entry_m45457_gshared (ShimEnumerator_t7122 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m45457(__this, method) (( DictionaryEntry_t2140  (*) (ShimEnumerator_t7122 *, const MethodInfo*))ShimEnumerator_get_Entry_m45457_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m45458_gshared (ShimEnumerator_t7122 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m45458(__this, method) (( Object_t * (*) (ShimEnumerator_t7122 *, const MethodInfo*))ShimEnumerator_get_Key_m45458_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m45459_gshared (ShimEnumerator_t7122 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m45459(__this, method) (( Object_t * (*) (ShimEnumerator_t7122 *, const MethodInfo*))ShimEnumerator_get_Value_m45459_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m45460_gshared (ShimEnumerator_t7122 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m45460(__this, method) (( Object_t * (*) (ShimEnumerator_t7122 *, const MethodInfo*))ShimEnumerator_get_Current_m45460_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::Reset()
extern "C" void ShimEnumerator_Reset_m45461_gshared (ShimEnumerator_t7122 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m45461(__this, method) (( void (*) (ShimEnumerator_t7122 *, const MethodInfo*))ShimEnumerator_Reset_m45461_gshared)(__this, method)
