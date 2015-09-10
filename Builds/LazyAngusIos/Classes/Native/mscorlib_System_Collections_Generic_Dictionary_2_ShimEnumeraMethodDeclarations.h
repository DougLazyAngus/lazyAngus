#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
struct ShimEnumerator_t5971;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2881;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m25713_gshared (ShimEnumerator_t5971 * __this, Dictionary_2_t2881 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m25713(__this, ___host, method) (( void (*) (ShimEnumerator_t5971 *, Dictionary_2_t2881 *, const MethodInfo*))ShimEnumerator__ctor_m25713_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m25714_gshared (ShimEnumerator_t5971 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m25714(__this, method) (( bool (*) (ShimEnumerator_t5971 *, const MethodInfo*))ShimEnumerator_MoveNext_m25714_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern "C" DictionaryEntry_t2167  ShimEnumerator_get_Entry_m25715_gshared (ShimEnumerator_t5971 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m25715(__this, method) (( DictionaryEntry_t2167  (*) (ShimEnumerator_t5971 *, const MethodInfo*))ShimEnumerator_get_Entry_m25715_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m25716_gshared (ShimEnumerator_t5971 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m25716(__this, method) (( Object_t * (*) (ShimEnumerator_t5971 *, const MethodInfo*))ShimEnumerator_get_Key_m25716_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m25717_gshared (ShimEnumerator_t5971 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m25717(__this, method) (( Object_t * (*) (ShimEnumerator_t5971 *, const MethodInfo*))ShimEnumerator_get_Value_m25717_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m25718_gshared (ShimEnumerator_t5971 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m25718(__this, method) (( Object_t * (*) (ShimEnumerator_t5971 *, const MethodInfo*))ShimEnumerator_get_Current_m25718_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m25719_gshared (ShimEnumerator_t5971 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m25719(__this, method) (( void (*) (ShimEnumerator_t5971 *, const MethodInfo*))ShimEnumerator_Reset_m25719_gshared)(__this, method)
