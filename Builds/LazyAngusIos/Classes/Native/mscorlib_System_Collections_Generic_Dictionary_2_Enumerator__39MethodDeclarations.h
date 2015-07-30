#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>
struct Enumerator_t6119;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>
struct Dictionary_2_t6116;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_45.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m32628_gshared (Enumerator_t6119 * __this, Dictionary_2_t6116 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m32628(__this, ___dictionary, method) (( void (*) (Enumerator_t6119 *, Dictionary_2_t6116 *, const MethodInfo*))Enumerator__ctor_m32628_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m32629_gshared (Enumerator_t6119 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m32629(__this, method) (( Object_t * (*) (Enumerator_t6119 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m32629_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m32630_gshared (Enumerator_t6119 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m32630(__this, method) (( void (*) (Enumerator_t6119 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m32630_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2086  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m32631_gshared (Enumerator_t6119 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m32631(__this, method) (( DictionaryEntry_t2086  (*) (Enumerator_t6119 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m32631_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m32632_gshared (Enumerator_t6119 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m32632(__this, method) (( Object_t * (*) (Enumerator_t6119 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m32632_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m32633_gshared (Enumerator_t6119 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m32633(__this, method) (( Object_t * (*) (Enumerator_t6119 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m32633_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::MoveNext()
extern "C" bool Enumerator_MoveNext_m32634_gshared (Enumerator_t6119 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m32634(__this, method) (( bool (*) (Enumerator_t6119 *, const MethodInfo*))Enumerator_MoveNext_m32634_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::get_Current()
extern "C" KeyValuePair_2_t6113  Enumerator_get_Current_m32635_gshared (Enumerator_t6119 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m32635(__this, method) (( KeyValuePair_2_t6113  (*) (Enumerator_t6119 *, const MethodInfo*))Enumerator_get_Current_m32635_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::get_CurrentKey()
extern "C" int64_t Enumerator_get_CurrentKey_m32636_gshared (Enumerator_t6119 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m32636(__this, method) (( int64_t (*) (Enumerator_t6119 *, const MethodInfo*))Enumerator_get_CurrentKey_m32636_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::get_CurrentValue()
extern "C" uint8_t Enumerator_get_CurrentValue_m32637_gshared (Enumerator_t6119 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m32637(__this, method) (( uint8_t (*) (Enumerator_t6119 *, const MethodInfo*))Enumerator_get_CurrentValue_m32637_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::Reset()
extern "C" void Enumerator_Reset_m32638_gshared (Enumerator_t6119 * __this, const MethodInfo* method);
#define Enumerator_Reset_m32638(__this, method) (( void (*) (Enumerator_t6119 *, const MethodInfo*))Enumerator_Reset_m32638_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::VerifyState()
extern "C" void Enumerator_VerifyState_m32639_gshared (Enumerator_t6119 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m32639(__this, method) (( void (*) (Enumerator_t6119 *, const MethodInfo*))Enumerator_VerifyState_m32639_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m32640_gshared (Enumerator_t6119 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m32640(__this, method) (( void (*) (Enumerator_t6119 *, const MethodInfo*))Enumerator_VerifyCurrent_m32640_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::Dispose()
extern "C" void Enumerator_Dispose_m32641_gshared (Enumerator_t6119 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m32641(__this, method) (( void (*) (Enumerator_t6119 *, const MethodInfo*))Enumerator_Dispose_m32641_gshared)(__this, method)
