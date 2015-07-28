#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Enumerator_t8439;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t8436;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_135.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m61490_gshared (Enumerator_t8439 * __this, Dictionary_2_t8436 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m61490(__this, ___dictionary, method) (( void (*) (Enumerator_t8439 *, Dictionary_2_t8436 *, const MethodInfo*))Enumerator__ctor_m61490_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m61491_gshared (Enumerator_t8439 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m61491(__this, method) (( Object_t * (*) (Enumerator_t8439 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m61491_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m61492_gshared (Enumerator_t8439 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m61492(__this, method) (( void (*) (Enumerator_t8439 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m61492_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2079  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m61493_gshared (Enumerator_t8439 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m61493(__this, method) (( DictionaryEntry_t2079  (*) (Enumerator_t8439 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m61493_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m61494_gshared (Enumerator_t8439 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m61494(__this, method) (( Object_t * (*) (Enumerator_t8439 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m61494_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m61495_gshared (Enumerator_t8439 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m61495(__this, method) (( Object_t * (*) (Enumerator_t8439 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m61495_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool Enumerator_MoveNext_m61496_gshared (Enumerator_t8439 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m61496(__this, method) (( bool (*) (Enumerator_t8439 *, const MethodInfo*))Enumerator_MoveNext_m61496_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t8412  Enumerator_get_Current_m61497_gshared (Enumerator_t8439 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m61497(__this, method) (( KeyValuePair_2_t8412  (*) (Enumerator_t8439 *, const MethodInfo*))Enumerator_get_Current_m61497_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m61498_gshared (Enumerator_t8439 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m61498(__this, method) (( Object_t * (*) (Enumerator_t8439 *, const MethodInfo*))Enumerator_get_CurrentKey_m61498_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentValue()
extern "C" KeyValuePair_2_t70  Enumerator_get_CurrentValue_m61499_gshared (Enumerator_t8439 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m61499(__this, method) (( KeyValuePair_2_t70  (*) (Enumerator_t8439 *, const MethodInfo*))Enumerator_get_CurrentValue_m61499_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Reset()
extern "C" void Enumerator_Reset_m61500_gshared (Enumerator_t8439 * __this, const MethodInfo* method);
#define Enumerator_Reset_m61500(__this, method) (( void (*) (Enumerator_t8439 *, const MethodInfo*))Enumerator_Reset_m61500_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyState()
extern "C" void Enumerator_VerifyState_m61501_gshared (Enumerator_t8439 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m61501(__this, method) (( void (*) (Enumerator_t8439 *, const MethodInfo*))Enumerator_VerifyState_m61501_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m61502_gshared (Enumerator_t8439 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m61502(__this, method) (( void (*) (Enumerator_t8439 *, const MethodInfo*))Enumerator_VerifyCurrent_m61502_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void Enumerator_Dispose_m61503_gshared (Enumerator_t8439 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m61503(__this, method) (( void (*) (Enumerator_t8439 *, const MethodInfo*))Enumerator_Dispose_m61503_gshared)(__this, method)
