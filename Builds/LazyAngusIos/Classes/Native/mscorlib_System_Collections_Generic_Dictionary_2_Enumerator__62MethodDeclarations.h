#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>
struct Enumerator_t8379;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>
struct Dictionary_2_t8376;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_131.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m60187_gshared (Enumerator_t8379 * __this, Dictionary_2_t8376 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m60187(__this, ___dictionary, method) (( void (*) (Enumerator_t8379 *, Dictionary_2_t8376 *, const MethodInfo*))Enumerator__ctor_m60187_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m60188_gshared (Enumerator_t8379 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m60188(__this, method) (( Object_t * (*) (Enumerator_t8379 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m60188_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m60189_gshared (Enumerator_t8379 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m60189(__this, method) (( void (*) (Enumerator_t8379 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m60189_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2156  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m60190_gshared (Enumerator_t8379 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m60190(__this, method) (( DictionaryEntry_t2156  (*) (Enumerator_t8379 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m60190_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m60191_gshared (Enumerator_t8379 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m60191(__this, method) (( Object_t * (*) (Enumerator_t8379 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m60191_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m60192_gshared (Enumerator_t8379 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m60192(__this, method) (( Object_t * (*) (Enumerator_t8379 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m60192_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m60193_gshared (Enumerator_t8379 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m60193(__this, method) (( bool (*) (Enumerator_t8379 *, const MethodInfo*))Enumerator_MoveNext_m60193_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t8373  Enumerator_get_Current_m60194_gshared (Enumerator_t8379 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m60194(__this, method) (( KeyValuePair_2_t8373  (*) (Enumerator_t8379 *, const MethodInfo*))Enumerator_get_Current_m60194_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::get_CurrentKey()
extern "C" int64_t Enumerator_get_CurrentKey_m60195_gshared (Enumerator_t8379 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m60195(__this, method) (( int64_t (*) (Enumerator_t8379 *, const MethodInfo*))Enumerator_get_CurrentKey_m60195_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m60196_gshared (Enumerator_t8379 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m60196(__this, method) (( int32_t (*) (Enumerator_t8379 *, const MethodInfo*))Enumerator_get_CurrentValue_m60196_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::Reset()
extern "C" void Enumerator_Reset_m60197_gshared (Enumerator_t8379 * __this, const MethodInfo* method);
#define Enumerator_Reset_m60197(__this, method) (( void (*) (Enumerator_t8379 *, const MethodInfo*))Enumerator_Reset_m60197_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m60198_gshared (Enumerator_t8379 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m60198(__this, method) (( void (*) (Enumerator_t8379 *, const MethodInfo*))Enumerator_VerifyState_m60198_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m60199_gshared (Enumerator_t8379 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m60199(__this, method) (( void (*) (Enumerator_t8379 *, const MethodInfo*))Enumerator_VerifyCurrent_m60199_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m60200_gshared (Enumerator_t8379 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m60200(__this, method) (( void (*) (Enumerator_t8379 *, const MethodInfo*))Enumerator_Dispose_m60200_gshared)(__this, method)
