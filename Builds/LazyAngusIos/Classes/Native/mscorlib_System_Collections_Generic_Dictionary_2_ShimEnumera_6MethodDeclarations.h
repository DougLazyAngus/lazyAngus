#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>
struct ShimEnumerator_t7661;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Double>
struct Dictionary_2_t7652;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m49703_gshared (ShimEnumerator_t7661 * __this, Dictionary_2_t7652 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m49703(__this, ___host, method) (( void (*) (ShimEnumerator_t7661 *, Dictionary_2_t7652 *, const MethodInfo*))ShimEnumerator__ctor_m49703_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m49704_gshared (ShimEnumerator_t7661 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m49704(__this, method) (( bool (*) (ShimEnumerator_t7661 *, const MethodInfo*))ShimEnumerator_MoveNext_m49704_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::get_Entry()
extern "C" DictionaryEntry_t2157  ShimEnumerator_get_Entry_m49705_gshared (ShimEnumerator_t7661 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m49705(__this, method) (( DictionaryEntry_t2157  (*) (ShimEnumerator_t7661 *, const MethodInfo*))ShimEnumerator_get_Entry_m49705_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m49706_gshared (ShimEnumerator_t7661 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m49706(__this, method) (( Object_t * (*) (ShimEnumerator_t7661 *, const MethodInfo*))ShimEnumerator_get_Key_m49706_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m49707_gshared (ShimEnumerator_t7661 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m49707(__this, method) (( Object_t * (*) (ShimEnumerator_t7661 *, const MethodInfo*))ShimEnumerator_get_Value_m49707_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m49708_gshared (ShimEnumerator_t7661 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m49708(__this, method) (( Object_t * (*) (ShimEnumerator_t7661 *, const MethodInfo*))ShimEnumerator_get_Current_m49708_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::Reset()
extern "C" void ShimEnumerator_Reset_m49709_gshared (ShimEnumerator_t7661 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m49709(__this, method) (( void (*) (ShimEnumerator_t7661 *, const MethodInfo*))ShimEnumerator_Reset_m49709_gshared)(__this, method)
