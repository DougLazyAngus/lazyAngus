#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
struct ShimEnumerator_t3400;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1183;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m18042_gshared (ShimEnumerator_t3400 * __this, Dictionary_2_t1183 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m18042(__this, ___host, method) (( void (*) (ShimEnumerator_t3400 *, Dictionary_2_t1183 *, const MethodInfo*))ShimEnumerator__ctor_m18042_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m18043_gshared (ShimEnumerator_t3400 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m18043(__this, method) (( bool (*) (ShimEnumerator_t3400 *, const MethodInfo*))ShimEnumerator_MoveNext_m18043_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1718  ShimEnumerator_get_Entry_m18044_gshared (ShimEnumerator_t3400 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m18044(__this, method) (( DictionaryEntry_t1718  (*) (ShimEnumerator_t3400 *, const MethodInfo*))ShimEnumerator_get_Entry_m18044_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m18045_gshared (ShimEnumerator_t3400 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m18045(__this, method) (( Object_t * (*) (ShimEnumerator_t3400 *, const MethodInfo*))ShimEnumerator_get_Key_m18045_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m18046_gshared (ShimEnumerator_t3400 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m18046(__this, method) (( Object_t * (*) (ShimEnumerator_t3400 *, const MethodInfo*))ShimEnumerator_get_Value_m18046_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m18047_gshared (ShimEnumerator_t3400 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m18047(__this, method) (( Object_t * (*) (ShimEnumerator_t3400 *, const MethodInfo*))ShimEnumerator_get_Current_m18047_gshared)(__this, method)
