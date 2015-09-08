#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>
struct ShimEnumerator_t7666;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Double>
struct Dictionary_2_t7657;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m49715_gshared (ShimEnumerator_t7666 * __this, Dictionary_2_t7657 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m49715(__this, ___host, method) (( void (*) (ShimEnumerator_t7666 *, Dictionary_2_t7657 *, const MethodInfo*))ShimEnumerator__ctor_m49715_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m49716_gshared (ShimEnumerator_t7666 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m49716(__this, method) (( bool (*) (ShimEnumerator_t7666 *, const MethodInfo*))ShimEnumerator_MoveNext_m49716_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::get_Entry()
extern "C" DictionaryEntry_t2160  ShimEnumerator_get_Entry_m49717_gshared (ShimEnumerator_t7666 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m49717(__this, method) (( DictionaryEntry_t2160  (*) (ShimEnumerator_t7666 *, const MethodInfo*))ShimEnumerator_get_Entry_m49717_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m49718_gshared (ShimEnumerator_t7666 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m49718(__this, method) (( Object_t * (*) (ShimEnumerator_t7666 *, const MethodInfo*))ShimEnumerator_get_Key_m49718_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m49719_gshared (ShimEnumerator_t7666 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m49719(__this, method) (( Object_t * (*) (ShimEnumerator_t7666 *, const MethodInfo*))ShimEnumerator_get_Value_m49719_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m49720_gshared (ShimEnumerator_t7666 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m49720(__this, method) (( Object_t * (*) (ShimEnumerator_t7666 *, const MethodInfo*))ShimEnumerator_get_Current_m49720_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::Reset()
extern "C" void ShimEnumerator_Reset_m49721_gshared (ShimEnumerator_t7666 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m49721(__this, method) (( void (*) (ShimEnumerator_t7666 *, const MethodInfo*))ShimEnumerator_Reset_m49721_gshared)(__this, method)
