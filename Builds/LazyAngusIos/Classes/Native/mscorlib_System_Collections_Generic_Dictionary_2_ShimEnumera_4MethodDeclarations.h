#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>
struct ShimEnumerator_t6132;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t6123;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m32845_gshared (ShimEnumerator_t6132 * __this, Dictionary_2_t6123 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m32845(__this, ___host, method) (( void (*) (ShimEnumerator_t6132 *, Dictionary_2_t6123 *, const MethodInfo*))ShimEnumerator__ctor_m32845_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m32846_gshared (ShimEnumerator_t6132 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m32846(__this, method) (( bool (*) (ShimEnumerator_t6132 *, const MethodInfo*))ShimEnumerator_MoveNext_m32846_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Entry()
extern "C" DictionaryEntry_t2079  ShimEnumerator_get_Entry_m32847_gshared (ShimEnumerator_t6132 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m32847(__this, method) (( DictionaryEntry_t2079  (*) (ShimEnumerator_t6132 *, const MethodInfo*))ShimEnumerator_get_Entry_m32847_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m32848_gshared (ShimEnumerator_t6132 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m32848(__this, method) (( Object_t * (*) (ShimEnumerator_t6132 *, const MethodInfo*))ShimEnumerator_get_Key_m32848_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m32849_gshared (ShimEnumerator_t6132 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m32849(__this, method) (( Object_t * (*) (ShimEnumerator_t6132 *, const MethodInfo*))ShimEnumerator_get_Value_m32849_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m32850_gshared (ShimEnumerator_t6132 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m32850(__this, method) (( Object_t * (*) (ShimEnumerator_t6132 *, const MethodInfo*))ShimEnumerator_get_Current_m32850_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::Reset()
extern "C" void ShimEnumerator_Reset_m32851_gshared (ShimEnumerator_t6132 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m32851(__this, method) (( void (*) (ShimEnumerator_t6132 *, const MethodInfo*))ShimEnumerator_Reset_m32851_gshared)(__this, method)
