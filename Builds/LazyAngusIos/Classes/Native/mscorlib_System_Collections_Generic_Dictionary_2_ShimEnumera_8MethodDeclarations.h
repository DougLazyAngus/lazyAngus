#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>
struct ShimEnumerator_t7178;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>
struct Dictionary_2_t7169;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m46150_gshared (ShimEnumerator_t7178 * __this, Dictionary_2_t7169 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m46150(__this, ___host, method) (( void (*) (ShimEnumerator_t7178 *, Dictionary_2_t7169 *, const MethodInfo*))ShimEnumerator__ctor_m46150_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m46151_gshared (ShimEnumerator_t7178 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m46151(__this, method) (( bool (*) (ShimEnumerator_t7178 *, const MethodInfo*))ShimEnumerator_MoveNext_m46151_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>::get_Entry()
extern "C" DictionaryEntry_t2156  ShimEnumerator_get_Entry_m46152_gshared (ShimEnumerator_t7178 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m46152(__this, method) (( DictionaryEntry_t2156  (*) (ShimEnumerator_t7178 *, const MethodInfo*))ShimEnumerator_get_Entry_m46152_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m46153_gshared (ShimEnumerator_t7178 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m46153(__this, method) (( Object_t * (*) (ShimEnumerator_t7178 *, const MethodInfo*))ShimEnumerator_get_Key_m46153_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m46154_gshared (ShimEnumerator_t7178 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m46154(__this, method) (( Object_t * (*) (ShimEnumerator_t7178 *, const MethodInfo*))ShimEnumerator_get_Value_m46154_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m46155_gshared (ShimEnumerator_t7178 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m46155(__this, method) (( Object_t * (*) (ShimEnumerator_t7178 *, const MethodInfo*))ShimEnumerator_get_Current_m46155_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>::Reset()
extern "C" void ShimEnumerator_Reset_m46156_gshared (ShimEnumerator_t7178 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m46156(__this, method) (( void (*) (ShimEnumerator_t7178 *, const MethodInfo*))ShimEnumerator_Reset_m46156_gshared)(__this, method)
