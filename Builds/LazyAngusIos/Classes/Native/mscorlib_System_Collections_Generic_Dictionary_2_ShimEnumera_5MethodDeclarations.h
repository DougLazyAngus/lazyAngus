#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>
struct ShimEnumerator_t7641;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Single>
struct Dictionary_2_t7632;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m49430_gshared (ShimEnumerator_t7641 * __this, Dictionary_2_t7632 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m49430(__this, ___host, method) (( void (*) (ShimEnumerator_t7641 *, Dictionary_2_t7632 *, const MethodInfo*))ShimEnumerator__ctor_m49430_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m49431_gshared (ShimEnumerator_t7641 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m49431(__this, method) (( bool (*) (ShimEnumerator_t7641 *, const MethodInfo*))ShimEnumerator_MoveNext_m49431_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::get_Entry()
extern "C" DictionaryEntry_t2157  ShimEnumerator_get_Entry_m49432_gshared (ShimEnumerator_t7641 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m49432(__this, method) (( DictionaryEntry_t2157  (*) (ShimEnumerator_t7641 *, const MethodInfo*))ShimEnumerator_get_Entry_m49432_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m49433_gshared (ShimEnumerator_t7641 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m49433(__this, method) (( Object_t * (*) (ShimEnumerator_t7641 *, const MethodInfo*))ShimEnumerator_get_Key_m49433_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m49434_gshared (ShimEnumerator_t7641 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m49434(__this, method) (( Object_t * (*) (ShimEnumerator_t7641 *, const MethodInfo*))ShimEnumerator_get_Value_m49434_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m49435_gshared (ShimEnumerator_t7641 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m49435(__this, method) (( Object_t * (*) (ShimEnumerator_t7641 *, const MethodInfo*))ShimEnumerator_get_Current_m49435_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::Reset()
extern "C" void ShimEnumerator_Reset_m49436_gshared (ShimEnumerator_t7641 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m49436(__this, method) (( void (*) (ShimEnumerator_t7641 *, const MethodInfo*))ShimEnumerator_Reset_m49436_gshared)(__this, method)
