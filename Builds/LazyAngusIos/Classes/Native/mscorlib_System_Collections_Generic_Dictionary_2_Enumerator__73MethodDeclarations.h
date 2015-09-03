#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>
struct Enumerator_t9187;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>
struct Dictionary_2_t3790;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_142.h"
// System.TimeZoneInfo/TimeType
#include "System_Core_System_TimeZoneInfo_TimeType.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m68082_gshared (Enumerator_t9187 * __this, Dictionary_2_t3790 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m68082(__this, ___dictionary, method) (( void (*) (Enumerator_t9187 *, Dictionary_2_t3790 *, const MethodInfo*))Enumerator__ctor_m68082_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m68083_gshared (Enumerator_t9187 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m68083(__this, method) (( Object_t * (*) (Enumerator_t9187 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m68083_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m68084_gshared (Enumerator_t9187 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m68084(__this, method) (( void (*) (Enumerator_t9187 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m68084_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2156  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m68085_gshared (Enumerator_t9187 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m68085(__this, method) (( DictionaryEntry_t2156  (*) (Enumerator_t9187 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m68085_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m68086_gshared (Enumerator_t9187 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m68086(__this, method) (( Object_t * (*) (Enumerator_t9187 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m68086_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m68087_gshared (Enumerator_t9187 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m68087(__this, method) (( Object_t * (*) (Enumerator_t9187 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m68087_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::MoveNext()
extern "C" bool Enumerator_MoveNext_m68088_gshared (Enumerator_t9187 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m68088(__this, method) (( bool (*) (Enumerator_t9187 *, const MethodInfo*))Enumerator_MoveNext_m68088_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Current()
extern "C" KeyValuePair_2_t9182  Enumerator_get_Current_m68089_gshared (Enumerator_t9187 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m68089(__this, method) (( KeyValuePair_2_t9182  (*) (Enumerator_t9187 *, const MethodInfo*))Enumerator_get_Current_m68089_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m68090_gshared (Enumerator_t9187 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m68090(__this, method) (( int32_t (*) (Enumerator_t9187 *, const MethodInfo*))Enumerator_get_CurrentKey_m68090_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_CurrentValue()
extern "C" TimeType_t3751  Enumerator_get_CurrentValue_m68091_gshared (Enumerator_t9187 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m68091(__this, method) (( TimeType_t3751  (*) (Enumerator_t9187 *, const MethodInfo*))Enumerator_get_CurrentValue_m68091_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::Reset()
extern "C" void Enumerator_Reset_m68092_gshared (Enumerator_t9187 * __this, const MethodInfo* method);
#define Enumerator_Reset_m68092(__this, method) (( void (*) (Enumerator_t9187 *, const MethodInfo*))Enumerator_Reset_m68092_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::VerifyState()
extern "C" void Enumerator_VerifyState_m68093_gshared (Enumerator_t9187 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m68093(__this, method) (( void (*) (Enumerator_t9187 *, const MethodInfo*))Enumerator_VerifyState_m68093_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m68094_gshared (Enumerator_t9187 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m68094(__this, method) (( void (*) (Enumerator_t9187 *, const MethodInfo*))Enumerator_VerifyCurrent_m68094_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::Dispose()
extern "C" void Enumerator_Dispose_m68095_gshared (Enumerator_t9187 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m68095(__this, method) (( void (*) (Enumerator_t9187 *, const MethodInfo*))Enumerator_Dispose_m68095_gshared)(__this, method)
