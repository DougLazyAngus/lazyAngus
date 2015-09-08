#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>
struct ShimEnumerator_t7646;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Single>
struct Dictionary_2_t7637;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m49442_gshared (ShimEnumerator_t7646 * __this, Dictionary_2_t7637 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m49442(__this, ___host, method) (( void (*) (ShimEnumerator_t7646 *, Dictionary_2_t7637 *, const MethodInfo*))ShimEnumerator__ctor_m49442_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m49443_gshared (ShimEnumerator_t7646 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m49443(__this, method) (( bool (*) (ShimEnumerator_t7646 *, const MethodInfo*))ShimEnumerator_MoveNext_m49443_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::get_Entry()
extern "C" DictionaryEntry_t2160  ShimEnumerator_get_Entry_m49444_gshared (ShimEnumerator_t7646 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m49444(__this, method) (( DictionaryEntry_t2160  (*) (ShimEnumerator_t7646 *, const MethodInfo*))ShimEnumerator_get_Entry_m49444_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m49445_gshared (ShimEnumerator_t7646 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m49445(__this, method) (( Object_t * (*) (ShimEnumerator_t7646 *, const MethodInfo*))ShimEnumerator_get_Key_m49445_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m49446_gshared (ShimEnumerator_t7646 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m49446(__this, method) (( Object_t * (*) (ShimEnumerator_t7646 *, const MethodInfo*))ShimEnumerator_get_Value_m49446_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m49447_gshared (ShimEnumerator_t7646 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m49447(__this, method) (( Object_t * (*) (ShimEnumerator_t7646 *, const MethodInfo*))ShimEnumerator_get_Current_m49447_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::Reset()
extern "C" void ShimEnumerator_Reset_m49448_gshared (ShimEnumerator_t7646 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m49448(__this, method) (( void (*) (ShimEnumerator_t7646 *, const MethodInfo*))ShimEnumerator_Reset_m49448_gshared)(__this, method)
