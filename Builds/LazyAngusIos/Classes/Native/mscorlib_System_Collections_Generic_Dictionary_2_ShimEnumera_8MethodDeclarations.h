#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>
struct ShimEnumerator_t7714;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>
struct Dictionary_2_t7705;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m50421_gshared (ShimEnumerator_t7714 * __this, Dictionary_2_t7705 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m50421(__this, ___host, method) (( void (*) (ShimEnumerator_t7714 *, Dictionary_2_t7705 *, const MethodInfo*))ShimEnumerator__ctor_m50421_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m50422_gshared (ShimEnumerator_t7714 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m50422(__this, method) (( bool (*) (ShimEnumerator_t7714 *, const MethodInfo*))ShimEnumerator_MoveNext_m50422_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>::get_Entry()
extern "C" DictionaryEntry_t2157  ShimEnumerator_get_Entry_m50423_gshared (ShimEnumerator_t7714 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m50423(__this, method) (( DictionaryEntry_t2157  (*) (ShimEnumerator_t7714 *, const MethodInfo*))ShimEnumerator_get_Entry_m50423_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m50424_gshared (ShimEnumerator_t7714 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m50424(__this, method) (( Object_t * (*) (ShimEnumerator_t7714 *, const MethodInfo*))ShimEnumerator_get_Key_m50424_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m50425_gshared (ShimEnumerator_t7714 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m50425(__this, method) (( Object_t * (*) (ShimEnumerator_t7714 *, const MethodInfo*))ShimEnumerator_get_Value_m50425_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m50426_gshared (ShimEnumerator_t7714 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m50426(__this, method) (( Object_t * (*) (ShimEnumerator_t7714 *, const MethodInfo*))ShimEnumerator_get_Current_m50426_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>::Reset()
extern "C" void ShimEnumerator_Reset_m50427_gshared (ShimEnumerator_t7714 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m50427(__this, method) (( void (*) (ShimEnumerator_t7714 *, const MethodInfo*))ShimEnumerator_Reset_m50427_gshared)(__this, method)
