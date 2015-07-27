#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>
struct ShimEnumerator_t3993;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t3981;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m27052_gshared (ShimEnumerator_t3993 * __this, Dictionary_2_t3981 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m27052(__this, ___host, method) (( void (*) (ShimEnumerator_t3993 *, Dictionary_2_t3981 *, const MethodInfo*))ShimEnumerator__ctor_m27052_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m27053_gshared (ShimEnumerator_t3993 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m27053(__this, method) (( bool (*) (ShimEnumerator_t3993 *, const MethodInfo*))ShimEnumerator_MoveNext_m27053_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Entry()
extern "C" DictionaryEntry_t2180  ShimEnumerator_get_Entry_m27054_gshared (ShimEnumerator_t3993 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m27054(__this, method) (( DictionaryEntry_t2180  (*) (ShimEnumerator_t3993 *, const MethodInfo*))ShimEnumerator_get_Entry_m27054_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m27055_gshared (ShimEnumerator_t3993 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m27055(__this, method) (( Object_t * (*) (ShimEnumerator_t3993 *, const MethodInfo*))ShimEnumerator_get_Key_m27055_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m27056_gshared (ShimEnumerator_t3993 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m27056(__this, method) (( Object_t * (*) (ShimEnumerator_t3993 *, const MethodInfo*))ShimEnumerator_get_Value_m27056_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m27057_gshared (ShimEnumerator_t3993 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m27057(__this, method) (( Object_t * (*) (ShimEnumerator_t3993 *, const MethodInfo*))ShimEnumerator_get_Current_m27057_gshared)(__this, method)
