#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>
struct ShimEnumerator_t3916;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t3904;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m25956_gshared (ShimEnumerator_t3916 * __this, Dictionary_2_t3904 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m25956(__this, ___host, method) (( void (*) (ShimEnumerator_t3916 *, Dictionary_2_t3904 *, const MethodInfo*))ShimEnumerator__ctor_m25956_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m25957_gshared (ShimEnumerator_t3916 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m25957(__this, method) (( bool (*) (ShimEnumerator_t3916 *, const MethodInfo*))ShimEnumerator_MoveNext_m25957_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1708  ShimEnumerator_get_Entry_m25958_gshared (ShimEnumerator_t3916 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m25958(__this, method) (( DictionaryEntry_t1708  (*) (ShimEnumerator_t3916 *, const MethodInfo*))ShimEnumerator_get_Entry_m25958_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m25959_gshared (ShimEnumerator_t3916 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m25959(__this, method) (( Object_t * (*) (ShimEnumerator_t3916 *, const MethodInfo*))ShimEnumerator_get_Key_m25959_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m25960_gshared (ShimEnumerator_t3916 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m25960(__this, method) (( Object_t * (*) (ShimEnumerator_t3916 *, const MethodInfo*))ShimEnumerator_get_Value_m25960_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m25961_gshared (ShimEnumerator_t3916 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m25961(__this, method) (( Object_t * (*) (ShimEnumerator_t3916 *, const MethodInfo*))ShimEnumerator_get_Current_m25961_gshared)(__this, method)
