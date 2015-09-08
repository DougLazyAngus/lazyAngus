#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>
struct ShimEnumerator_t9065;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t9054;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m66400_gshared (ShimEnumerator_t9065 * __this, Dictionary_2_t9054 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m66400(__this, ___host, method) (( void (*) (ShimEnumerator_t9065 *, Dictionary_2_t9054 *, const MethodInfo*))ShimEnumerator__ctor_m66400_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m66401_gshared (ShimEnumerator_t9065 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m66401(__this, method) (( bool (*) (ShimEnumerator_t9065 *, const MethodInfo*))ShimEnumerator_MoveNext_m66401_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Entry()
extern "C" DictionaryEntry_t2160  ShimEnumerator_get_Entry_m66402_gshared (ShimEnumerator_t9065 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m66402(__this, method) (( DictionaryEntry_t2160  (*) (ShimEnumerator_t9065 *, const MethodInfo*))ShimEnumerator_get_Entry_m66402_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m66403_gshared (ShimEnumerator_t9065 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m66403(__this, method) (( Object_t * (*) (ShimEnumerator_t9065 *, const MethodInfo*))ShimEnumerator_get_Key_m66403_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m66404_gshared (ShimEnumerator_t9065 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m66404(__this, method) (( Object_t * (*) (ShimEnumerator_t9065 *, const MethodInfo*))ShimEnumerator_get_Value_m66404_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m66405_gshared (ShimEnumerator_t9065 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m66405(__this, method) (( Object_t * (*) (ShimEnumerator_t9065 *, const MethodInfo*))ShimEnumerator_get_Current_m66405_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m66406_gshared (ShimEnumerator_t9065 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m66406(__this, method) (( void (*) (ShimEnumerator_t9065 *, const MethodInfo*))ShimEnumerator_Reset_m66406_gshared)(__this, method)
