#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>
struct ShimEnumerator_t3992;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t3980;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m27044_gshared (ShimEnumerator_t3992 * __this, Dictionary_2_t3980 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m27044(__this, ___host, method) (( void (*) (ShimEnumerator_t3992 *, Dictionary_2_t3980 *, const MethodInfo*))ShimEnumerator__ctor_m27044_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m27045_gshared (ShimEnumerator_t3992 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m27045(__this, method) (( bool (*) (ShimEnumerator_t3992 *, const MethodInfo*))ShimEnumerator_MoveNext_m27045_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Entry()
extern "C" DictionaryEntry_t2179  ShimEnumerator_get_Entry_m27046_gshared (ShimEnumerator_t3992 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m27046(__this, method) (( DictionaryEntry_t2179  (*) (ShimEnumerator_t3992 *, const MethodInfo*))ShimEnumerator_get_Entry_m27046_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m27047_gshared (ShimEnumerator_t3992 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m27047(__this, method) (( Object_t * (*) (ShimEnumerator_t3992 *, const MethodInfo*))ShimEnumerator_get_Key_m27047_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m27048_gshared (ShimEnumerator_t3992 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m27048(__this, method) (( Object_t * (*) (ShimEnumerator_t3992 *, const MethodInfo*))ShimEnumerator_get_Value_m27048_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m27049_gshared (ShimEnumerator_t3992 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m27049(__this, method) (( Object_t * (*) (ShimEnumerator_t3992 *, const MethodInfo*))ShimEnumerator_get_Current_m27049_gshared)(__this, method)
