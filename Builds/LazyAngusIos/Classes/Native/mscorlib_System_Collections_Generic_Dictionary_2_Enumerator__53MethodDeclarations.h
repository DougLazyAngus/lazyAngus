#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>
struct Enumerator_t7035;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>
struct Dictionary_2_t7032;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_54.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m44477_gshared (Enumerator_t7035 * __this, Dictionary_2_t7032 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m44477(__this, ___dictionary, method) (( void (*) (Enumerator_t7035 *, Dictionary_2_t7032 *, const MethodInfo*))Enumerator__ctor_m44477_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m44479_gshared (Enumerator_t7035 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m44479(__this, method) (( Object_t * (*) (Enumerator_t7035 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m44479_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m44481_gshared (Enumerator_t7035 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m44481(__this, method) (( void (*) (Enumerator_t7035 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m44481_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2086  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m44483_gshared (Enumerator_t7035 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m44483(__this, method) (( DictionaryEntry_t2086  (*) (Enumerator_t7035 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m44483_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m44485_gshared (Enumerator_t7035 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m44485(__this, method) (( Object_t * (*) (Enumerator_t7035 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m44485_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m44487_gshared (Enumerator_t7035 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m44487(__this, method) (( Object_t * (*) (Enumerator_t7035 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m44487_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::MoveNext()
extern "C" bool Enumerator_MoveNext_m44489_gshared (Enumerator_t7035 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m44489(__this, method) (( bool (*) (Enumerator_t7035 *, const MethodInfo*))Enumerator_MoveNext_m44489_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::get_Current()
extern "C" KeyValuePair_2_t6943  Enumerator_get_Current_m44491_gshared (Enumerator_t7035 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m44491(__this, method) (( KeyValuePair_2_t6943  (*) (Enumerator_t7035 *, const MethodInfo*))Enumerator_get_Current_m44491_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m44493_gshared (Enumerator_t7035 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m44493(__this, method) (( Object_t * (*) (Enumerator_t7035 *, const MethodInfo*))Enumerator_get_CurrentKey_m44493_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::get_CurrentValue()
extern "C" DateTime_t287  Enumerator_get_CurrentValue_m44495_gshared (Enumerator_t7035 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m44495(__this, method) (( DateTime_t287  (*) (Enumerator_t7035 *, const MethodInfo*))Enumerator_get_CurrentValue_m44495_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::Reset()
extern "C" void Enumerator_Reset_m44497_gshared (Enumerator_t7035 * __this, const MethodInfo* method);
#define Enumerator_Reset_m44497(__this, method) (( void (*) (Enumerator_t7035 *, const MethodInfo*))Enumerator_Reset_m44497_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::VerifyState()
extern "C" void Enumerator_VerifyState_m44499_gshared (Enumerator_t7035 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m44499(__this, method) (( void (*) (Enumerator_t7035 *, const MethodInfo*))Enumerator_VerifyState_m44499_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m44501_gshared (Enumerator_t7035 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m44501(__this, method) (( void (*) (Enumerator_t7035 *, const MethodInfo*))Enumerator_VerifyCurrent_m44501_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::Dispose()
extern "C" void Enumerator_Dispose_m44503_gshared (Enumerator_t7035 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m44503(__this, method) (( void (*) (Enumerator_t7035 *, const MethodInfo*))Enumerator_Dispose_m44503_gshared)(__this, method)
