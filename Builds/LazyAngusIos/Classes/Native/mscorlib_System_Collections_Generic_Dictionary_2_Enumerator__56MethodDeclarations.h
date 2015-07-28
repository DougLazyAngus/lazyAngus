#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>
struct Enumerator_t7054;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>
struct Dictionary_2_t7051;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_55.h"
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m44793_gshared (Enumerator_t7054 * __this, Dictionary_2_t7051 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m44793(__this, ___dictionary, method) (( void (*) (Enumerator_t7054 *, Dictionary_2_t7051 *, const MethodInfo*))Enumerator__ctor_m44793_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m44795_gshared (Enumerator_t7054 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m44795(__this, method) (( Object_t * (*) (Enumerator_t7054 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m44795_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m44797_gshared (Enumerator_t7054 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m44797(__this, method) (( void (*) (Enumerator_t7054 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m44797_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2079  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m44799_gshared (Enumerator_t7054 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m44799(__this, method) (( DictionaryEntry_t2079  (*) (Enumerator_t7054 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m44799_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m44801_gshared (Enumerator_t7054 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m44801(__this, method) (( Object_t * (*) (Enumerator_t7054 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m44801_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m44803_gshared (Enumerator_t7054 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m44803(__this, method) (( Object_t * (*) (Enumerator_t7054 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m44803_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::MoveNext()
extern "C" bool Enumerator_MoveNext_m44805_gshared (Enumerator_t7054 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m44805(__this, method) (( bool (*) (Enumerator_t7054 *, const MethodInfo*))Enumerator_MoveNext_m44805_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::get_Current()
extern "C" KeyValuePair_2_t6944  Enumerator_get_Current_m44807_gshared (Enumerator_t7054 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m44807(__this, method) (( KeyValuePair_2_t6944  (*) (Enumerator_t7054 *, const MethodInfo*))Enumerator_get_Current_m44807_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m44809_gshared (Enumerator_t7054 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m44809(__this, method) (( Object_t * (*) (Enumerator_t7054 *, const MethodInfo*))Enumerator_get_CurrentKey_m44809_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::get_CurrentValue()
extern "C" ParseGeoPoint_t1185  Enumerator_get_CurrentValue_m44811_gshared (Enumerator_t7054 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m44811(__this, method) (( ParseGeoPoint_t1185  (*) (Enumerator_t7054 *, const MethodInfo*))Enumerator_get_CurrentValue_m44811_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::Reset()
extern "C" void Enumerator_Reset_m44813_gshared (Enumerator_t7054 * __this, const MethodInfo* method);
#define Enumerator_Reset_m44813(__this, method) (( void (*) (Enumerator_t7054 *, const MethodInfo*))Enumerator_Reset_m44813_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::VerifyState()
extern "C" void Enumerator_VerifyState_m44815_gshared (Enumerator_t7054 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m44815(__this, method) (( void (*) (Enumerator_t7054 *, const MethodInfo*))Enumerator_VerifyState_m44815_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m44817_gshared (Enumerator_t7054 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m44817(__this, method) (( void (*) (Enumerator_t7054 *, const MethodInfo*))Enumerator_VerifyCurrent_m44817_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::Dispose()
extern "C" void Enumerator_Dispose_m44819_gshared (Enumerator_t7054 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m44819(__this, method) (( void (*) (Enumerator_t7054 *, const MethodInfo*))Enumerator_Dispose_m44819_gshared)(__this, method)
