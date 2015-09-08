#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
struct Enumerator_t5957;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2874;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_18.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m25600_gshared (Enumerator_t5957 * __this, Dictionary_2_t2874 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m25600(__this, ___dictionary, method) (( void (*) (Enumerator_t5957 *, Dictionary_2_t2874 *, const MethodInfo*))Enumerator__ctor_m25600_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m25601_gshared (Enumerator_t5957 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m25601(__this, method) (( Object_t * (*) (Enumerator_t5957 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m25601_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m25602_gshared (Enumerator_t5957 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m25602(__this, method) (( void (*) (Enumerator_t5957 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m25602_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2160  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m25603_gshared (Enumerator_t5957 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m25603(__this, method) (( DictionaryEntry_t2160  (*) (Enumerator_t5957 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m25603_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m25604_gshared (Enumerator_t5957 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m25604(__this, method) (( Object_t * (*) (Enumerator_t5957 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m25604_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m25605_gshared (Enumerator_t5957 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m25605(__this, method) (( Object_t * (*) (Enumerator_t5957 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m25605_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m25606_gshared (Enumerator_t5957 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m25606(__this, method) (( bool (*) (Enumerator_t5957 *, const MethodInfo*))Enumerator_MoveNext_m25606_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" KeyValuePair_2_t5949  Enumerator_get_Current_m25607_gshared (Enumerator_t5957 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m25607(__this, method) (( KeyValuePair_2_t5949  (*) (Enumerator_t5957 *, const MethodInfo*))Enumerator_get_Current_m25607_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m25608_gshared (Enumerator_t5957 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m25608(__this, method) (( int32_t (*) (Enumerator_t5957 *, const MethodInfo*))Enumerator_get_CurrentKey_m25608_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m25609_gshared (Enumerator_t5957 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m25609(__this, method) (( Object_t * (*) (Enumerator_t5957 *, const MethodInfo*))Enumerator_get_CurrentValue_m25609_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Reset()
extern "C" void Enumerator_Reset_m25610_gshared (Enumerator_t5957 * __this, const MethodInfo* method);
#define Enumerator_Reset_m25610(__this, method) (( void (*) (Enumerator_t5957 *, const MethodInfo*))Enumerator_Reset_m25610_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m25611_gshared (Enumerator_t5957 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m25611(__this, method) (( void (*) (Enumerator_t5957 *, const MethodInfo*))Enumerator_VerifyState_m25611_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m25612_gshared (Enumerator_t5957 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m25612(__this, method) (( void (*) (Enumerator_t5957 *, const MethodInfo*))Enumerator_VerifyCurrent_m25612_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m25613_gshared (Enumerator_t5957 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m25613(__this, method) (( void (*) (Enumerator_t5957 *, const MethodInfo*))Enumerator_Dispose_m25613_gshared)(__this, method)
