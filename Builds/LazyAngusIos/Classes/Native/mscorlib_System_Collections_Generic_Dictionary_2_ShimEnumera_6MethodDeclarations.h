#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>
struct ShimEnumerator_t7089;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Double>
struct Dictionary_2_t7080;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m44980_gshared (ShimEnumerator_t7089 * __this, Dictionary_2_t7080 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m44980(__this, ___host, method) (( void (*) (ShimEnumerator_t7089 *, Dictionary_2_t7080 *, const MethodInfo*))ShimEnumerator__ctor_m44980_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m44981_gshared (ShimEnumerator_t7089 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m44981(__this, method) (( bool (*) (ShimEnumerator_t7089 *, const MethodInfo*))ShimEnumerator_MoveNext_m44981_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::get_Entry()
extern "C" DictionaryEntry_t2139  ShimEnumerator_get_Entry_m44982_gshared (ShimEnumerator_t7089 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m44982(__this, method) (( DictionaryEntry_t2139  (*) (ShimEnumerator_t7089 *, const MethodInfo*))ShimEnumerator_get_Entry_m44982_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m44983_gshared (ShimEnumerator_t7089 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m44983(__this, method) (( Object_t * (*) (ShimEnumerator_t7089 *, const MethodInfo*))ShimEnumerator_get_Key_m44983_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m44984_gshared (ShimEnumerator_t7089 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m44984(__this, method) (( Object_t * (*) (ShimEnumerator_t7089 *, const MethodInfo*))ShimEnumerator_get_Value_m44984_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m44985_gshared (ShimEnumerator_t7089 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m44985(__this, method) (( Object_t * (*) (ShimEnumerator_t7089 *, const MethodInfo*))ShimEnumerator_get_Current_m44985_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::Reset()
extern "C" void ShimEnumerator_Reset_m44986_gshared (ShimEnumerator_t7089 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m44986(__this, method) (( void (*) (ShimEnumerator_t7089 *, const MethodInfo*))ShimEnumerator_Reset_m44986_gshared)(__this, method)
