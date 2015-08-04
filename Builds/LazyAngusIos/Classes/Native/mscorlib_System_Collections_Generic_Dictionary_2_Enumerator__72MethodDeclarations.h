#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>
struct Enumerator_t8530;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>
struct Dictionary_2_t3316;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_141.h"
// System.TimeZoneInfo/TimeType
#include "System_Core_System_TimeZoneInfo_TimeType.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m62607_gshared (Enumerator_t8530 * __this, Dictionary_2_t3316 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m62607(__this, ___dictionary, method) (( void (*) (Enumerator_t8530 *, Dictionary_2_t3316 *, const MethodInfo*))Enumerator__ctor_m62607_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m62608_gshared (Enumerator_t8530 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m62608(__this, method) (( Object_t * (*) (Enumerator_t8530 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m62608_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m62609_gshared (Enumerator_t8530 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m62609(__this, method) (( void (*) (Enumerator_t8530 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m62609_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2088  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m62610_gshared (Enumerator_t8530 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m62610(__this, method) (( DictionaryEntry_t2088  (*) (Enumerator_t8530 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m62610_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m62611_gshared (Enumerator_t8530 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m62611(__this, method) (( Object_t * (*) (Enumerator_t8530 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m62611_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m62612_gshared (Enumerator_t8530 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m62612(__this, method) (( Object_t * (*) (Enumerator_t8530 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m62612_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::MoveNext()
extern "C" bool Enumerator_MoveNext_m62613_gshared (Enumerator_t8530 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m62613(__this, method) (( bool (*) (Enumerator_t8530 *, const MethodInfo*))Enumerator_MoveNext_m62613_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Current()
extern "C" KeyValuePair_2_t8525  Enumerator_get_Current_m62614_gshared (Enumerator_t8530 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m62614(__this, method) (( KeyValuePair_2_t8525  (*) (Enumerator_t8530 *, const MethodInfo*))Enumerator_get_Current_m62614_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m62615_gshared (Enumerator_t8530 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m62615(__this, method) (( int32_t (*) (Enumerator_t8530 *, const MethodInfo*))Enumerator_get_CurrentKey_m62615_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_CurrentValue()
extern "C" TimeType_t3308  Enumerator_get_CurrentValue_m62616_gshared (Enumerator_t8530 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m62616(__this, method) (( TimeType_t3308  (*) (Enumerator_t8530 *, const MethodInfo*))Enumerator_get_CurrentValue_m62616_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::Reset()
extern "C" void Enumerator_Reset_m62617_gshared (Enumerator_t8530 * __this, const MethodInfo* method);
#define Enumerator_Reset_m62617(__this, method) (( void (*) (Enumerator_t8530 *, const MethodInfo*))Enumerator_Reset_m62617_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::VerifyState()
extern "C" void Enumerator_VerifyState_m62618_gshared (Enumerator_t8530 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m62618(__this, method) (( void (*) (Enumerator_t8530 *, const MethodInfo*))Enumerator_VerifyState_m62618_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m62619_gshared (Enumerator_t8530 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m62619(__this, method) (( void (*) (Enumerator_t8530 *, const MethodInfo*))Enumerator_VerifyCurrent_m62619_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::Dispose()
extern "C" void Enumerator_Dispose_m62620_gshared (Enumerator_t8530 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m62620(__this, method) (( void (*) (Enumerator_t8530 *, const MethodInfo*))Enumerator_Dispose_m62620_gshared)(__this, method)
