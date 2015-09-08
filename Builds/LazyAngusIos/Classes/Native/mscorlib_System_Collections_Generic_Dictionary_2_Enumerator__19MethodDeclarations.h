#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
struct Enumerator_t6090;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t6085;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_24.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m28251_gshared (Enumerator_t6090 * __this, Dictionary_2_t6085 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m28251(__this, ___dictionary, method) (( void (*) (Enumerator_t6090 *, Dictionary_2_t6085 *, const MethodInfo*))Enumerator__ctor_m28251_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m28252_gshared (Enumerator_t6090 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m28252(__this, method) (( Object_t * (*) (Enumerator_t6090 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m28252_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m28253_gshared (Enumerator_t6090 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m28253(__this, method) (( void (*) (Enumerator_t6090 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m28253_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2160  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m28254_gshared (Enumerator_t6090 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m28254(__this, method) (( DictionaryEntry_t2160  (*) (Enumerator_t6090 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m28254_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m28255_gshared (Enumerator_t6090 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m28255(__this, method) (( Object_t * (*) (Enumerator_t6090 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m28255_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m28256_gshared (Enumerator_t6090 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m28256(__this, method) (( Object_t * (*) (Enumerator_t6090 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m28256_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m28257_gshared (Enumerator_t6090 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m28257(__this, method) (( bool (*) (Enumerator_t6090 *, const MethodInfo*))Enumerator_MoveNext_m28257_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t6086  Enumerator_get_Current_m28258_gshared (Enumerator_t6090 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m28258(__this, method) (( KeyValuePair_2_t6086  (*) (Enumerator_t6090 *, const MethodInfo*))Enumerator_get_Current_m28258_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m28259_gshared (Enumerator_t6090 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m28259(__this, method) (( Object_t * (*) (Enumerator_t6090 *, const MethodInfo*))Enumerator_get_CurrentKey_m28259_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m28260_gshared (Enumerator_t6090 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m28260(__this, method) (( int32_t (*) (Enumerator_t6090 *, const MethodInfo*))Enumerator_get_CurrentValue_m28260_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Reset()
extern "C" void Enumerator_Reset_m28261_gshared (Enumerator_t6090 * __this, const MethodInfo* method);
#define Enumerator_Reset_m28261(__this, method) (( void (*) (Enumerator_t6090 *, const MethodInfo*))Enumerator_Reset_m28261_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m28262_gshared (Enumerator_t6090 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m28262(__this, method) (( void (*) (Enumerator_t6090 *, const MethodInfo*))Enumerator_VerifyState_m28262_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m28263_gshared (Enumerator_t6090 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m28263(__this, method) (( void (*) (Enumerator_t6090 *, const MethodInfo*))Enumerator_VerifyCurrent_m28263_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m28264_gshared (Enumerator_t6090 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m28264(__this, method) (( void (*) (Enumerator_t6090 *, const MethodInfo*))Enumerator_Dispose_m28264_gshared)(__this, method)
