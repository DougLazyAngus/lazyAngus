#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>
struct ShimEnumerator_t7070;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>
struct Dictionary_2_t7061;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m45013_gshared (ShimEnumerator_t7070 * __this, Dictionary_2_t7061 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m45013(__this, ___host, method) (( void (*) (ShimEnumerator_t7070 *, Dictionary_2_t7061 *, const MethodInfo*))ShimEnumerator__ctor_m45013_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m45014_gshared (ShimEnumerator_t7070 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m45014(__this, method) (( bool (*) (ShimEnumerator_t7070 *, const MethodInfo*))ShimEnumerator_MoveNext_m45014_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>::get_Entry()
extern "C" DictionaryEntry_t2088  ShimEnumerator_get_Entry_m45015_gshared (ShimEnumerator_t7070 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m45015(__this, method) (( DictionaryEntry_t2088  (*) (ShimEnumerator_t7070 *, const MethodInfo*))ShimEnumerator_get_Entry_m45015_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m45016_gshared (ShimEnumerator_t7070 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m45016(__this, method) (( Object_t * (*) (ShimEnumerator_t7070 *, const MethodInfo*))ShimEnumerator_get_Key_m45016_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m45017_gshared (ShimEnumerator_t7070 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m45017(__this, method) (( Object_t * (*) (ShimEnumerator_t7070 *, const MethodInfo*))ShimEnumerator_get_Value_m45017_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m45018_gshared (ShimEnumerator_t7070 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m45018(__this, method) (( Object_t * (*) (ShimEnumerator_t7070 *, const MethodInfo*))ShimEnumerator_get_Current_m45018_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>::Reset()
extern "C" void ShimEnumerator_Reset_m45019_gshared (ShimEnumerator_t7070 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m45019(__this, method) (( void (*) (ShimEnumerator_t7070 *, const MethodInfo*))ShimEnumerator_Reset_m45019_gshared)(__this, method)
