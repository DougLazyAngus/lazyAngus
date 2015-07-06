#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>
struct ShimEnumerator_t4020;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t4009;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m27412_gshared (ShimEnumerator_t4020 * __this, Dictionary_2_t4009 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m27412(__this, ___host, method) (( void (*) (ShimEnumerator_t4020 *, Dictionary_2_t4009 *, const MethodInfo*))ShimEnumerator__ctor_m27412_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m27413_gshared (ShimEnumerator_t4020 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m27413(__this, method) (( bool (*) (ShimEnumerator_t4020 *, const MethodInfo*))ShimEnumerator_MoveNext_m27413_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Entry()
extern "C" DictionaryEntry_t1685  ShimEnumerator_get_Entry_m27414_gshared (ShimEnumerator_t4020 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m27414(__this, method) (( DictionaryEntry_t1685  (*) (ShimEnumerator_t4020 *, const MethodInfo*))ShimEnumerator_get_Entry_m27414_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m27415_gshared (ShimEnumerator_t4020 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m27415(__this, method) (( Object_t * (*) (ShimEnumerator_t4020 *, const MethodInfo*))ShimEnumerator_get_Key_m27415_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m27416_gshared (ShimEnumerator_t4020 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m27416(__this, method) (( Object_t * (*) (ShimEnumerator_t4020 *, const MethodInfo*))ShimEnumerator_get_Value_m27416_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m27417_gshared (ShimEnumerator_t4020 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m27417(__this, method) (( Object_t * (*) (ShimEnumerator_t4020 *, const MethodInfo*))ShimEnumerator_get_Current_m27417_gshared)(__this, method)
