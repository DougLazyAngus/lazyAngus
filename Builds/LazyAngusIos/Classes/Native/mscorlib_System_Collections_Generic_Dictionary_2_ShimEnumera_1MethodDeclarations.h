#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
struct ShimEnumerator_t3515;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t3504;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m19815_gshared (ShimEnumerator_t3515 * __this, Dictionary_2_t3504 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m19815(__this, ___host, method) (( void (*) (ShimEnumerator_t3515 *, Dictionary_2_t3504 *, const MethodInfo*))ShimEnumerator__ctor_m19815_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m19816_gshared (ShimEnumerator_t3515 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m19816(__this, method) (( bool (*) (ShimEnumerator_t3515 *, const MethodInfo*))ShimEnumerator_MoveNext_m19816_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t2179  ShimEnumerator_get_Entry_m19817_gshared (ShimEnumerator_t3515 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m19817(__this, method) (( DictionaryEntry_t2179  (*) (ShimEnumerator_t3515 *, const MethodInfo*))ShimEnumerator_get_Entry_m19817_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m19818_gshared (ShimEnumerator_t3515 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m19818(__this, method) (( Object_t * (*) (ShimEnumerator_t3515 *, const MethodInfo*))ShimEnumerator_get_Key_m19818_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m19819_gshared (ShimEnumerator_t3515 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m19819(__this, method) (( Object_t * (*) (ShimEnumerator_t3515 *, const MethodInfo*))ShimEnumerator_get_Value_m19819_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m19820_gshared (ShimEnumerator_t3515 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m19820(__this, method) (( Object_t * (*) (ShimEnumerator_t3515 *, const MethodInfo*))ShimEnumerator_get_Current_m19820_gshared)(__this, method)
