#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>
struct Enumerator_t7720;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>
struct Dictionary_2_t7717;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_56.h"
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m50331_gshared (Enumerator_t7720 * __this, Dictionary_2_t7717 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m50331(__this, ___dictionary, method) (( void (*) (Enumerator_t7720 *, Dictionary_2_t7717 *, const MethodInfo*))Enumerator__ctor_m50331_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m50333_gshared (Enumerator_t7720 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m50333(__this, method) (( Object_t * (*) (Enumerator_t7720 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m50333_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m50335_gshared (Enumerator_t7720 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m50335(__this, method) (( void (*) (Enumerator_t7720 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m50335_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2167  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m50337_gshared (Enumerator_t7720 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m50337(__this, method) (( DictionaryEntry_t2167  (*) (Enumerator_t7720 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m50337_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m50339_gshared (Enumerator_t7720 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m50339(__this, method) (( Object_t * (*) (Enumerator_t7720 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m50339_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m50341_gshared (Enumerator_t7720 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m50341(__this, method) (( Object_t * (*) (Enumerator_t7720 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m50341_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::MoveNext()
extern "C" bool Enumerator_MoveNext_m50343_gshared (Enumerator_t7720 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m50343(__this, method) (( bool (*) (Enumerator_t7720 *, const MethodInfo*))Enumerator_MoveNext_m50343_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::get_Current()
extern "C" KeyValuePair_2_t7610  Enumerator_get_Current_m50345_gshared (Enumerator_t7720 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m50345(__this, method) (( KeyValuePair_2_t7610  (*) (Enumerator_t7720 *, const MethodInfo*))Enumerator_get_Current_m50345_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m50347_gshared (Enumerator_t7720 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m50347(__this, method) (( Object_t * (*) (Enumerator_t7720 *, const MethodInfo*))Enumerator_get_CurrentKey_m50347_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::get_CurrentValue()
extern "C" ParseGeoPoint_t1275  Enumerator_get_CurrentValue_m50349_gshared (Enumerator_t7720 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m50349(__this, method) (( ParseGeoPoint_t1275  (*) (Enumerator_t7720 *, const MethodInfo*))Enumerator_get_CurrentValue_m50349_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::Reset()
extern "C" void Enumerator_Reset_m50351_gshared (Enumerator_t7720 * __this, const MethodInfo* method);
#define Enumerator_Reset_m50351(__this, method) (( void (*) (Enumerator_t7720 *, const MethodInfo*))Enumerator_Reset_m50351_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::VerifyState()
extern "C" void Enumerator_VerifyState_m50353_gshared (Enumerator_t7720 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m50353(__this, method) (( void (*) (Enumerator_t7720 *, const MethodInfo*))Enumerator_VerifyState_m50353_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m50355_gshared (Enumerator_t7720 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m50355(__this, method) (( void (*) (Enumerator_t7720 *, const MethodInfo*))Enumerator_VerifyCurrent_m50355_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::Dispose()
extern "C" void Enumerator_Dispose_m50357_gshared (Enumerator_t7720 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m50357(__this, method) (( void (*) (Enumerator_t7720 *, const MethodInfo*))Enumerator_Dispose_m50357_gshared)(__this, method)
