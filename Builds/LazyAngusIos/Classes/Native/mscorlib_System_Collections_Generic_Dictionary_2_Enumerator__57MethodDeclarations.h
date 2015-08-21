#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>
struct Enumerator_t7140;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>
struct Dictionary_2_t7137;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_56.h"
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m45629_gshared (Enumerator_t7140 * __this, Dictionary_2_t7137 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m45629(__this, ___dictionary, method) (( void (*) (Enumerator_t7140 *, Dictionary_2_t7137 *, const MethodInfo*))Enumerator__ctor_m45629_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m45631_gshared (Enumerator_t7140 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m45631(__this, method) (( Object_t * (*) (Enumerator_t7140 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m45631_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m45633_gshared (Enumerator_t7140 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m45633(__this, method) (( void (*) (Enumerator_t7140 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m45633_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2137  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m45635_gshared (Enumerator_t7140 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m45635(__this, method) (( DictionaryEntry_t2137  (*) (Enumerator_t7140 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m45635_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m45637_gshared (Enumerator_t7140 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m45637(__this, method) (( Object_t * (*) (Enumerator_t7140 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m45637_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m45639_gshared (Enumerator_t7140 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m45639(__this, method) (( Object_t * (*) (Enumerator_t7140 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m45639_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::MoveNext()
extern "C" bool Enumerator_MoveNext_m45641_gshared (Enumerator_t7140 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m45641(__this, method) (( bool (*) (Enumerator_t7140 *, const MethodInfo*))Enumerator_MoveNext_m45641_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::get_Current()
extern "C" KeyValuePair_2_t7030  Enumerator_get_Current_m45643_gshared (Enumerator_t7140 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m45643(__this, method) (( KeyValuePair_2_t7030  (*) (Enumerator_t7140 *, const MethodInfo*))Enumerator_get_Current_m45643_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m45645_gshared (Enumerator_t7140 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m45645(__this, method) (( Object_t * (*) (Enumerator_t7140 *, const MethodInfo*))Enumerator_get_CurrentKey_m45645_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::get_CurrentValue()
extern "C" ParseGeoPoint_t1245  Enumerator_get_CurrentValue_m45647_gshared (Enumerator_t7140 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m45647(__this, method) (( ParseGeoPoint_t1245  (*) (Enumerator_t7140 *, const MethodInfo*))Enumerator_get_CurrentValue_m45647_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::Reset()
extern "C" void Enumerator_Reset_m45649_gshared (Enumerator_t7140 * __this, const MethodInfo* method);
#define Enumerator_Reset_m45649(__this, method) (( void (*) (Enumerator_t7140 *, const MethodInfo*))Enumerator_Reset_m45649_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::VerifyState()
extern "C" void Enumerator_VerifyState_m45651_gshared (Enumerator_t7140 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m45651(__this, method) (( void (*) (Enumerator_t7140 *, const MethodInfo*))Enumerator_VerifyState_m45651_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m45653_gshared (Enumerator_t7140 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m45653(__this, method) (( void (*) (Enumerator_t7140 *, const MethodInfo*))Enumerator_VerifyCurrent_m45653_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::Dispose()
extern "C" void Enumerator_Dispose_m45655_gshared (Enumerator_t7140 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m45655(__this, method) (( void (*) (Enumerator_t7140 *, const MethodInfo*))Enumerator_Dispose_m45655_gshared)(__this, method)
