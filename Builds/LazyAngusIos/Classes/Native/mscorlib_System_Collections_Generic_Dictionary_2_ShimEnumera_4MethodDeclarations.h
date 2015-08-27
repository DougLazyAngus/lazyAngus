#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>
struct ShimEnumerator_t6221;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t6212;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m33713_gshared (ShimEnumerator_t6221 * __this, Dictionary_2_t6212 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m33713(__this, ___host, method) (( void (*) (ShimEnumerator_t6221 *, Dictionary_2_t6212 *, const MethodInfo*))ShimEnumerator__ctor_m33713_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m33714_gshared (ShimEnumerator_t6221 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m33714(__this, method) (( bool (*) (ShimEnumerator_t6221 *, const MethodInfo*))ShimEnumerator_MoveNext_m33714_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Entry()
extern "C" DictionaryEntry_t2140  ShimEnumerator_get_Entry_m33715_gshared (ShimEnumerator_t6221 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m33715(__this, method) (( DictionaryEntry_t2140  (*) (ShimEnumerator_t6221 *, const MethodInfo*))ShimEnumerator_get_Entry_m33715_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m33716_gshared (ShimEnumerator_t6221 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m33716(__this, method) (( Object_t * (*) (ShimEnumerator_t6221 *, const MethodInfo*))ShimEnumerator_get_Key_m33716_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m33717_gshared (ShimEnumerator_t6221 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m33717(__this, method) (( Object_t * (*) (ShimEnumerator_t6221 *, const MethodInfo*))ShimEnumerator_get_Value_m33717_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m33718_gshared (ShimEnumerator_t6221 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m33718(__this, method) (( Object_t * (*) (ShimEnumerator_t6221 *, const MethodInfo*))ShimEnumerator_get_Current_m33718_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::Reset()
extern "C" void ShimEnumerator_Reset_m33719_gshared (ShimEnumerator_t6221 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m33719(__this, method) (( void (*) (ShimEnumerator_t6221 *, const MethodInfo*))ShimEnumerator_Reset_m33719_gshared)(__this, method)
