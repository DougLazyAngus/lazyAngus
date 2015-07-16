#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Enumerator_t3965;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t3962;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_36.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m26605_gshared (Enumerator_t3965 * __this, Dictionary_2_t3962 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m26605(__this, ___dictionary, method) (( void (*) (Enumerator_t3965 *, Dictionary_2_t3962 *, const MethodInfo*))Enumerator__ctor_m26605_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m26606_gshared (Enumerator_t3965 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m26606(__this, method) (( Object_t * (*) (Enumerator_t3965 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m26606_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1718  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m26607_gshared (Enumerator_t3965 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m26607(__this, method) (( DictionaryEntry_t1718  (*) (Enumerator_t3965 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m26607_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m26608_gshared (Enumerator_t3965 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m26608(__this, method) (( Object_t * (*) (Enumerator_t3965 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m26608_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m26609_gshared (Enumerator_t3965 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m26609(__this, method) (( Object_t * (*) (Enumerator_t3965 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m26609_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool Enumerator_MoveNext_m26610_gshared (Enumerator_t3965 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m26610(__this, method) (( bool (*) (Enumerator_t3965 *, const MethodInfo*))Enumerator_MoveNext_m26610_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t3936  Enumerator_get_Current_m26611_gshared (Enumerator_t3965 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m26611(__this, method) (( KeyValuePair_2_t3936  (*) (Enumerator_t3965 *, const MethodInfo*))Enumerator_get_Current_m26611_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m26612_gshared (Enumerator_t3965 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m26612(__this, method) (( Object_t * (*) (Enumerator_t3965 *, const MethodInfo*))Enumerator_get_CurrentKey_m26612_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentValue()
extern "C" KeyValuePair_2_t40  Enumerator_get_CurrentValue_m26613_gshared (Enumerator_t3965 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m26613(__this, method) (( KeyValuePair_2_t40  (*) (Enumerator_t3965 *, const MethodInfo*))Enumerator_get_CurrentValue_m26613_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyState()
extern "C" void Enumerator_VerifyState_m26614_gshared (Enumerator_t3965 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m26614(__this, method) (( void (*) (Enumerator_t3965 *, const MethodInfo*))Enumerator_VerifyState_m26614_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m26615_gshared (Enumerator_t3965 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m26615(__this, method) (( void (*) (Enumerator_t3965 *, const MethodInfo*))Enumerator_VerifyCurrent_m26615_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void Enumerator_Dispose_m26616_gshared (Enumerator_t3965 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m26616(__this, method) (( void (*) (Enumerator_t3965 *, const MethodInfo*))Enumerator_Dispose_m26616_gshared)(__this, method)
