#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>
struct Enumerator_t8602;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>
struct Dictionary_2_t3364;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_142.h"
// System.TimeZoneInfo/TimeType
#include "System_Core_System_TimeZoneInfo_TimeType.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m63291_gshared (Enumerator_t8602 * __this, Dictionary_2_t3364 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m63291(__this, ___dictionary, method) (( void (*) (Enumerator_t8602 *, Dictionary_2_t3364 *, const MethodInfo*))Enumerator__ctor_m63291_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m63292_gshared (Enumerator_t8602 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m63292(__this, method) (( Object_t * (*) (Enumerator_t8602 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m63292_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m63293_gshared (Enumerator_t8602 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m63293(__this, method) (( void (*) (Enumerator_t8602 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m63293_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2139  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m63294_gshared (Enumerator_t8602 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m63294(__this, method) (( DictionaryEntry_t2139  (*) (Enumerator_t8602 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m63294_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m63295_gshared (Enumerator_t8602 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m63295(__this, method) (( Object_t * (*) (Enumerator_t8602 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m63295_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m63296_gshared (Enumerator_t8602 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m63296(__this, method) (( Object_t * (*) (Enumerator_t8602 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m63296_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::MoveNext()
extern "C" bool Enumerator_MoveNext_m63297_gshared (Enumerator_t8602 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m63297(__this, method) (( bool (*) (Enumerator_t8602 *, const MethodInfo*))Enumerator_MoveNext_m63297_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Current()
extern "C" KeyValuePair_2_t8597  Enumerator_get_Current_m63298_gshared (Enumerator_t8602 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m63298(__this, method) (( KeyValuePair_2_t8597  (*) (Enumerator_t8602 *, const MethodInfo*))Enumerator_get_Current_m63298_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m63299_gshared (Enumerator_t8602 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m63299(__this, method) (( int32_t (*) (Enumerator_t8602 *, const MethodInfo*))Enumerator_get_CurrentKey_m63299_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_CurrentValue()
extern "C" TimeType_t3356  Enumerator_get_CurrentValue_m63300_gshared (Enumerator_t8602 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m63300(__this, method) (( TimeType_t3356  (*) (Enumerator_t8602 *, const MethodInfo*))Enumerator_get_CurrentValue_m63300_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::Reset()
extern "C" void Enumerator_Reset_m63301_gshared (Enumerator_t8602 * __this, const MethodInfo* method);
#define Enumerator_Reset_m63301(__this, method) (( void (*) (Enumerator_t8602 *, const MethodInfo*))Enumerator_Reset_m63301_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::VerifyState()
extern "C" void Enumerator_VerifyState_m63302_gshared (Enumerator_t8602 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m63302(__this, method) (( void (*) (Enumerator_t8602 *, const MethodInfo*))Enumerator_VerifyState_m63302_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m63303_gshared (Enumerator_t8602 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m63303(__this, method) (( void (*) (Enumerator_t8602 *, const MethodInfo*))Enumerator_VerifyCurrent_m63303_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::Dispose()
extern "C" void Enumerator_Dispose_m63304_gshared (Enumerator_t8602 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m63304(__this, method) (( void (*) (Enumerator_t8602 *, const MethodInfo*))Enumerator_Dispose_m63304_gshared)(__this, method)
