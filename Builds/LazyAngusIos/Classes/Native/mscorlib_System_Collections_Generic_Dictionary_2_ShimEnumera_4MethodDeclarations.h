#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>
struct ShimEnumerator_t6796;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t6787;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m38367_gshared (ShimEnumerator_t6796 * __this, Dictionary_2_t6787 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m38367(__this, ___host, method) (( void (*) (ShimEnumerator_t6796 *, Dictionary_2_t6787 *, const MethodInfo*))ShimEnumerator__ctor_m38367_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m38368_gshared (ShimEnumerator_t6796 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m38368(__this, method) (( bool (*) (ShimEnumerator_t6796 *, const MethodInfo*))ShimEnumerator_MoveNext_m38368_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Entry()
extern "C" DictionaryEntry_t2167  ShimEnumerator_get_Entry_m38369_gshared (ShimEnumerator_t6796 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m38369(__this, method) (( DictionaryEntry_t2167  (*) (ShimEnumerator_t6796 *, const MethodInfo*))ShimEnumerator_get_Entry_m38369_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m38370_gshared (ShimEnumerator_t6796 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m38370(__this, method) (( Object_t * (*) (ShimEnumerator_t6796 *, const MethodInfo*))ShimEnumerator_get_Key_m38370_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m38371_gshared (ShimEnumerator_t6796 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m38371(__this, method) (( Object_t * (*) (ShimEnumerator_t6796 *, const MethodInfo*))ShimEnumerator_get_Value_m38371_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m38372_gshared (ShimEnumerator_t6796 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m38372(__this, method) (( Object_t * (*) (ShimEnumerator_t6796 *, const MethodInfo*))ShimEnumerator_get_Current_m38372_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::Reset()
extern "C" void ShimEnumerator_Reset_m38373_gshared (ShimEnumerator_t6796 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m38373(__this, method) (( void (*) (ShimEnumerator_t6796 *, const MethodInfo*))ShimEnumerator_Reset_m38373_gshared)(__this, method)
