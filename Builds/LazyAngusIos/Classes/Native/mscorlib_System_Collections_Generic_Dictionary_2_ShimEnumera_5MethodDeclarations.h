#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>
struct ShimEnumerator_t6987;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Single>
struct Dictionary_2_t6978;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m43965_gshared (ShimEnumerator_t6987 * __this, Dictionary_2_t6978 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m43965(__this, ___host, method) (( void (*) (ShimEnumerator_t6987 *, Dictionary_2_t6978 *, const MethodInfo*))ShimEnumerator__ctor_m43965_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m43966_gshared (ShimEnumerator_t6987 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m43966(__this, method) (( bool (*) (ShimEnumerator_t6987 *, const MethodInfo*))ShimEnumerator_MoveNext_m43966_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::get_Entry()
extern "C" DictionaryEntry_t2079  ShimEnumerator_get_Entry_m43967_gshared (ShimEnumerator_t6987 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m43967(__this, method) (( DictionaryEntry_t2079  (*) (ShimEnumerator_t6987 *, const MethodInfo*))ShimEnumerator_get_Entry_m43967_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m43968_gshared (ShimEnumerator_t6987 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m43968(__this, method) (( Object_t * (*) (ShimEnumerator_t6987 *, const MethodInfo*))ShimEnumerator_get_Key_m43968_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m43969_gshared (ShimEnumerator_t6987 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m43969(__this, method) (( Object_t * (*) (ShimEnumerator_t6987 *, const MethodInfo*))ShimEnumerator_get_Value_m43969_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m43970_gshared (ShimEnumerator_t6987 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m43970(__this, method) (( Object_t * (*) (ShimEnumerator_t6987 *, const MethodInfo*))ShimEnumerator_get_Current_m43970_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::Reset()
extern "C" void ShimEnumerator_Reset_m43971_gshared (ShimEnumerator_t6987 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m43971(__this, method) (( void (*) (ShimEnumerator_t6987 *, const MethodInfo*))ShimEnumerator_Reset_m43971_gshared)(__this, method)
