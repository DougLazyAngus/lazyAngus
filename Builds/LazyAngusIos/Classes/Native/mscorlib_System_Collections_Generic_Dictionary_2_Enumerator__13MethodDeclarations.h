#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
struct Enumerator_t3439;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1229;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_16.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m18543_gshared (Enumerator_t3439 * __this, Dictionary_2_t1229 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m18543(__this, ___dictionary, method) (( void (*) (Enumerator_t3439 *, Dictionary_2_t1229 *, const MethodInfo*))Enumerator__ctor_m18543_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m18544_gshared (Enumerator_t3439 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m18544(__this, method) (( Object_t * (*) (Enumerator_t3439 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m18544_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2181  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18545_gshared (Enumerator_t3439 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18545(__this, method) (( DictionaryEntry_t2181  (*) (Enumerator_t3439 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18545_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18546_gshared (Enumerator_t3439 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18546(__this, method) (( Object_t * (*) (Enumerator_t3439 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18546_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18547_gshared (Enumerator_t3439 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18547(__this, method) (( Object_t * (*) (Enumerator_t3439 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18547_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m18548_gshared (Enumerator_t3439 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m18548(__this, method) (( bool (*) (Enumerator_t3439 *, const MethodInfo*))Enumerator_MoveNext_m18548_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" KeyValuePair_2_t3435  Enumerator_get_Current_m18549_gshared (Enumerator_t3439 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m18549(__this, method) (( KeyValuePair_2_t3435  (*) (Enumerator_t3439 *, const MethodInfo*))Enumerator_get_Current_m18549_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m18550_gshared (Enumerator_t3439 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m18550(__this, method) (( int32_t (*) (Enumerator_t3439 *, const MethodInfo*))Enumerator_get_CurrentKey_m18550_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m18551_gshared (Enumerator_t3439 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m18551(__this, method) (( Object_t * (*) (Enumerator_t3439 *, const MethodInfo*))Enumerator_get_CurrentValue_m18551_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m18552_gshared (Enumerator_t3439 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m18552(__this, method) (( void (*) (Enumerator_t3439 *, const MethodInfo*))Enumerator_VerifyState_m18552_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m18553_gshared (Enumerator_t3439 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m18553(__this, method) (( void (*) (Enumerator_t3439 *, const MethodInfo*))Enumerator_VerifyCurrent_m18553_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m18554_gshared (Enumerator_t3439 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m18554(__this, method) (( void (*) (Enumerator_t3439 *, const MethodInfo*))Enumerator_Dispose_m18554_gshared)(__this, method)
