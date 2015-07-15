#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>
struct ShimEnumerator_t4039;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t4028;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m27468_gshared (ShimEnumerator_t4039 * __this, Dictionary_2_t4028 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m27468(__this, ___host, method) (( void (*) (ShimEnumerator_t4039 *, Dictionary_2_t4028 *, const MethodInfo*))ShimEnumerator__ctor_m27468_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m27469_gshared (ShimEnumerator_t4039 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m27469(__this, method) (( bool (*) (ShimEnumerator_t4039 *, const MethodInfo*))ShimEnumerator_MoveNext_m27469_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Entry()
extern "C" DictionaryEntry_t1710  ShimEnumerator_get_Entry_m27470_gshared (ShimEnumerator_t4039 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m27470(__this, method) (( DictionaryEntry_t1710  (*) (ShimEnumerator_t4039 *, const MethodInfo*))ShimEnumerator_get_Entry_m27470_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m27471_gshared (ShimEnumerator_t4039 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m27471(__this, method) (( Object_t * (*) (ShimEnumerator_t4039 *, const MethodInfo*))ShimEnumerator_get_Key_m27471_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m27472_gshared (ShimEnumerator_t4039 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m27472(__this, method) (( Object_t * (*) (ShimEnumerator_t4039 *, const MethodInfo*))ShimEnumerator_get_Value_m27472_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m27473_gshared (ShimEnumerator_t4039 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m27473(__this, method) (( Object_t * (*) (ShimEnumerator_t4039 *, const MethodInfo*))ShimEnumerator_get_Current_m27473_gshared)(__this, method)
