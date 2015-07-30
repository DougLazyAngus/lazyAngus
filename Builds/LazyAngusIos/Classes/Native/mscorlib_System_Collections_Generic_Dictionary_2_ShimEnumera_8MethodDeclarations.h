#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>
struct ShimEnumerator_t7068;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>
struct Dictionary_2_t7059;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m44997_gshared (ShimEnumerator_t7068 * __this, Dictionary_2_t7059 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m44997(__this, ___host, method) (( void (*) (ShimEnumerator_t7068 *, Dictionary_2_t7059 *, const MethodInfo*))ShimEnumerator__ctor_m44997_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m44998_gshared (ShimEnumerator_t7068 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m44998(__this, method) (( bool (*) (ShimEnumerator_t7068 *, const MethodInfo*))ShimEnumerator_MoveNext_m44998_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>::get_Entry()
extern "C" DictionaryEntry_t2086  ShimEnumerator_get_Entry_m44999_gshared (ShimEnumerator_t7068 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m44999(__this, method) (( DictionaryEntry_t2086  (*) (ShimEnumerator_t7068 *, const MethodInfo*))ShimEnumerator_get_Entry_m44999_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m45000_gshared (ShimEnumerator_t7068 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m45000(__this, method) (( Object_t * (*) (ShimEnumerator_t7068 *, const MethodInfo*))ShimEnumerator_get_Key_m45000_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m45001_gshared (ShimEnumerator_t7068 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m45001(__this, method) (( Object_t * (*) (ShimEnumerator_t7068 *, const MethodInfo*))ShimEnumerator_get_Value_m45001_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m45002_gshared (ShimEnumerator_t7068 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m45002(__this, method) (( Object_t * (*) (ShimEnumerator_t7068 *, const MethodInfo*))ShimEnumerator_get_Current_m45002_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>::Reset()
extern "C" void ShimEnumerator_Reset_m45003_gshared (ShimEnumerator_t7068 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m45003(__this, method) (( void (*) (ShimEnumerator_t7068 *, const MethodInfo*))ShimEnumerator_Reset_m45003_gshared)(__this, method)
