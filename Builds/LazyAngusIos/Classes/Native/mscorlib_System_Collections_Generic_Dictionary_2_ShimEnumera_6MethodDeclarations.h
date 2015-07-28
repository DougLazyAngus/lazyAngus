#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>
struct ShimEnumerator_t7008;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Double>
struct Dictionary_2_t6999;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m44236_gshared (ShimEnumerator_t7008 * __this, Dictionary_2_t6999 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m44236(__this, ___host, method) (( void (*) (ShimEnumerator_t7008 *, Dictionary_2_t6999 *, const MethodInfo*))ShimEnumerator__ctor_m44236_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m44237_gshared (ShimEnumerator_t7008 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m44237(__this, method) (( bool (*) (ShimEnumerator_t7008 *, const MethodInfo*))ShimEnumerator_MoveNext_m44237_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::get_Entry()
extern "C" DictionaryEntry_t2080  ShimEnumerator_get_Entry_m44238_gshared (ShimEnumerator_t7008 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m44238(__this, method) (( DictionaryEntry_t2080  (*) (ShimEnumerator_t7008 *, const MethodInfo*))ShimEnumerator_get_Entry_m44238_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m44239_gshared (ShimEnumerator_t7008 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m44239(__this, method) (( Object_t * (*) (ShimEnumerator_t7008 *, const MethodInfo*))ShimEnumerator_get_Key_m44239_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m44240_gshared (ShimEnumerator_t7008 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m44240(__this, method) (( Object_t * (*) (ShimEnumerator_t7008 *, const MethodInfo*))ShimEnumerator_get_Value_m44240_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m44241_gshared (ShimEnumerator_t7008 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m44241(__this, method) (( Object_t * (*) (ShimEnumerator_t7008 *, const MethodInfo*))ShimEnumerator_get_Current_m44241_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::Reset()
extern "C" void ShimEnumerator_Reset_m44242_gshared (ShimEnumerator_t7008 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m44242(__this, method) (( void (*) (ShimEnumerator_t7008 *, const MethodInfo*))ShimEnumerator_Reset_m44242_gshared)(__this, method)
