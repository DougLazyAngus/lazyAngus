#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>
struct ShimEnumerator_t7019;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Double>
struct Dictionary_2_t7010;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m44311_gshared (ShimEnumerator_t7019 * __this, Dictionary_2_t7010 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m44311(__this, ___host, method) (( void (*) (ShimEnumerator_t7019 *, Dictionary_2_t7010 *, const MethodInfo*))ShimEnumerator__ctor_m44311_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m44312_gshared (ShimEnumerator_t7019 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m44312(__this, method) (( bool (*) (ShimEnumerator_t7019 *, const MethodInfo*))ShimEnumerator_MoveNext_m44312_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::get_Entry()
extern "C" DictionaryEntry_t2090  ShimEnumerator_get_Entry_m44313_gshared (ShimEnumerator_t7019 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m44313(__this, method) (( DictionaryEntry_t2090  (*) (ShimEnumerator_t7019 *, const MethodInfo*))ShimEnumerator_get_Entry_m44313_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m44314_gshared (ShimEnumerator_t7019 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m44314(__this, method) (( Object_t * (*) (ShimEnumerator_t7019 *, const MethodInfo*))ShimEnumerator_get_Key_m44314_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m44315_gshared (ShimEnumerator_t7019 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m44315(__this, method) (( Object_t * (*) (ShimEnumerator_t7019 *, const MethodInfo*))ShimEnumerator_get_Value_m44315_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m44316_gshared (ShimEnumerator_t7019 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m44316(__this, method) (( Object_t * (*) (ShimEnumerator_t7019 *, const MethodInfo*))ShimEnumerator_get_Current_m44316_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::Reset()
extern "C" void ShimEnumerator_Reset_m44317_gshared (ShimEnumerator_t7019 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m44317(__this, method) (( void (*) (ShimEnumerator_t7019 *, const MethodInfo*))ShimEnumerator_Reset_m44317_gshared)(__this, method)
