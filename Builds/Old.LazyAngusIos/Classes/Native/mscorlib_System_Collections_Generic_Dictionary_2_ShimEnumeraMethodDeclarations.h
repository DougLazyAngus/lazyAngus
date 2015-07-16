#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
struct ShimEnumerator_t3351;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t3339;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m17220_gshared (ShimEnumerator_t3351 * __this, Dictionary_2_t3339 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m17220(__this, ___host, method) (( void (*) (ShimEnumerator_t3351 *, Dictionary_2_t3339 *, const MethodInfo*))ShimEnumerator__ctor_m17220_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m17221_gshared (ShimEnumerator_t3351 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m17221(__this, method) (( bool (*) (ShimEnumerator_t3351 *, const MethodInfo*))ShimEnumerator_MoveNext_m17221_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1710  ShimEnumerator_get_Entry_m17222_gshared (ShimEnumerator_t3351 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m17222(__this, method) (( DictionaryEntry_t1710  (*) (ShimEnumerator_t3351 *, const MethodInfo*))ShimEnumerator_get_Entry_m17222_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m17223_gshared (ShimEnumerator_t3351 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m17223(__this, method) (( Object_t * (*) (ShimEnumerator_t3351 *, const MethodInfo*))ShimEnumerator_get_Key_m17223_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m17224_gshared (ShimEnumerator_t3351 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m17224(__this, method) (( Object_t * (*) (ShimEnumerator_t3351 *, const MethodInfo*))ShimEnumerator_get_Value_m17224_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m17225_gshared (ShimEnumerator_t3351 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m17225(__this, method) (( Object_t * (*) (ShimEnumerator_t3351 *, const MethodInfo*))ShimEnumerator_get_Current_m17225_gshared)(__this, method)
