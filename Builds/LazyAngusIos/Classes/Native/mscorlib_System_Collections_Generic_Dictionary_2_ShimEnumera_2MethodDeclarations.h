#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>
struct ShimEnumerator_t5944;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Object>
struct Dictionary_2_t5935;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m30520_gshared (ShimEnumerator_t5944 * __this, Dictionary_2_t5935 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m30520(__this, ___host, method) (( void (*) (ShimEnumerator_t5944 *, Dictionary_2_t5935 *, const MethodInfo*))ShimEnumerator__ctor_m30520_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m30521_gshared (ShimEnumerator_t5944 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m30521(__this, method) (( bool (*) (ShimEnumerator_t5944 *, const MethodInfo*))ShimEnumerator_MoveNext_m30521_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::get_Entry()
extern "C" DictionaryEntry_t2088  ShimEnumerator_get_Entry_m30522_gshared (ShimEnumerator_t5944 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m30522(__this, method) (( DictionaryEntry_t2088  (*) (ShimEnumerator_t5944 *, const MethodInfo*))ShimEnumerator_get_Entry_m30522_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m30523_gshared (ShimEnumerator_t5944 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m30523(__this, method) (( Object_t * (*) (ShimEnumerator_t5944 *, const MethodInfo*))ShimEnumerator_get_Key_m30523_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m30524_gshared (ShimEnumerator_t5944 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m30524(__this, method) (( Object_t * (*) (ShimEnumerator_t5944 *, const MethodInfo*))ShimEnumerator_get_Value_m30524_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m30525_gshared (ShimEnumerator_t5944 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m30525(__this, method) (( Object_t * (*) (ShimEnumerator_t5944 *, const MethodInfo*))ShimEnumerator_get_Current_m30525_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m30526_gshared (ShimEnumerator_t5944 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m30526(__this, method) (( void (*) (ShimEnumerator_t5944 *, const MethodInfo*))ShimEnumerator_Reset_m30526_gshared)(__this, method)
