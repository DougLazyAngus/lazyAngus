#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>
struct ShimEnumerator_t3927;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t3915;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m26022_gshared (ShimEnumerator_t3927 * __this, Dictionary_2_t3915 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m26022(__this, ___host, method) (( void (*) (ShimEnumerator_t3927 *, Dictionary_2_t3915 *, const MethodInfo*))ShimEnumerator__ctor_m26022_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m26023_gshared (ShimEnumerator_t3927 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m26023(__this, method) (( bool (*) (ShimEnumerator_t3927 *, const MethodInfo*))ShimEnumerator_MoveNext_m26023_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1718  ShimEnumerator_get_Entry_m26024_gshared (ShimEnumerator_t3927 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m26024(__this, method) (( DictionaryEntry_t1718  (*) (ShimEnumerator_t3927 *, const MethodInfo*))ShimEnumerator_get_Entry_m26024_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m26025_gshared (ShimEnumerator_t3927 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m26025(__this, method) (( Object_t * (*) (ShimEnumerator_t3927 *, const MethodInfo*))ShimEnumerator_get_Key_m26025_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m26026_gshared (ShimEnumerator_t3927 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m26026(__this, method) (( Object_t * (*) (ShimEnumerator_t3927 *, const MethodInfo*))ShimEnumerator_get_Value_m26026_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m26027_gshared (ShimEnumerator_t3927 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m26027(__this, method) (( Object_t * (*) (ShimEnumerator_t3927 *, const MethodInfo*))ShimEnumerator_get_Current_m26027_gshared)(__this, method)
