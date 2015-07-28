#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>
struct ShimEnumerator_t8572;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t4069;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m63174_gshared (ShimEnumerator_t8572 * __this, Dictionary_2_t4069 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m63174(__this, ___host, method) (( void (*) (ShimEnumerator_t8572 *, Dictionary_2_t4069 *, const MethodInfo*))ShimEnumerator__ctor_m63174_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m63175_gshared (ShimEnumerator_t8572 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m63175(__this, method) (( bool (*) (ShimEnumerator_t8572 *, const MethodInfo*))ShimEnumerator_MoveNext_m63175_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t2080  ShimEnumerator_get_Entry_m63176_gshared (ShimEnumerator_t8572 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m63176(__this, method) (( DictionaryEntry_t2080  (*) (ShimEnumerator_t8572 *, const MethodInfo*))ShimEnumerator_get_Entry_m63176_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m63177_gshared (ShimEnumerator_t8572 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m63177(__this, method) (( Object_t * (*) (ShimEnumerator_t8572 *, const MethodInfo*))ShimEnumerator_get_Key_m63177_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m63178_gshared (ShimEnumerator_t8572 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m63178(__this, method) (( Object_t * (*) (ShimEnumerator_t8572 *, const MethodInfo*))ShimEnumerator_get_Value_m63178_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m63179_gshared (ShimEnumerator_t8572 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m63179(__this, method) (( Object_t * (*) (ShimEnumerator_t8572 *, const MethodInfo*))ShimEnumerator_get_Current_m63179_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::Reset()
extern "C" void ShimEnumerator_Reset_m63180_gshared (ShimEnumerator_t8572 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m63180(__this, method) (( void (*) (ShimEnumerator_t8572 *, const MethodInfo*))ShimEnumerator_Reset_m63180_gshared)(__this, method)
