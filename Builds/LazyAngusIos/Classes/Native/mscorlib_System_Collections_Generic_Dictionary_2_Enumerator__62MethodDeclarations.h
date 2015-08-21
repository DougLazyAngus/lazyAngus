#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>
struct Enumerator_t8347;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>
struct Dictionary_2_t8344;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_131.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m59823_gshared (Enumerator_t8347 * __this, Dictionary_2_t8344 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m59823(__this, ___dictionary, method) (( void (*) (Enumerator_t8347 *, Dictionary_2_t8344 *, const MethodInfo*))Enumerator__ctor_m59823_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m59824_gshared (Enumerator_t8347 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m59824(__this, method) (( Object_t * (*) (Enumerator_t8347 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m59824_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m59825_gshared (Enumerator_t8347 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m59825(__this, method) (( void (*) (Enumerator_t8347 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m59825_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2137  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m59826_gshared (Enumerator_t8347 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m59826(__this, method) (( DictionaryEntry_t2137  (*) (Enumerator_t8347 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m59826_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m59827_gshared (Enumerator_t8347 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m59827(__this, method) (( Object_t * (*) (Enumerator_t8347 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m59827_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m59828_gshared (Enumerator_t8347 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m59828(__this, method) (( Object_t * (*) (Enumerator_t8347 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m59828_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m59829_gshared (Enumerator_t8347 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m59829(__this, method) (( bool (*) (Enumerator_t8347 *, const MethodInfo*))Enumerator_MoveNext_m59829_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t8341  Enumerator_get_Current_m59830_gshared (Enumerator_t8347 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m59830(__this, method) (( KeyValuePair_2_t8341  (*) (Enumerator_t8347 *, const MethodInfo*))Enumerator_get_Current_m59830_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::get_CurrentKey()
extern "C" int64_t Enumerator_get_CurrentKey_m59831_gshared (Enumerator_t8347 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m59831(__this, method) (( int64_t (*) (Enumerator_t8347 *, const MethodInfo*))Enumerator_get_CurrentKey_m59831_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m59832_gshared (Enumerator_t8347 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m59832(__this, method) (( int32_t (*) (Enumerator_t8347 *, const MethodInfo*))Enumerator_get_CurrentValue_m59832_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::Reset()
extern "C" void Enumerator_Reset_m59833_gshared (Enumerator_t8347 * __this, const MethodInfo* method);
#define Enumerator_Reset_m59833(__this, method) (( void (*) (Enumerator_t8347 *, const MethodInfo*))Enumerator_Reset_m59833_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m59834_gshared (Enumerator_t8347 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m59834(__this, method) (( void (*) (Enumerator_t8347 *, const MethodInfo*))Enumerator_VerifyState_m59834_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m59835_gshared (Enumerator_t8347 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m59835(__this, method) (( void (*) (Enumerator_t8347 *, const MethodInfo*))Enumerator_VerifyCurrent_m59835_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m59836_gshared (Enumerator_t8347 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m59836(__this, method) (( void (*) (Enumerator_t8347 *, const MethodInfo*))Enumerator_Dispose_m59836_gshared)(__this, method)
