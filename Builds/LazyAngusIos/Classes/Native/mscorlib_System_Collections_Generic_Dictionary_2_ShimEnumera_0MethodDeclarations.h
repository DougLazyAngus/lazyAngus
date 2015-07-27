#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
struct ShimEnumerator_t3445;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1229;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m18594_gshared (ShimEnumerator_t3445 * __this, Dictionary_2_t1229 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m18594(__this, ___host, method) (( void (*) (ShimEnumerator_t3445 *, Dictionary_2_t1229 *, const MethodInfo*))ShimEnumerator__ctor_m18594_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m18595_gshared (ShimEnumerator_t3445 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m18595(__this, method) (( bool (*) (ShimEnumerator_t3445 *, const MethodInfo*))ShimEnumerator_MoveNext_m18595_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern "C" DictionaryEntry_t2181  ShimEnumerator_get_Entry_m18596_gshared (ShimEnumerator_t3445 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m18596(__this, method) (( DictionaryEntry_t2181  (*) (ShimEnumerator_t3445 *, const MethodInfo*))ShimEnumerator_get_Entry_m18596_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m18597_gshared (ShimEnumerator_t3445 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m18597(__this, method) (( Object_t * (*) (ShimEnumerator_t3445 *, const MethodInfo*))ShimEnumerator_get_Key_m18597_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m18598_gshared (ShimEnumerator_t3445 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m18598(__this, method) (( Object_t * (*) (ShimEnumerator_t3445 *, const MethodInfo*))ShimEnumerator_get_Value_m18598_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m18599_gshared (ShimEnumerator_t3445 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m18599(__this, method) (( Object_t * (*) (ShimEnumerator_t3445 *, const MethodInfo*))ShimEnumerator_get_Current_m18599_gshared)(__this, method)
