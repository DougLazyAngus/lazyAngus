#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
struct Enumerator_t5490;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t5485;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_24.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m23628_gshared (Enumerator_t5490 * __this, Dictionary_2_t5485 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m23628(__this, ___dictionary, method) (( void (*) (Enumerator_t5490 *, Dictionary_2_t5485 *, const MethodInfo*))Enumerator__ctor_m23628_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m23629_gshared (Enumerator_t5490 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m23629(__this, method) (( Object_t * (*) (Enumerator_t5490 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m23629_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m23630_gshared (Enumerator_t5490 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m23630(__this, method) (( void (*) (Enumerator_t5490 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m23630_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2088  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m23631_gshared (Enumerator_t5490 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m23631(__this, method) (( DictionaryEntry_t2088  (*) (Enumerator_t5490 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m23631_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m23632_gshared (Enumerator_t5490 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m23632(__this, method) (( Object_t * (*) (Enumerator_t5490 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m23632_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m23633_gshared (Enumerator_t5490 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m23633(__this, method) (( Object_t * (*) (Enumerator_t5490 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m23633_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m23634_gshared (Enumerator_t5490 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m23634(__this, method) (( bool (*) (Enumerator_t5490 *, const MethodInfo*))Enumerator_MoveNext_m23634_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t5486  Enumerator_get_Current_m23635_gshared (Enumerator_t5490 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m23635(__this, method) (( KeyValuePair_2_t5486  (*) (Enumerator_t5490 *, const MethodInfo*))Enumerator_get_Current_m23635_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m23636_gshared (Enumerator_t5490 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m23636(__this, method) (( Object_t * (*) (Enumerator_t5490 *, const MethodInfo*))Enumerator_get_CurrentKey_m23636_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m23637_gshared (Enumerator_t5490 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m23637(__this, method) (( int32_t (*) (Enumerator_t5490 *, const MethodInfo*))Enumerator_get_CurrentValue_m23637_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Reset()
extern "C" void Enumerator_Reset_m23638_gshared (Enumerator_t5490 * __this, const MethodInfo* method);
#define Enumerator_Reset_m23638(__this, method) (( void (*) (Enumerator_t5490 *, const MethodInfo*))Enumerator_Reset_m23638_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m23639_gshared (Enumerator_t5490 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m23639(__this, method) (( void (*) (Enumerator_t5490 *, const MethodInfo*))Enumerator_VerifyState_m23639_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m23640_gshared (Enumerator_t5490 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m23640(__this, method) (( void (*) (Enumerator_t5490 *, const MethodInfo*))Enumerator_VerifyCurrent_m23640_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m23641_gshared (Enumerator_t5490 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m23641(__this, method) (( void (*) (Enumerator_t5490 *, const MethodInfo*))Enumerator_Dispose_m23641_gshared)(__this, method)
