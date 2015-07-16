#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
struct ShimEnumerator_t3359;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t3347;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m17256_gshared (ShimEnumerator_t3359 * __this, Dictionary_2_t3347 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m17256(__this, ___host, method) (( void (*) (ShimEnumerator_t3359 *, Dictionary_2_t3347 *, const MethodInfo*))ShimEnumerator__ctor_m17256_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m17257_gshared (ShimEnumerator_t3359 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m17257(__this, method) (( bool (*) (ShimEnumerator_t3359 *, const MethodInfo*))ShimEnumerator_MoveNext_m17257_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1718  ShimEnumerator_get_Entry_m17258_gshared (ShimEnumerator_t3359 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m17258(__this, method) (( DictionaryEntry_t1718  (*) (ShimEnumerator_t3359 *, const MethodInfo*))ShimEnumerator_get_Entry_m17258_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m17259_gshared (ShimEnumerator_t3359 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m17259(__this, method) (( Object_t * (*) (ShimEnumerator_t3359 *, const MethodInfo*))ShimEnumerator_get_Key_m17259_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m17260_gshared (ShimEnumerator_t3359 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m17260(__this, method) (( Object_t * (*) (ShimEnumerator_t3359 *, const MethodInfo*))ShimEnumerator_get_Value_m17260_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m17261_gshared (ShimEnumerator_t3359 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m17261(__this, method) (( Object_t * (*) (ShimEnumerator_t3359 *, const MethodInfo*))ShimEnumerator_get_Current_m17261_gshared)(__this, method)
