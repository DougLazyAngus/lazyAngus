#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>
struct ShimEnumerator_t3880;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t3868;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m25541_gshared (ShimEnumerator_t3880 * __this, Dictionary_2_t3868 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m25541(__this, ___host, method) (( void (*) (ShimEnumerator_t3880 *, Dictionary_2_t3868 *, const MethodInfo*))ShimEnumerator__ctor_m25541_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m25542_gshared (ShimEnumerator_t3880 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m25542(__this, method) (( bool (*) (ShimEnumerator_t3880 *, const MethodInfo*))ShimEnumerator_MoveNext_m25542_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Entry()
extern "C" DictionaryEntry_t1710  ShimEnumerator_get_Entry_m25543_gshared (ShimEnumerator_t3880 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m25543(__this, method) (( DictionaryEntry_t1710  (*) (ShimEnumerator_t3880 *, const MethodInfo*))ShimEnumerator_get_Entry_m25543_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m25544_gshared (ShimEnumerator_t3880 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m25544(__this, method) (( Object_t * (*) (ShimEnumerator_t3880 *, const MethodInfo*))ShimEnumerator_get_Key_m25544_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m25545_gshared (ShimEnumerator_t3880 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m25545(__this, method) (( Object_t * (*) (ShimEnumerator_t3880 *, const MethodInfo*))ShimEnumerator_get_Value_m25545_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m25546_gshared (ShimEnumerator_t3880 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m25546(__this, method) (( Object_t * (*) (ShimEnumerator_t3880 *, const MethodInfo*))ShimEnumerator_get_Current_m25546_gshared)(__this, method)
