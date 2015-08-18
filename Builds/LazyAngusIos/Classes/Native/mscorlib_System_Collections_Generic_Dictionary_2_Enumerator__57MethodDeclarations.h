#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>
struct Enumerator_t7136;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>
struct Dictionary_2_t7133;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_56.h"
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m45537_gshared (Enumerator_t7136 * __this, Dictionary_2_t7133 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m45537(__this, ___dictionary, method) (( void (*) (Enumerator_t7136 *, Dictionary_2_t7133 *, const MethodInfo*))Enumerator__ctor_m45537_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m45539_gshared (Enumerator_t7136 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m45539(__this, method) (( Object_t * (*) (Enumerator_t7136 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m45539_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m45541_gshared (Enumerator_t7136 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m45541(__this, method) (( void (*) (Enumerator_t7136 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m45541_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2139  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m45543_gshared (Enumerator_t7136 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m45543(__this, method) (( DictionaryEntry_t2139  (*) (Enumerator_t7136 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m45543_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m45545_gshared (Enumerator_t7136 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m45545(__this, method) (( Object_t * (*) (Enumerator_t7136 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m45545_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m45547_gshared (Enumerator_t7136 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m45547(__this, method) (( Object_t * (*) (Enumerator_t7136 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m45547_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::MoveNext()
extern "C" bool Enumerator_MoveNext_m45549_gshared (Enumerator_t7136 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m45549(__this, method) (( bool (*) (Enumerator_t7136 *, const MethodInfo*))Enumerator_MoveNext_m45549_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::get_Current()
extern "C" KeyValuePair_2_t7026  Enumerator_get_Current_m45551_gshared (Enumerator_t7136 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m45551(__this, method) (( KeyValuePair_2_t7026  (*) (Enumerator_t7136 *, const MethodInfo*))Enumerator_get_Current_m45551_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m45553_gshared (Enumerator_t7136 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m45553(__this, method) (( Object_t * (*) (Enumerator_t7136 *, const MethodInfo*))Enumerator_get_CurrentKey_m45553_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::get_CurrentValue()
extern "C" ParseGeoPoint_t1247  Enumerator_get_CurrentValue_m45555_gshared (Enumerator_t7136 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m45555(__this, method) (( ParseGeoPoint_t1247  (*) (Enumerator_t7136 *, const MethodInfo*))Enumerator_get_CurrentValue_m45555_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::Reset()
extern "C" void Enumerator_Reset_m45557_gshared (Enumerator_t7136 * __this, const MethodInfo* method);
#define Enumerator_Reset_m45557(__this, method) (( void (*) (Enumerator_t7136 *, const MethodInfo*))Enumerator_Reset_m45557_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::VerifyState()
extern "C" void Enumerator_VerifyState_m45559_gshared (Enumerator_t7136 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m45559(__this, method) (( void (*) (Enumerator_t7136 *, const MethodInfo*))Enumerator_VerifyState_m45559_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m45561_gshared (Enumerator_t7136 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m45561(__this, method) (( void (*) (Enumerator_t7136 *, const MethodInfo*))Enumerator_VerifyCurrent_m45561_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::Dispose()
extern "C" void Enumerator_Dispose_m45563_gshared (Enumerator_t7136 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m45563(__this, method) (( void (*) (Enumerator_t7136 *, const MethodInfo*))Enumerator_Dispose_m45563_gshared)(__this, method)
