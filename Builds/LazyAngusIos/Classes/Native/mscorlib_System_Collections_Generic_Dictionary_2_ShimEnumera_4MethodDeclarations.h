#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>
struct ShimEnumerator_t6789;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t6780;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m38310_gshared (ShimEnumerator_t6789 * __this, Dictionary_2_t6780 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m38310(__this, ___host, method) (( void (*) (ShimEnumerator_t6789 *, Dictionary_2_t6780 *, const MethodInfo*))ShimEnumerator__ctor_m38310_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m38311_gshared (ShimEnumerator_t6789 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m38311(__this, method) (( bool (*) (ShimEnumerator_t6789 *, const MethodInfo*))ShimEnumerator_MoveNext_m38311_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Entry()
extern "C" DictionaryEntry_t2160  ShimEnumerator_get_Entry_m38312_gshared (ShimEnumerator_t6789 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m38312(__this, method) (( DictionaryEntry_t2160  (*) (ShimEnumerator_t6789 *, const MethodInfo*))ShimEnumerator_get_Entry_m38312_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m38313_gshared (ShimEnumerator_t6789 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m38313(__this, method) (( Object_t * (*) (ShimEnumerator_t6789 *, const MethodInfo*))ShimEnumerator_get_Key_m38313_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m38314_gshared (ShimEnumerator_t6789 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m38314(__this, method) (( Object_t * (*) (ShimEnumerator_t6789 *, const MethodInfo*))ShimEnumerator_get_Value_m38314_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m38315_gshared (ShimEnumerator_t6789 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m38315(__this, method) (( Object_t * (*) (ShimEnumerator_t6789 *, const MethodInfo*))ShimEnumerator_get_Current_m38315_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::Reset()
extern "C" void ShimEnumerator_Reset_m38316_gshared (ShimEnumerator_t6789 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m38316(__this, method) (( void (*) (ShimEnumerator_t6789 *, const MethodInfo*))ShimEnumerator_Reset_m38316_gshared)(__this, method)
