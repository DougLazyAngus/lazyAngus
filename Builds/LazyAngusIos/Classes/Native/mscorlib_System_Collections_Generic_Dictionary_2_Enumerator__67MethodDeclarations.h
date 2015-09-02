#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>
struct Enumerator_t8518;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t8513;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_134.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m62056_gshared (Enumerator_t8518 * __this, Dictionary_2_t8513 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m62056(__this, ___dictionary, method) (( void (*) (Enumerator_t8518 *, Dictionary_2_t8513 *, const MethodInfo*))Enumerator__ctor_m62056_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m62057_gshared (Enumerator_t8518 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m62057(__this, method) (( Object_t * (*) (Enumerator_t8518 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m62057_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m62058_gshared (Enumerator_t8518 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m62058(__this, method) (( void (*) (Enumerator_t8518 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m62058_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2156  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m62059_gshared (Enumerator_t8518 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m62059(__this, method) (( DictionaryEntry_t2156  (*) (Enumerator_t8518 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m62059_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m62060_gshared (Enumerator_t8518 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m62060(__this, method) (( Object_t * (*) (Enumerator_t8518 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m62060_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m62061_gshared (Enumerator_t8518 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m62061(__this, method) (( Object_t * (*) (Enumerator_t8518 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m62061_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m62062_gshared (Enumerator_t8518 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m62062(__this, method) (( bool (*) (Enumerator_t8518 *, const MethodInfo*))Enumerator_MoveNext_m62062_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_Current()
extern "C" KeyValuePair_2_t8514  Enumerator_get_Current_m62063_gshared (Enumerator_t8518 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m62063(__this, method) (( KeyValuePair_2_t8514  (*) (Enumerator_t8518 *, const MethodInfo*))Enumerator_get_Current_m62063_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_CurrentKey()
extern "C" uint64_t Enumerator_get_CurrentKey_m62064_gshared (Enumerator_t8518 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m62064(__this, method) (( uint64_t (*) (Enumerator_t8518 *, const MethodInfo*))Enumerator_get_CurrentKey_m62064_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m62065_gshared (Enumerator_t8518 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m62065(__this, method) (( Object_t * (*) (Enumerator_t8518 *, const MethodInfo*))Enumerator_get_CurrentValue_m62065_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::Reset()
extern "C" void Enumerator_Reset_m62066_gshared (Enumerator_t8518 * __this, const MethodInfo* method);
#define Enumerator_Reset_m62066(__this, method) (( void (*) (Enumerator_t8518 *, const MethodInfo*))Enumerator_Reset_m62066_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m62067_gshared (Enumerator_t8518 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m62067(__this, method) (( void (*) (Enumerator_t8518 *, const MethodInfo*))Enumerator_VerifyState_m62067_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m62068_gshared (Enumerator_t8518 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m62068(__this, method) (( void (*) (Enumerator_t8518 *, const MethodInfo*))Enumerator_VerifyCurrent_m62068_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m62069_gshared (Enumerator_t8518 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m62069(__this, method) (( void (*) (Enumerator_t8518 *, const MethodInfo*))Enumerator_Dispose_m62069_gshared)(__this, method)
