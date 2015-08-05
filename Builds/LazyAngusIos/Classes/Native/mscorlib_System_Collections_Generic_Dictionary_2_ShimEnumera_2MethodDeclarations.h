#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>
struct ShimEnumerator_t5945;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Object>
struct Dictionary_2_t5936;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m30527_gshared (ShimEnumerator_t5945 * __this, Dictionary_2_t5936 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m30527(__this, ___host, method) (( void (*) (ShimEnumerator_t5945 *, Dictionary_2_t5936 *, const MethodInfo*))ShimEnumerator__ctor_m30527_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m30528_gshared (ShimEnumerator_t5945 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m30528(__this, method) (( bool (*) (ShimEnumerator_t5945 *, const MethodInfo*))ShimEnumerator_MoveNext_m30528_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::get_Entry()
extern "C" DictionaryEntry_t2089  ShimEnumerator_get_Entry_m30529_gshared (ShimEnumerator_t5945 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m30529(__this, method) (( DictionaryEntry_t2089  (*) (ShimEnumerator_t5945 *, const MethodInfo*))ShimEnumerator_get_Entry_m30529_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m30530_gshared (ShimEnumerator_t5945 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m30530(__this, method) (( Object_t * (*) (ShimEnumerator_t5945 *, const MethodInfo*))ShimEnumerator_get_Key_m30530_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m30531_gshared (ShimEnumerator_t5945 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m30531(__this, method) (( Object_t * (*) (ShimEnumerator_t5945 *, const MethodInfo*))ShimEnumerator_get_Value_m30531_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m30532_gshared (ShimEnumerator_t5945 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m30532(__this, method) (( Object_t * (*) (ShimEnumerator_t5945 *, const MethodInfo*))ShimEnumerator_get_Current_m30532_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m30533_gshared (ShimEnumerator_t5945 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m30533(__this, method) (( void (*) (ShimEnumerator_t5945 *, const MethodInfo*))ShimEnumerator_Reset_m30533_gshared)(__this, method)
