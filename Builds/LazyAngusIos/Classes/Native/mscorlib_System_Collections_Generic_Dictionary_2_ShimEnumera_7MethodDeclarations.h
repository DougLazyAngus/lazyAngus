#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>
struct ShimEnumerator_t7115;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>
struct Dictionary_2_t7106;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m45334_gshared (ShimEnumerator_t7115 * __this, Dictionary_2_t7106 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m45334(__this, ___host, method) (( void (*) (ShimEnumerator_t7115 *, Dictionary_2_t7106 *, const MethodInfo*))ShimEnumerator__ctor_m45334_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m45335_gshared (ShimEnumerator_t7115 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m45335(__this, method) (( bool (*) (ShimEnumerator_t7115 *, const MethodInfo*))ShimEnumerator_MoveNext_m45335_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::get_Entry()
extern "C" DictionaryEntry_t2139  ShimEnumerator_get_Entry_m45336_gshared (ShimEnumerator_t7115 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m45336(__this, method) (( DictionaryEntry_t2139  (*) (ShimEnumerator_t7115 *, const MethodInfo*))ShimEnumerator_get_Entry_m45336_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m45337_gshared (ShimEnumerator_t7115 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m45337(__this, method) (( Object_t * (*) (ShimEnumerator_t7115 *, const MethodInfo*))ShimEnumerator_get_Key_m45337_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m45338_gshared (ShimEnumerator_t7115 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m45338(__this, method) (( Object_t * (*) (ShimEnumerator_t7115 *, const MethodInfo*))ShimEnumerator_get_Value_m45338_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m45339_gshared (ShimEnumerator_t7115 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m45339(__this, method) (( Object_t * (*) (ShimEnumerator_t7115 *, const MethodInfo*))ShimEnumerator_get_Current_m45339_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::Reset()
extern "C" void ShimEnumerator_Reset_m45340_gshared (ShimEnumerator_t7115 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m45340(__this, method) (( void (*) (ShimEnumerator_t7115 *, const MethodInfo*))ShimEnumerator_Reset_m45340_gshared)(__this, method)
