#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>
struct Enumerator_t8273;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>
struct Dictionary_2_t8270;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_130.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m59065_gshared (Enumerator_t8273 * __this, Dictionary_2_t8270 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m59065(__this, ___dictionary, method) (( void (*) (Enumerator_t8273 *, Dictionary_2_t8270 *, const MethodInfo*))Enumerator__ctor_m59065_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m59066_gshared (Enumerator_t8273 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m59066(__this, method) (( Object_t * (*) (Enumerator_t8273 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m59066_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m59067_gshared (Enumerator_t8273 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m59067(__this, method) (( void (*) (Enumerator_t8273 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m59067_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2090  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m59068_gshared (Enumerator_t8273 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m59068(__this, method) (( DictionaryEntry_t2090  (*) (Enumerator_t8273 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m59068_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m59069_gshared (Enumerator_t8273 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m59069(__this, method) (( Object_t * (*) (Enumerator_t8273 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m59069_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m59070_gshared (Enumerator_t8273 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m59070(__this, method) (( Object_t * (*) (Enumerator_t8273 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m59070_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m59071_gshared (Enumerator_t8273 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m59071(__this, method) (( bool (*) (Enumerator_t8273 *, const MethodInfo*))Enumerator_MoveNext_m59071_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t8267  Enumerator_get_Current_m59072_gshared (Enumerator_t8273 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m59072(__this, method) (( KeyValuePair_2_t8267  (*) (Enumerator_t8273 *, const MethodInfo*))Enumerator_get_Current_m59072_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::get_CurrentKey()
extern "C" int64_t Enumerator_get_CurrentKey_m59073_gshared (Enumerator_t8273 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m59073(__this, method) (( int64_t (*) (Enumerator_t8273 *, const MethodInfo*))Enumerator_get_CurrentKey_m59073_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m59074_gshared (Enumerator_t8273 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m59074(__this, method) (( int32_t (*) (Enumerator_t8273 *, const MethodInfo*))Enumerator_get_CurrentValue_m59074_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::Reset()
extern "C" void Enumerator_Reset_m59075_gshared (Enumerator_t8273 * __this, const MethodInfo* method);
#define Enumerator_Reset_m59075(__this, method) (( void (*) (Enumerator_t8273 *, const MethodInfo*))Enumerator_Reset_m59075_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m59076_gshared (Enumerator_t8273 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m59076(__this, method) (( void (*) (Enumerator_t8273 *, const MethodInfo*))Enumerator_VerifyState_m59076_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m59077_gshared (Enumerator_t8273 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m59077(__this, method) (( void (*) (Enumerator_t8273 *, const MethodInfo*))Enumerator_VerifyCurrent_m59077_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m59078_gshared (Enumerator_t8273 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m59078(__this, method) (( void (*) (Enumerator_t8273 *, const MethodInfo*))Enumerator_Dispose_m59078_gshared)(__this, method)
