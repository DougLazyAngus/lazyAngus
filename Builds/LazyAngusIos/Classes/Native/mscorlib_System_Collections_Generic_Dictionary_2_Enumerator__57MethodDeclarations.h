#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>
struct Enumerator_t7172;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>
struct Dictionary_2_t7169;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_56.h"
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m45993_gshared (Enumerator_t7172 * __this, Dictionary_2_t7169 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m45993(__this, ___dictionary, method) (( void (*) (Enumerator_t7172 *, Dictionary_2_t7169 *, const MethodInfo*))Enumerator__ctor_m45993_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m45995_gshared (Enumerator_t7172 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m45995(__this, method) (( Object_t * (*) (Enumerator_t7172 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m45995_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m45997_gshared (Enumerator_t7172 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m45997(__this, method) (( void (*) (Enumerator_t7172 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m45997_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2156  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m45999_gshared (Enumerator_t7172 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m45999(__this, method) (( DictionaryEntry_t2156  (*) (Enumerator_t7172 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m45999_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m46001_gshared (Enumerator_t7172 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m46001(__this, method) (( Object_t * (*) (Enumerator_t7172 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m46001_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m46003_gshared (Enumerator_t7172 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m46003(__this, method) (( Object_t * (*) (Enumerator_t7172 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m46003_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::MoveNext()
extern "C" bool Enumerator_MoveNext_m46005_gshared (Enumerator_t7172 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m46005(__this, method) (( bool (*) (Enumerator_t7172 *, const MethodInfo*))Enumerator_MoveNext_m46005_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::get_Current()
extern "C" KeyValuePair_2_t7062  Enumerator_get_Current_m46007_gshared (Enumerator_t7172 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m46007(__this, method) (( KeyValuePair_2_t7062  (*) (Enumerator_t7172 *, const MethodInfo*))Enumerator_get_Current_m46007_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m46009_gshared (Enumerator_t7172 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m46009(__this, method) (( Object_t * (*) (Enumerator_t7172 *, const MethodInfo*))Enumerator_get_CurrentKey_m46009_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::get_CurrentValue()
extern "C" ParseGeoPoint_t1264  Enumerator_get_CurrentValue_m46011_gshared (Enumerator_t7172 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m46011(__this, method) (( ParseGeoPoint_t1264  (*) (Enumerator_t7172 *, const MethodInfo*))Enumerator_get_CurrentValue_m46011_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::Reset()
extern "C" void Enumerator_Reset_m46013_gshared (Enumerator_t7172 * __this, const MethodInfo* method);
#define Enumerator_Reset_m46013(__this, method) (( void (*) (Enumerator_t7172 *, const MethodInfo*))Enumerator_Reset_m46013_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::VerifyState()
extern "C" void Enumerator_VerifyState_m46015_gshared (Enumerator_t7172 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m46015(__this, method) (( void (*) (Enumerator_t7172 *, const MethodInfo*))Enumerator_VerifyState_m46015_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m46017_gshared (Enumerator_t7172 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m46017(__this, method) (( void (*) (Enumerator_t7172 *, const MethodInfo*))Enumerator_VerifyCurrent_m46017_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::Dispose()
extern "C" void Enumerator_Dispose_m46019_gshared (Enumerator_t7172 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m46019(__this, method) (( void (*) (Enumerator_t7172 *, const MethodInfo*))Enumerator_Dispose_m46019_gshared)(__this, method)
