#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>
struct ShimEnumerator_t8381;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t8372;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m60511_gshared (ShimEnumerator_t8381 * __this, Dictionary_2_t8372 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m60511(__this, ___host, method) (( void (*) (ShimEnumerator_t8381 *, Dictionary_2_t8372 *, const MethodInfo*))ShimEnumerator__ctor_m60511_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m60512_gshared (ShimEnumerator_t8381 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m60512(__this, method) (( bool (*) (ShimEnumerator_t8381 *, const MethodInfo*))ShimEnumerator_MoveNext_m60512_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Entry()
extern "C" DictionaryEntry_t2086  ShimEnumerator_get_Entry_m60513_gshared (ShimEnumerator_t8381 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m60513(__this, method) (( DictionaryEntry_t2086  (*) (ShimEnumerator_t8381 *, const MethodInfo*))ShimEnumerator_get_Entry_m60513_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m60514_gshared (ShimEnumerator_t8381 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m60514(__this, method) (( Object_t * (*) (ShimEnumerator_t8381 *, const MethodInfo*))ShimEnumerator_get_Key_m60514_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m60515_gshared (ShimEnumerator_t8381 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m60515(__this, method) (( Object_t * (*) (ShimEnumerator_t8381 *, const MethodInfo*))ShimEnumerator_get_Value_m60515_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m60516_gshared (ShimEnumerator_t8381 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m60516(__this, method) (( Object_t * (*) (ShimEnumerator_t8381 *, const MethodInfo*))ShimEnumerator_get_Current_m60516_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::Reset()
extern "C" void ShimEnumerator_Reset_m60517_gshared (ShimEnumerator_t8381 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m60517(__this, method) (( void (*) (ShimEnumerator_t8381 *, const MethodInfo*))ShimEnumerator_Reset_m60517_gshared)(__this, method)
