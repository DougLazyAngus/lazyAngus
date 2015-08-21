#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
struct Enumerator_t8453;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t8450;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_75.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m61250_gshared (Enumerator_t8453 * __this, Dictionary_2_t8450 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m61250(__this, ___dictionary, method) (( void (*) (Enumerator_t8453 *, Dictionary_2_t8450 *, const MethodInfo*))Enumerator__ctor_m61250_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m61251_gshared (Enumerator_t8453 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m61251(__this, method) (( Object_t * (*) (Enumerator_t8453 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m61251_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m61252_gshared (Enumerator_t8453 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m61252(__this, method) (( void (*) (Enumerator_t8453 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m61252_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2137  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m61253_gshared (Enumerator_t8453 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m61253(__this, method) (( DictionaryEntry_t2137  (*) (Enumerator_t8453 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m61253_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m61254_gshared (Enumerator_t8453 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m61254(__this, method) (( Object_t * (*) (Enumerator_t8453 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m61254_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m61255_gshared (Enumerator_t8453 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m61255(__this, method) (( Object_t * (*) (Enumerator_t8453 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m61255_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool Enumerator_MoveNext_m61256_gshared (Enumerator_t8453 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m61256(__this, method) (( bool (*) (Enumerator_t8453 *, const MethodInfo*))Enumerator_MoveNext_m61256_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_Current()
extern "C" KeyValuePair_2_t7247  Enumerator_get_Current_m61257_gshared (Enumerator_t8453 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m61257(__this, method) (( KeyValuePair_2_t7247  (*) (Enumerator_t8453 *, const MethodInfo*))Enumerator_get_Current_m61257_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m61258_gshared (Enumerator_t8453 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m61258(__this, method) (( Object_t * (*) (Enumerator_t8453 *, const MethodInfo*))Enumerator_get_CurrentKey_m61258_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentValue()
extern "C" int64_t Enumerator_get_CurrentValue_m61259_gshared (Enumerator_t8453 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m61259(__this, method) (( int64_t (*) (Enumerator_t8453 *, const MethodInfo*))Enumerator_get_CurrentValue_m61259_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::Reset()
extern "C" void Enumerator_Reset_m61260_gshared (Enumerator_t8453 * __this, const MethodInfo* method);
#define Enumerator_Reset_m61260(__this, method) (( void (*) (Enumerator_t8453 *, const MethodInfo*))Enumerator_Reset_m61260_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyState()
extern "C" void Enumerator_VerifyState_m61261_gshared (Enumerator_t8453 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m61261(__this, method) (( void (*) (Enumerator_t8453 *, const MethodInfo*))Enumerator_VerifyState_m61261_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m61262_gshared (Enumerator_t8453 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m61262(__this, method) (( void (*) (Enumerator_t8453 *, const MethodInfo*))Enumerator_VerifyCurrent_m61262_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::Dispose()
extern "C" void Enumerator_Dispose_m61263_gshared (Enumerator_t8453 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m61263(__this, method) (( void (*) (Enumerator_t8453 *, const MethodInfo*))Enumerator_Dispose_m61263_gshared)(__this, method)
