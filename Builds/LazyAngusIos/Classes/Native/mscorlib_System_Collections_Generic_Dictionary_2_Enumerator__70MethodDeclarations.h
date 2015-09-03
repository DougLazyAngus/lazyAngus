#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Enumerator_t9092;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t9089;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_136.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m66965_gshared (Enumerator_t9092 * __this, Dictionary_2_t9089 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m66965(__this, ___dictionary, method) (( void (*) (Enumerator_t9092 *, Dictionary_2_t9089 *, const MethodInfo*))Enumerator__ctor_m66965_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m66966_gshared (Enumerator_t9092 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m66966(__this, method) (( Object_t * (*) (Enumerator_t9092 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m66966_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m66967_gshared (Enumerator_t9092 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m66967(__this, method) (( void (*) (Enumerator_t9092 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m66967_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2156  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m66968_gshared (Enumerator_t9092 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m66968(__this, method) (( DictionaryEntry_t2156  (*) (Enumerator_t9092 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m66968_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m66969_gshared (Enumerator_t9092 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m66969(__this, method) (( Object_t * (*) (Enumerator_t9092 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m66969_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m66970_gshared (Enumerator_t9092 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m66970(__this, method) (( Object_t * (*) (Enumerator_t9092 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m66970_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool Enumerator_MoveNext_m66971_gshared (Enumerator_t9092 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m66971(__this, method) (( bool (*) (Enumerator_t9092 *, const MethodInfo*))Enumerator_MoveNext_m66971_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t9065  Enumerator_get_Current_m66972_gshared (Enumerator_t9092 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m66972(__this, method) (( KeyValuePair_2_t9065  (*) (Enumerator_t9092 *, const MethodInfo*))Enumerator_get_Current_m66972_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m66973_gshared (Enumerator_t9092 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m66973(__this, method) (( Object_t * (*) (Enumerator_t9092 *, const MethodInfo*))Enumerator_get_CurrentKey_m66973_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentValue()
extern "C" KeyValuePair_2_t70  Enumerator_get_CurrentValue_m66974_gshared (Enumerator_t9092 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m66974(__this, method) (( KeyValuePair_2_t70  (*) (Enumerator_t9092 *, const MethodInfo*))Enumerator_get_CurrentValue_m66974_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Reset()
extern "C" void Enumerator_Reset_m66975_gshared (Enumerator_t9092 * __this, const MethodInfo* method);
#define Enumerator_Reset_m66975(__this, method) (( void (*) (Enumerator_t9092 *, const MethodInfo*))Enumerator_Reset_m66975_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyState()
extern "C" void Enumerator_VerifyState_m66976_gshared (Enumerator_t9092 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m66976(__this, method) (( void (*) (Enumerator_t9092 *, const MethodInfo*))Enumerator_VerifyState_m66976_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m66977_gshared (Enumerator_t9092 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m66977(__this, method) (( void (*) (Enumerator_t9092 *, const MethodInfo*))Enumerator_VerifyCurrent_m66977_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void Enumerator_Dispose_m66978_gshared (Enumerator_t9092 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m66978(__this, method) (( void (*) (Enumerator_t9092 *, const MethodInfo*))Enumerator_Dispose_m66978_gshared)(__this, method)
