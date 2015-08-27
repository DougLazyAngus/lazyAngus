#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>
struct ShimEnumerator_t7096;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Double>
struct Dictionary_2_t7087;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m45104_gshared (ShimEnumerator_t7096 * __this, Dictionary_2_t7087 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m45104(__this, ___host, method) (( void (*) (ShimEnumerator_t7096 *, Dictionary_2_t7087 *, const MethodInfo*))ShimEnumerator__ctor_m45104_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m45105_gshared (ShimEnumerator_t7096 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m45105(__this, method) (( bool (*) (ShimEnumerator_t7096 *, const MethodInfo*))ShimEnumerator_MoveNext_m45105_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::get_Entry()
extern "C" DictionaryEntry_t2140  ShimEnumerator_get_Entry_m45106_gshared (ShimEnumerator_t7096 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m45106(__this, method) (( DictionaryEntry_t2140  (*) (ShimEnumerator_t7096 *, const MethodInfo*))ShimEnumerator_get_Entry_m45106_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m45107_gshared (ShimEnumerator_t7096 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m45107(__this, method) (( Object_t * (*) (ShimEnumerator_t7096 *, const MethodInfo*))ShimEnumerator_get_Key_m45107_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m45108_gshared (ShimEnumerator_t7096 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m45108(__this, method) (( Object_t * (*) (ShimEnumerator_t7096 *, const MethodInfo*))ShimEnumerator_get_Value_m45108_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m45109_gshared (ShimEnumerator_t7096 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m45109(__this, method) (( Object_t * (*) (ShimEnumerator_t7096 *, const MethodInfo*))ShimEnumerator_get_Current_m45109_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::Reset()
extern "C" void ShimEnumerator_Reset_m45110_gshared (ShimEnumerator_t7096 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m45110(__this, method) (( void (*) (ShimEnumerator_t7096 *, const MethodInfo*))ShimEnumerator_Reset_m45110_gshared)(__this, method)
