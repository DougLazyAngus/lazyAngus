#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>
struct Enumerator_t7065;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>
struct Dictionary_2_t7062;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_55.h"
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m44863_gshared (Enumerator_t7065 * __this, Dictionary_2_t7062 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m44863(__this, ___dictionary, method) (( void (*) (Enumerator_t7065 *, Dictionary_2_t7062 *, const MethodInfo*))Enumerator__ctor_m44863_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m44865_gshared (Enumerator_t7065 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m44865(__this, method) (( Object_t * (*) (Enumerator_t7065 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m44865_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m44867_gshared (Enumerator_t7065 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m44867(__this, method) (( void (*) (Enumerator_t7065 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m44867_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2089  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m44869_gshared (Enumerator_t7065 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m44869(__this, method) (( DictionaryEntry_t2089  (*) (Enumerator_t7065 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m44869_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m44871_gshared (Enumerator_t7065 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m44871(__this, method) (( Object_t * (*) (Enumerator_t7065 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m44871_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m44873_gshared (Enumerator_t7065 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m44873(__this, method) (( Object_t * (*) (Enumerator_t7065 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m44873_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::MoveNext()
extern "C" bool Enumerator_MoveNext_m44875_gshared (Enumerator_t7065 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m44875(__this, method) (( bool (*) (Enumerator_t7065 *, const MethodInfo*))Enumerator_MoveNext_m44875_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::get_Current()
extern "C" KeyValuePair_2_t6955  Enumerator_get_Current_m44877_gshared (Enumerator_t7065 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m44877(__this, method) (( KeyValuePair_2_t6955  (*) (Enumerator_t7065 *, const MethodInfo*))Enumerator_get_Current_m44877_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m44879_gshared (Enumerator_t7065 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m44879(__this, method) (( Object_t * (*) (Enumerator_t7065 *, const MethodInfo*))Enumerator_get_CurrentKey_m44879_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::get_CurrentValue()
extern "C" ParseGeoPoint_t1195  Enumerator_get_CurrentValue_m44881_gshared (Enumerator_t7065 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m44881(__this, method) (( ParseGeoPoint_t1195  (*) (Enumerator_t7065 *, const MethodInfo*))Enumerator_get_CurrentValue_m44881_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::Reset()
extern "C" void Enumerator_Reset_m44883_gshared (Enumerator_t7065 * __this, const MethodInfo* method);
#define Enumerator_Reset_m44883(__this, method) (( void (*) (Enumerator_t7065 *, const MethodInfo*))Enumerator_Reset_m44883_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::VerifyState()
extern "C" void Enumerator_VerifyState_m44885_gshared (Enumerator_t7065 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m44885(__this, method) (( void (*) (Enumerator_t7065 *, const MethodInfo*))Enumerator_VerifyState_m44885_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m44887_gshared (Enumerator_t7065 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m44887(__this, method) (( void (*) (Enumerator_t7065 *, const MethodInfo*))Enumerator_VerifyCurrent_m44887_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::Dispose()
extern "C" void Enumerator_Dispose_m44889_gshared (Enumerator_t7065 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m44889(__this, method) (( void (*) (Enumerator_t7065 *, const MethodInfo*))Enumerator_Dispose_m44889_gshared)(__this, method)
