#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>
struct Enumerator_t8528;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>
struct Dictionary_2_t3314;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_141.h"
// System.TimeZoneInfo/TimeType
#include "System_Core_System_TimeZoneInfo_TimeType.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m62591_gshared (Enumerator_t8528 * __this, Dictionary_2_t3314 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m62591(__this, ___dictionary, method) (( void (*) (Enumerator_t8528 *, Dictionary_2_t3314 *, const MethodInfo*))Enumerator__ctor_m62591_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m62592_gshared (Enumerator_t8528 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m62592(__this, method) (( Object_t * (*) (Enumerator_t8528 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m62592_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m62593_gshared (Enumerator_t8528 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m62593(__this, method) (( void (*) (Enumerator_t8528 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m62593_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2086  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m62594_gshared (Enumerator_t8528 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m62594(__this, method) (( DictionaryEntry_t2086  (*) (Enumerator_t8528 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m62594_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m62595_gshared (Enumerator_t8528 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m62595(__this, method) (( Object_t * (*) (Enumerator_t8528 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m62595_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m62596_gshared (Enumerator_t8528 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m62596(__this, method) (( Object_t * (*) (Enumerator_t8528 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m62596_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::MoveNext()
extern "C" bool Enumerator_MoveNext_m62597_gshared (Enumerator_t8528 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m62597(__this, method) (( bool (*) (Enumerator_t8528 *, const MethodInfo*))Enumerator_MoveNext_m62597_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Current()
extern "C" KeyValuePair_2_t8523  Enumerator_get_Current_m62598_gshared (Enumerator_t8528 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m62598(__this, method) (( KeyValuePair_2_t8523  (*) (Enumerator_t8528 *, const MethodInfo*))Enumerator_get_Current_m62598_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m62599_gshared (Enumerator_t8528 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m62599(__this, method) (( int32_t (*) (Enumerator_t8528 *, const MethodInfo*))Enumerator_get_CurrentKey_m62599_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_CurrentValue()
extern "C" TimeType_t3306  Enumerator_get_CurrentValue_m62600_gshared (Enumerator_t8528 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m62600(__this, method) (( TimeType_t3306  (*) (Enumerator_t8528 *, const MethodInfo*))Enumerator_get_CurrentValue_m62600_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::Reset()
extern "C" void Enumerator_Reset_m62601_gshared (Enumerator_t8528 * __this, const MethodInfo* method);
#define Enumerator_Reset_m62601(__this, method) (( void (*) (Enumerator_t8528 *, const MethodInfo*))Enumerator_Reset_m62601_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::VerifyState()
extern "C" void Enumerator_VerifyState_m62602_gshared (Enumerator_t8528 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m62602(__this, method) (( void (*) (Enumerator_t8528 *, const MethodInfo*))Enumerator_VerifyState_m62602_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m62603_gshared (Enumerator_t8528 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m62603(__this, method) (( void (*) (Enumerator_t8528 *, const MethodInfo*))Enumerator_VerifyCurrent_m62603_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::Dispose()
extern "C" void Enumerator_Dispose_m62604_gshared (Enumerator_t8528 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m62604(__this, method) (( void (*) (Enumerator_t8528 *, const MethodInfo*))Enumerator_Dispose_m62604_gshared)(__this, method)
