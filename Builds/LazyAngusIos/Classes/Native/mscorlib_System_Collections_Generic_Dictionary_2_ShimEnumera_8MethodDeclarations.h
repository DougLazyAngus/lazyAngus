#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>
struct ShimEnumerator_t7713;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>
struct Dictionary_2_t7704;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m50408_gshared (ShimEnumerator_t7713 * __this, Dictionary_2_t7704 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m50408(__this, ___host, method) (( void (*) (ShimEnumerator_t7713 *, Dictionary_2_t7704 *, const MethodInfo*))ShimEnumerator__ctor_m50408_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m50409_gshared (ShimEnumerator_t7713 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m50409(__this, method) (( bool (*) (ShimEnumerator_t7713 *, const MethodInfo*))ShimEnumerator_MoveNext_m50409_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>::get_Entry()
extern "C" DictionaryEntry_t2156  ShimEnumerator_get_Entry_m50410_gshared (ShimEnumerator_t7713 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m50410(__this, method) (( DictionaryEntry_t2156  (*) (ShimEnumerator_t7713 *, const MethodInfo*))ShimEnumerator_get_Entry_m50410_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m50411_gshared (ShimEnumerator_t7713 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m50411(__this, method) (( Object_t * (*) (ShimEnumerator_t7713 *, const MethodInfo*))ShimEnumerator_get_Key_m50411_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m50412_gshared (ShimEnumerator_t7713 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m50412(__this, method) (( Object_t * (*) (ShimEnumerator_t7713 *, const MethodInfo*))ShimEnumerator_get_Value_m50412_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m50413_gshared (ShimEnumerator_t7713 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m50413(__this, method) (( Object_t * (*) (ShimEnumerator_t7713 *, const MethodInfo*))ShimEnumerator_get_Current_m50413_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>::Reset()
extern "C" void ShimEnumerator_Reset_m50414_gshared (ShimEnumerator_t7713 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m50414(__this, method) (( void (*) (ShimEnumerator_t7713 *, const MethodInfo*))ShimEnumerator_Reset_m50414_gshared)(__this, method)
