#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>
struct Enumerator_t7143;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>
struct Dictionary_2_t7140;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_56.h"
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m45661_gshared (Enumerator_t7143 * __this, Dictionary_2_t7140 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m45661(__this, ___dictionary, method) (( void (*) (Enumerator_t7143 *, Dictionary_2_t7140 *, const MethodInfo*))Enumerator__ctor_m45661_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m45663_gshared (Enumerator_t7143 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m45663(__this, method) (( Object_t * (*) (Enumerator_t7143 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m45663_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m45665_gshared (Enumerator_t7143 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m45665(__this, method) (( void (*) (Enumerator_t7143 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m45665_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2140  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m45667_gshared (Enumerator_t7143 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m45667(__this, method) (( DictionaryEntry_t2140  (*) (Enumerator_t7143 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m45667_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m45669_gshared (Enumerator_t7143 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m45669(__this, method) (( Object_t * (*) (Enumerator_t7143 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m45669_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m45671_gshared (Enumerator_t7143 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m45671(__this, method) (( Object_t * (*) (Enumerator_t7143 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m45671_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::MoveNext()
extern "C" bool Enumerator_MoveNext_m45673_gshared (Enumerator_t7143 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m45673(__this, method) (( bool (*) (Enumerator_t7143 *, const MethodInfo*))Enumerator_MoveNext_m45673_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::get_Current()
extern "C" KeyValuePair_2_t7033  Enumerator_get_Current_m45675_gshared (Enumerator_t7143 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m45675(__this, method) (( KeyValuePair_2_t7033  (*) (Enumerator_t7143 *, const MethodInfo*))Enumerator_get_Current_m45675_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m45677_gshared (Enumerator_t7143 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m45677(__this, method) (( Object_t * (*) (Enumerator_t7143 *, const MethodInfo*))Enumerator_get_CurrentKey_m45677_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::get_CurrentValue()
extern "C" ParseGeoPoint_t1248  Enumerator_get_CurrentValue_m45679_gshared (Enumerator_t7143 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m45679(__this, method) (( ParseGeoPoint_t1248  (*) (Enumerator_t7143 *, const MethodInfo*))Enumerator_get_CurrentValue_m45679_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::Reset()
extern "C" void Enumerator_Reset_m45681_gshared (Enumerator_t7143 * __this, const MethodInfo* method);
#define Enumerator_Reset_m45681(__this, method) (( void (*) (Enumerator_t7143 *, const MethodInfo*))Enumerator_Reset_m45681_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::VerifyState()
extern "C" void Enumerator_VerifyState_m45683_gshared (Enumerator_t7143 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m45683(__this, method) (( void (*) (Enumerator_t7143 *, const MethodInfo*))Enumerator_VerifyState_m45683_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m45685_gshared (Enumerator_t7143 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m45685(__this, method) (( void (*) (Enumerator_t7143 *, const MethodInfo*))Enumerator_VerifyCurrent_m45685_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::Dispose()
extern "C" void Enumerator_Dispose_m45687_gshared (Enumerator_t7143 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m45687(__this, method) (( void (*) (Enumerator_t7143 *, const MethodInfo*))Enumerator_Dispose_m45687_gshared)(__this, method)
