#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>
struct ShimEnumerator_t7071;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>
struct Dictionary_2_t7062;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m45020_gshared (ShimEnumerator_t7071 * __this, Dictionary_2_t7062 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m45020(__this, ___host, method) (( void (*) (ShimEnumerator_t7071 *, Dictionary_2_t7062 *, const MethodInfo*))ShimEnumerator__ctor_m45020_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m45021_gshared (ShimEnumerator_t7071 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m45021(__this, method) (( bool (*) (ShimEnumerator_t7071 *, const MethodInfo*))ShimEnumerator_MoveNext_m45021_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>::get_Entry()
extern "C" DictionaryEntry_t2089  ShimEnumerator_get_Entry_m45022_gshared (ShimEnumerator_t7071 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m45022(__this, method) (( DictionaryEntry_t2089  (*) (ShimEnumerator_t7071 *, const MethodInfo*))ShimEnumerator_get_Entry_m45022_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m45023_gshared (ShimEnumerator_t7071 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m45023(__this, method) (( Object_t * (*) (ShimEnumerator_t7071 *, const MethodInfo*))ShimEnumerator_get_Key_m45023_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m45024_gshared (ShimEnumerator_t7071 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m45024(__this, method) (( Object_t * (*) (ShimEnumerator_t7071 *, const MethodInfo*))ShimEnumerator_get_Value_m45024_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m45025_gshared (ShimEnumerator_t7071 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m45025(__this, method) (( Object_t * (*) (ShimEnumerator_t7071 *, const MethodInfo*))ShimEnumerator_get_Current_m45025_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>::Reset()
extern "C" void ShimEnumerator_Reset_m45026_gshared (ShimEnumerator_t7071 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m45026(__this, method) (( void (*) (ShimEnumerator_t7071 *, const MethodInfo*))ShimEnumerator_Reset_m45026_gshared)(__this, method)
