#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>
struct ShimEnumerator_t5946;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Object>
struct Dictionary_2_t5937;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m30532_gshared (ShimEnumerator_t5946 * __this, Dictionary_2_t5937 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m30532(__this, ___host, method) (( void (*) (ShimEnumerator_t5946 *, Dictionary_2_t5937 *, const MethodInfo*))ShimEnumerator__ctor_m30532_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m30533_gshared (ShimEnumerator_t5946 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m30533(__this, method) (( bool (*) (ShimEnumerator_t5946 *, const MethodInfo*))ShimEnumerator_MoveNext_m30533_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::get_Entry()
extern "C" DictionaryEntry_t2090  ShimEnumerator_get_Entry_m30534_gshared (ShimEnumerator_t5946 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m30534(__this, method) (( DictionaryEntry_t2090  (*) (ShimEnumerator_t5946 *, const MethodInfo*))ShimEnumerator_get_Entry_m30534_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m30535_gshared (ShimEnumerator_t5946 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m30535(__this, method) (( Object_t * (*) (ShimEnumerator_t5946 *, const MethodInfo*))ShimEnumerator_get_Key_m30535_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m30536_gshared (ShimEnumerator_t5946 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m30536(__this, method) (( Object_t * (*) (ShimEnumerator_t5946 *, const MethodInfo*))ShimEnumerator_get_Value_m30536_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m30537_gshared (ShimEnumerator_t5946 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m30537(__this, method) (( Object_t * (*) (ShimEnumerator_t5946 *, const MethodInfo*))ShimEnumerator_get_Current_m30537_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m30538_gshared (ShimEnumerator_t5946 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m30538(__this, method) (( void (*) (ShimEnumerator_t5946 *, const MethodInfo*))ShimEnumerator_Reset_m30538_gshared)(__this, method)
