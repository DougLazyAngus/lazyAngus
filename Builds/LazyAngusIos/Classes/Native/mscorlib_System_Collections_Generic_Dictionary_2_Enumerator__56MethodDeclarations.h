#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>
struct Enumerator_t7064;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>
struct Dictionary_2_t7061;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_55.h"
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m44856_gshared (Enumerator_t7064 * __this, Dictionary_2_t7061 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m44856(__this, ___dictionary, method) (( void (*) (Enumerator_t7064 *, Dictionary_2_t7061 *, const MethodInfo*))Enumerator__ctor_m44856_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m44858_gshared (Enumerator_t7064 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m44858(__this, method) (( Object_t * (*) (Enumerator_t7064 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m44858_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m44860_gshared (Enumerator_t7064 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m44860(__this, method) (( void (*) (Enumerator_t7064 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m44860_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2088  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m44862_gshared (Enumerator_t7064 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m44862(__this, method) (( DictionaryEntry_t2088  (*) (Enumerator_t7064 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m44862_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m44864_gshared (Enumerator_t7064 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m44864(__this, method) (( Object_t * (*) (Enumerator_t7064 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m44864_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m44866_gshared (Enumerator_t7064 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m44866(__this, method) (( Object_t * (*) (Enumerator_t7064 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m44866_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::MoveNext()
extern "C" bool Enumerator_MoveNext_m44868_gshared (Enumerator_t7064 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m44868(__this, method) (( bool (*) (Enumerator_t7064 *, const MethodInfo*))Enumerator_MoveNext_m44868_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::get_Current()
extern "C" KeyValuePair_2_t6954  Enumerator_get_Current_m44870_gshared (Enumerator_t7064 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m44870(__this, method) (( KeyValuePair_2_t6954  (*) (Enumerator_t7064 *, const MethodInfo*))Enumerator_get_Current_m44870_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m44872_gshared (Enumerator_t7064 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m44872(__this, method) (( Object_t * (*) (Enumerator_t7064 *, const MethodInfo*))Enumerator_get_CurrentKey_m44872_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::get_CurrentValue()
extern "C" ParseGeoPoint_t1194  Enumerator_get_CurrentValue_m44874_gshared (Enumerator_t7064 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m44874(__this, method) (( ParseGeoPoint_t1194  (*) (Enumerator_t7064 *, const MethodInfo*))Enumerator_get_CurrentValue_m44874_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::Reset()
extern "C" void Enumerator_Reset_m44876_gshared (Enumerator_t7064 * __this, const MethodInfo* method);
#define Enumerator_Reset_m44876(__this, method) (( void (*) (Enumerator_t7064 *, const MethodInfo*))Enumerator_Reset_m44876_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::VerifyState()
extern "C" void Enumerator_VerifyState_m44878_gshared (Enumerator_t7064 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m44878(__this, method) (( void (*) (Enumerator_t7064 *, const MethodInfo*))Enumerator_VerifyState_m44878_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m44880_gshared (Enumerator_t7064 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m44880(__this, method) (( void (*) (Enumerator_t7064 *, const MethodInfo*))Enumerator_VerifyCurrent_m44880_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::Dispose()
extern "C" void Enumerator_Dispose_m44882_gshared (Enumerator_t7064 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m44882(__this, method) (( void (*) (Enumerator_t7064 *, const MethodInfo*))Enumerator_Dispose_m44882_gshared)(__this, method)
