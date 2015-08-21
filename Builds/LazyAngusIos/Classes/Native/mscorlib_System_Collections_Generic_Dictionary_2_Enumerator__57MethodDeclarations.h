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
extern "C" void Enumerator__ctor_m45628_gshared (Enumerator_t7140 * __this, Dictionary_2_t7137 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m45628(__this, ___dictionary, method) (( void (*) (Enumerator_t7140 *, Dictionary_2_t7137 *, const MethodInfo*))Enumerator__ctor_m45628_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m45630_gshared (Enumerator_t7140 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m45630(__this, method) (( Object_t * (*) (Enumerator_t7140 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m45630_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m45632_gshared (Enumerator_t7140 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m45632(__this, method) (( void (*) (Enumerator_t7140 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m45632_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2137  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m45634_gshared (Enumerator_t7140 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m45634(__this, method) (( DictionaryEntry_t2137  (*) (Enumerator_t7140 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m45634_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m45636_gshared (Enumerator_t7140 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m45636(__this, method) (( Object_t * (*) (Enumerator_t7140 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m45636_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m45638_gshared (Enumerator_t7140 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m45638(__this, method) (( Object_t * (*) (Enumerator_t7140 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m45638_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::MoveNext()
extern "C" bool Enumerator_MoveNext_m45640_gshared (Enumerator_t7140 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m45640(__this, method) (( bool (*) (Enumerator_t7140 *, const MethodInfo*))Enumerator_MoveNext_m45640_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::get_Current()
extern "C" KeyValuePair_2_t7030  Enumerator_get_Current_m45642_gshared (Enumerator_t7140 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m45642(__this, method) (( KeyValuePair_2_t7030  (*) (Enumerator_t7140 *, const MethodInfo*))Enumerator_get_Current_m45642_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m45644_gshared (Enumerator_t7140 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m45644(__this, method) (( Object_t * (*) (Enumerator_t7140 *, const MethodInfo*))Enumerator_get_CurrentKey_m45644_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::get_CurrentValue()
extern "C" ParseGeoPoint_t1245  Enumerator_get_CurrentValue_m45646_gshared (Enumerator_t7140 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m45646(__this, method) (( ParseGeoPoint_t1245  (*) (Enumerator_t7140 *, const MethodInfo*))Enumerator_get_CurrentValue_m45646_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::Reset()
extern "C" void Enumerator_Reset_m45648_gshared (Enumerator_t7140 * __this, const MethodInfo* method);
#define Enumerator_Reset_m45648(__this, method) (( void (*) (Enumerator_t7140 *, const MethodInfo*))Enumerator_Reset_m45648_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::VerifyState()
extern "C" void Enumerator_VerifyState_m45650_gshared (Enumerator_t7140 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m45650(__this, method) (( void (*) (Enumerator_t7140 *, const MethodInfo*))Enumerator_VerifyState_m45650_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m45652_gshared (Enumerator_t7140 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m45652(__this, method) (( void (*) (Enumerator_t7140 *, const MethodInfo*))Enumerator_VerifyCurrent_m45652_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::Dispose()
extern "C" void Enumerator_Dispose_m45654_gshared (Enumerator_t7140 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m45654(__this, method) (( void (*) (Enumerator_t7140 *, const MethodInfo*))Enumerator_Dispose_m45654_gshared)(__this, method)
