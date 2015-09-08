#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>
struct Enumerator_t7713;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>
struct Dictionary_2_t7710;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_56.h"
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m50274_gshared (Enumerator_t7713 * __this, Dictionary_2_t7710 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m50274(__this, ___dictionary, method) (( void (*) (Enumerator_t7713 *, Dictionary_2_t7710 *, const MethodInfo*))Enumerator__ctor_m50274_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m50276_gshared (Enumerator_t7713 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m50276(__this, method) (( Object_t * (*) (Enumerator_t7713 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m50276_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m50278_gshared (Enumerator_t7713 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m50278(__this, method) (( void (*) (Enumerator_t7713 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m50278_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2160  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m50280_gshared (Enumerator_t7713 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m50280(__this, method) (( DictionaryEntry_t2160  (*) (Enumerator_t7713 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m50280_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m50282_gshared (Enumerator_t7713 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m50282(__this, method) (( Object_t * (*) (Enumerator_t7713 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m50282_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m50284_gshared (Enumerator_t7713 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m50284(__this, method) (( Object_t * (*) (Enumerator_t7713 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m50284_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::MoveNext()
extern "C" bool Enumerator_MoveNext_m50286_gshared (Enumerator_t7713 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m50286(__this, method) (( bool (*) (Enumerator_t7713 *, const MethodInfo*))Enumerator_MoveNext_m50286_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::get_Current()
extern "C" KeyValuePair_2_t7603  Enumerator_get_Current_m50288_gshared (Enumerator_t7713 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m50288(__this, method) (( KeyValuePair_2_t7603  (*) (Enumerator_t7713 *, const MethodInfo*))Enumerator_get_Current_m50288_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m50290_gshared (Enumerator_t7713 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m50290(__this, method) (( Object_t * (*) (Enumerator_t7713 *, const MethodInfo*))Enumerator_get_CurrentKey_m50290_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::get_CurrentValue()
extern "C" ParseGeoPoint_t1268  Enumerator_get_CurrentValue_m50292_gshared (Enumerator_t7713 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m50292(__this, method) (( ParseGeoPoint_t1268  (*) (Enumerator_t7713 *, const MethodInfo*))Enumerator_get_CurrentValue_m50292_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::Reset()
extern "C" void Enumerator_Reset_m50294_gshared (Enumerator_t7713 * __this, const MethodInfo* method);
#define Enumerator_Reset_m50294(__this, method) (( void (*) (Enumerator_t7713 *, const MethodInfo*))Enumerator_Reset_m50294_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::VerifyState()
extern "C" void Enumerator_VerifyState_m50296_gshared (Enumerator_t7713 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m50296(__this, method) (( void (*) (Enumerator_t7713 *, const MethodInfo*))Enumerator_VerifyState_m50296_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m50298_gshared (Enumerator_t7713 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m50298(__this, method) (( void (*) (Enumerator_t7713 *, const MethodInfo*))Enumerator_VerifyCurrent_m50298_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::Dispose()
extern "C" void Enumerator_Dispose_m50300_gshared (Enumerator_t7713 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m50300(__this, method) (( void (*) (Enumerator_t7713 *, const MethodInfo*))Enumerator_Dispose_m50300_gshared)(__this, method)
