#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>
struct ShimEnumerator_t4041;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1620;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m27618_gshared (ShimEnumerator_t4041 * __this, Dictionary_2_t1620 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m27618(__this, ___host, method) (( void (*) (ShimEnumerator_t4041 *, Dictionary_2_t1620 *, const MethodInfo*))ShimEnumerator__ctor_m27618_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m27619_gshared (ShimEnumerator_t4041 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m27619(__this, method) (( bool (*) (ShimEnumerator_t4041 *, const MethodInfo*))ShimEnumerator_MoveNext_m27619_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t1685  ShimEnumerator_get_Entry_m27620_gshared (ShimEnumerator_t4041 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m27620(__this, method) (( DictionaryEntry_t1685  (*) (ShimEnumerator_t4041 *, const MethodInfo*))ShimEnumerator_get_Entry_m27620_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m27621_gshared (ShimEnumerator_t4041 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m27621(__this, method) (( Object_t * (*) (ShimEnumerator_t4041 *, const MethodInfo*))ShimEnumerator_get_Key_m27621_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m27622_gshared (ShimEnumerator_t4041 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m27622(__this, method) (( Object_t * (*) (ShimEnumerator_t4041 *, const MethodInfo*))ShimEnumerator_get_Value_m27622_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m27623_gshared (ShimEnumerator_t4041 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m27623(__this, method) (( Object_t * (*) (ShimEnumerator_t4041 *, const MethodInfo*))ShimEnumerator_get_Current_m27623_gshared)(__this, method)
