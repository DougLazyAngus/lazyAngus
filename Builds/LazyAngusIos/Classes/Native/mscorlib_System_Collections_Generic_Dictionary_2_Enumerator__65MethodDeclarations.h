#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
struct Enumerator_t8449;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t8446;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_75.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m61161_gshared (Enumerator_t8449 * __this, Dictionary_2_t8446 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m61161(__this, ___dictionary, method) (( void (*) (Enumerator_t8449 *, Dictionary_2_t8446 *, const MethodInfo*))Enumerator__ctor_m61161_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m61162_gshared (Enumerator_t8449 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m61162(__this, method) (( Object_t * (*) (Enumerator_t8449 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m61162_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m61163_gshared (Enumerator_t8449 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m61163(__this, method) (( void (*) (Enumerator_t8449 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m61163_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2139  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m61164_gshared (Enumerator_t8449 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m61164(__this, method) (( DictionaryEntry_t2139  (*) (Enumerator_t8449 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m61164_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m61165_gshared (Enumerator_t8449 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m61165(__this, method) (( Object_t * (*) (Enumerator_t8449 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m61165_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m61166_gshared (Enumerator_t8449 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m61166(__this, method) (( Object_t * (*) (Enumerator_t8449 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m61166_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool Enumerator_MoveNext_m61167_gshared (Enumerator_t8449 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m61167(__this, method) (( bool (*) (Enumerator_t8449 *, const MethodInfo*))Enumerator_MoveNext_m61167_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_Current()
extern "C" KeyValuePair_2_t7243  Enumerator_get_Current_m61168_gshared (Enumerator_t8449 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m61168(__this, method) (( KeyValuePair_2_t7243  (*) (Enumerator_t8449 *, const MethodInfo*))Enumerator_get_Current_m61168_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m61169_gshared (Enumerator_t8449 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m61169(__this, method) (( Object_t * (*) (Enumerator_t8449 *, const MethodInfo*))Enumerator_get_CurrentKey_m61169_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentValue()
extern "C" int64_t Enumerator_get_CurrentValue_m61170_gshared (Enumerator_t8449 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m61170(__this, method) (( int64_t (*) (Enumerator_t8449 *, const MethodInfo*))Enumerator_get_CurrentValue_m61170_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::Reset()
extern "C" void Enumerator_Reset_m61171_gshared (Enumerator_t8449 * __this, const MethodInfo* method);
#define Enumerator_Reset_m61171(__this, method) (( void (*) (Enumerator_t8449 *, const MethodInfo*))Enumerator_Reset_m61171_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyState()
extern "C" void Enumerator_VerifyState_m61172_gshared (Enumerator_t8449 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m61172(__this, method) (( void (*) (Enumerator_t8449 *, const MethodInfo*))Enumerator_VerifyState_m61172_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m61173_gshared (Enumerator_t8449 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m61173(__this, method) (( void (*) (Enumerator_t8449 *, const MethodInfo*))Enumerator_VerifyCurrent_m61173_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::Dispose()
extern "C" void Enumerator_Dispose_m61174_gshared (Enumerator_t8449 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m61174(__this, method) (( void (*) (Enumerator_t8449 *, const MethodInfo*))Enumerator_Dispose_m61174_gshared)(__this, method)
