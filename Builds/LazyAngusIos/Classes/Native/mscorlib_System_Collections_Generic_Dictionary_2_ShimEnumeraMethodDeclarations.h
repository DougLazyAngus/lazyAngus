#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
struct ShimEnumerator_t5355;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2795;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m20984_gshared (ShimEnumerator_t5355 * __this, Dictionary_2_t2795 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m20984(__this, ___host, method) (( void (*) (ShimEnumerator_t5355 *, Dictionary_2_t2795 *, const MethodInfo*))ShimEnumerator__ctor_m20984_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m20985_gshared (ShimEnumerator_t5355 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m20985(__this, method) (( bool (*) (ShimEnumerator_t5355 *, const MethodInfo*))ShimEnumerator_MoveNext_m20985_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern "C" DictionaryEntry_t2080  ShimEnumerator_get_Entry_m20986_gshared (ShimEnumerator_t5355 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m20986(__this, method) (( DictionaryEntry_t2080  (*) (ShimEnumerator_t5355 *, const MethodInfo*))ShimEnumerator_get_Entry_m20986_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m20987_gshared (ShimEnumerator_t5355 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m20987(__this, method) (( Object_t * (*) (ShimEnumerator_t5355 *, const MethodInfo*))ShimEnumerator_get_Key_m20987_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m20988_gshared (ShimEnumerator_t5355 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m20988(__this, method) (( Object_t * (*) (ShimEnumerator_t5355 *, const MethodInfo*))ShimEnumerator_get_Value_m20988_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m20989_gshared (ShimEnumerator_t5355 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m20989(__this, method) (( Object_t * (*) (ShimEnumerator_t5355 *, const MethodInfo*))ShimEnumerator_get_Current_m20989_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m20990_gshared (ShimEnumerator_t5355 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m20990(__this, method) (( void (*) (ShimEnumerator_t5355 *, const MethodInfo*))ShimEnumerator_Reset_m20990_gshared)(__this, method)
