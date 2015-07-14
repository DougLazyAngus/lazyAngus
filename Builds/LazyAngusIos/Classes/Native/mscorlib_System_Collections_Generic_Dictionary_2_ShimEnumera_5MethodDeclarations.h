#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>
struct ShimEnumerator_t4037;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t4026;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m27443_gshared (ShimEnumerator_t4037 * __this, Dictionary_2_t4026 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m27443(__this, ___host, method) (( void (*) (ShimEnumerator_t4037 *, Dictionary_2_t4026 *, const MethodInfo*))ShimEnumerator__ctor_m27443_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m27444_gshared (ShimEnumerator_t4037 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m27444(__this, method) (( bool (*) (ShimEnumerator_t4037 *, const MethodInfo*))ShimEnumerator_MoveNext_m27444_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Entry()
extern "C" DictionaryEntry_t1708  ShimEnumerator_get_Entry_m27445_gshared (ShimEnumerator_t4037 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m27445(__this, method) (( DictionaryEntry_t1708  (*) (ShimEnumerator_t4037 *, const MethodInfo*))ShimEnumerator_get_Entry_m27445_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m27446_gshared (ShimEnumerator_t4037 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m27446(__this, method) (( Object_t * (*) (ShimEnumerator_t4037 *, const MethodInfo*))ShimEnumerator_get_Key_m27446_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m27447_gshared (ShimEnumerator_t4037 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m27447(__this, method) (( Object_t * (*) (ShimEnumerator_t4037 *, const MethodInfo*))ShimEnumerator_get_Value_m27447_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m27448_gshared (ShimEnumerator_t4037 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m27448(__this, method) (( Object_t * (*) (ShimEnumerator_t4037 *, const MethodInfo*))ShimEnumerator_get_Current_m27448_gshared)(__this, method)
