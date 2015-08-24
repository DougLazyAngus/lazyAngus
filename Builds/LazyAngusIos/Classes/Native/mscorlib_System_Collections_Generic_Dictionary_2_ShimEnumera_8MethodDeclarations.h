#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>
struct ShimEnumerator_t7149;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>
struct Dictionary_2_t7140;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m45818_gshared (ShimEnumerator_t7149 * __this, Dictionary_2_t7140 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m45818(__this, ___host, method) (( void (*) (ShimEnumerator_t7149 *, Dictionary_2_t7140 *, const MethodInfo*))ShimEnumerator__ctor_m45818_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m45819_gshared (ShimEnumerator_t7149 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m45819(__this, method) (( bool (*) (ShimEnumerator_t7149 *, const MethodInfo*))ShimEnumerator_MoveNext_m45819_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>::get_Entry()
extern "C" DictionaryEntry_t2140  ShimEnumerator_get_Entry_m45820_gshared (ShimEnumerator_t7149 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m45820(__this, method) (( DictionaryEntry_t2140  (*) (ShimEnumerator_t7149 *, const MethodInfo*))ShimEnumerator_get_Entry_m45820_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m45821_gshared (ShimEnumerator_t7149 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m45821(__this, method) (( Object_t * (*) (ShimEnumerator_t7149 *, const MethodInfo*))ShimEnumerator_get_Key_m45821_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m45822_gshared (ShimEnumerator_t7149 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m45822(__this, method) (( Object_t * (*) (ShimEnumerator_t7149 *, const MethodInfo*))ShimEnumerator_get_Value_m45822_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m45823_gshared (ShimEnumerator_t7149 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m45823(__this, method) (( Object_t * (*) (ShimEnumerator_t7149 *, const MethodInfo*))ShimEnumerator_get_Current_m45823_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>::Reset()
extern "C" void ShimEnumerator_Reset_m45824_gshared (ShimEnumerator_t7149 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m45824(__this, method) (( void (*) (ShimEnumerator_t7149 *, const MethodInfo*))ShimEnumerator_Reset_m45824_gshared)(__this, method)
