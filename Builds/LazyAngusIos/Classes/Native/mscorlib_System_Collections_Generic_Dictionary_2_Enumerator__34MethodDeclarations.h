#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>
struct Enumerator_t5940;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Object>
struct Dictionary_2_t5937;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_39.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m30482_gshared (Enumerator_t5940 * __this, Dictionary_2_t5937 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m30482(__this, ___dictionary, method) (( void (*) (Enumerator_t5940 *, Dictionary_2_t5937 *, const MethodInfo*))Enumerator__ctor_m30482_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m30483_gshared (Enumerator_t5940 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m30483(__this, method) (( Object_t * (*) (Enumerator_t5940 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m30483_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m30484_gshared (Enumerator_t5940 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m30484(__this, method) (( void (*) (Enumerator_t5940 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m30484_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2090  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m30485_gshared (Enumerator_t5940 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m30485(__this, method) (( DictionaryEntry_t2090  (*) (Enumerator_t5940 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m30485_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m30486_gshared (Enumerator_t5940 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m30486(__this, method) (( Object_t * (*) (Enumerator_t5940 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m30486_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m30487_gshared (Enumerator_t5940 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m30487(__this, method) (( Object_t * (*) (Enumerator_t5940 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m30487_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m30488_gshared (Enumerator_t5940 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m30488(__this, method) (( bool (*) (Enumerator_t5940 *, const MethodInfo*))Enumerator_MoveNext_m30488_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::get_Current()
extern "C" KeyValuePair_2_t5932  Enumerator_get_Current_m30489_gshared (Enumerator_t5940 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m30489(__this, method) (( KeyValuePair_2_t5932  (*) (Enumerator_t5940 *, const MethodInfo*))Enumerator_get_Current_m30489_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::get_CurrentKey()
extern "C" int64_t Enumerator_get_CurrentKey_m30490_gshared (Enumerator_t5940 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m30490(__this, method) (( int64_t (*) (Enumerator_t5940 *, const MethodInfo*))Enumerator_get_CurrentKey_m30490_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m30491_gshared (Enumerator_t5940 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m30491(__this, method) (( Object_t * (*) (Enumerator_t5940 *, const MethodInfo*))Enumerator_get_CurrentValue_m30491_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::Reset()
extern "C" void Enumerator_Reset_m30492_gshared (Enumerator_t5940 * __this, const MethodInfo* method);
#define Enumerator_Reset_m30492(__this, method) (( void (*) (Enumerator_t5940 *, const MethodInfo*))Enumerator_Reset_m30492_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m30493_gshared (Enumerator_t5940 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m30493(__this, method) (( void (*) (Enumerator_t5940 *, const MethodInfo*))Enumerator_VerifyState_m30493_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m30494_gshared (Enumerator_t5940 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m30494(__this, method) (( void (*) (Enumerator_t5940 *, const MethodInfo*))Enumerator_VerifyCurrent_m30494_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m30495_gshared (Enumerator_t5940 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m30495(__this, method) (( void (*) (Enumerator_t5940 *, const MethodInfo*))Enumerator_Dispose_m30495_gshared)(__this, method)
