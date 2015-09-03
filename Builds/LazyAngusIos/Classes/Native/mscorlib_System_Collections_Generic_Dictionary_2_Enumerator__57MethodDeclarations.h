#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>
struct Enumerator_t7707;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>
struct Dictionary_2_t7704;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_56.h"
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m50249_gshared (Enumerator_t7707 * __this, Dictionary_2_t7704 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m50249(__this, ___dictionary, method) (( void (*) (Enumerator_t7707 *, Dictionary_2_t7704 *, const MethodInfo*))Enumerator__ctor_m50249_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m50251_gshared (Enumerator_t7707 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m50251(__this, method) (( Object_t * (*) (Enumerator_t7707 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m50251_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m50253_gshared (Enumerator_t7707 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m50253(__this, method) (( void (*) (Enumerator_t7707 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m50253_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2156  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m50255_gshared (Enumerator_t7707 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m50255(__this, method) (( DictionaryEntry_t2156  (*) (Enumerator_t7707 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m50255_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m50257_gshared (Enumerator_t7707 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m50257(__this, method) (( Object_t * (*) (Enumerator_t7707 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m50257_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m50259_gshared (Enumerator_t7707 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m50259(__this, method) (( Object_t * (*) (Enumerator_t7707 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m50259_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::MoveNext()
extern "C" bool Enumerator_MoveNext_m50261_gshared (Enumerator_t7707 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m50261(__this, method) (( bool (*) (Enumerator_t7707 *, const MethodInfo*))Enumerator_MoveNext_m50261_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::get_Current()
extern "C" KeyValuePair_2_t7597  Enumerator_get_Current_m50263_gshared (Enumerator_t7707 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m50263(__this, method) (( KeyValuePair_2_t7597  (*) (Enumerator_t7707 *, const MethodInfo*))Enumerator_get_Current_m50263_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m50265_gshared (Enumerator_t7707 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m50265(__this, method) (( Object_t * (*) (Enumerator_t7707 *, const MethodInfo*))Enumerator_get_CurrentKey_m50265_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::get_CurrentValue()
extern "C" ParseGeoPoint_t1264  Enumerator_get_CurrentValue_m50267_gshared (Enumerator_t7707 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m50267(__this, method) (( ParseGeoPoint_t1264  (*) (Enumerator_t7707 *, const MethodInfo*))Enumerator_get_CurrentValue_m50267_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::Reset()
extern "C" void Enumerator_Reset_m50269_gshared (Enumerator_t7707 * __this, const MethodInfo* method);
#define Enumerator_Reset_m50269(__this, method) (( void (*) (Enumerator_t7707 *, const MethodInfo*))Enumerator_Reset_m50269_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::VerifyState()
extern "C" void Enumerator_VerifyState_m50271_gshared (Enumerator_t7707 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m50271(__this, method) (( void (*) (Enumerator_t7707 *, const MethodInfo*))Enumerator_VerifyState_m50271_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m50273_gshared (Enumerator_t7707 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m50273(__this, method) (( void (*) (Enumerator_t7707 *, const MethodInfo*))Enumerator_VerifyCurrent_m50273_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::Dispose()
extern "C" void Enumerator_Dispose_m50275_gshared (Enumerator_t7707 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m50275(__this, method) (( void (*) (Enumerator_t7707 *, const MethodInfo*))Enumerator_Dispose_m50275_gshared)(__this, method)
