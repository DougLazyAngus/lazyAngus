#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Enumerator_t9093;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t9090;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_136.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m66978_gshared (Enumerator_t9093 * __this, Dictionary_2_t9090 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m66978(__this, ___dictionary, method) (( void (*) (Enumerator_t9093 *, Dictionary_2_t9090 *, const MethodInfo*))Enumerator__ctor_m66978_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m66979_gshared (Enumerator_t9093 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m66979(__this, method) (( Object_t * (*) (Enumerator_t9093 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m66979_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m66980_gshared (Enumerator_t9093 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m66980(__this, method) (( void (*) (Enumerator_t9093 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m66980_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2157  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m66981_gshared (Enumerator_t9093 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m66981(__this, method) (( DictionaryEntry_t2157  (*) (Enumerator_t9093 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m66981_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m66982_gshared (Enumerator_t9093 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m66982(__this, method) (( Object_t * (*) (Enumerator_t9093 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m66982_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m66983_gshared (Enumerator_t9093 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m66983(__this, method) (( Object_t * (*) (Enumerator_t9093 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m66983_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool Enumerator_MoveNext_m66984_gshared (Enumerator_t9093 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m66984(__this, method) (( bool (*) (Enumerator_t9093 *, const MethodInfo*))Enumerator_MoveNext_m66984_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t9066  Enumerator_get_Current_m66985_gshared (Enumerator_t9093 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m66985(__this, method) (( KeyValuePair_2_t9066  (*) (Enumerator_t9093 *, const MethodInfo*))Enumerator_get_Current_m66985_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m66986_gshared (Enumerator_t9093 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m66986(__this, method) (( Object_t * (*) (Enumerator_t9093 *, const MethodInfo*))Enumerator_get_CurrentKey_m66986_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentValue()
extern "C" KeyValuePair_2_t70  Enumerator_get_CurrentValue_m66987_gshared (Enumerator_t9093 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m66987(__this, method) (( KeyValuePair_2_t70  (*) (Enumerator_t9093 *, const MethodInfo*))Enumerator_get_CurrentValue_m66987_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Reset()
extern "C" void Enumerator_Reset_m66988_gshared (Enumerator_t9093 * __this, const MethodInfo* method);
#define Enumerator_Reset_m66988(__this, method) (( void (*) (Enumerator_t9093 *, const MethodInfo*))Enumerator_Reset_m66988_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyState()
extern "C" void Enumerator_VerifyState_m66989_gshared (Enumerator_t9093 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m66989(__this, method) (( void (*) (Enumerator_t9093 *, const MethodInfo*))Enumerator_VerifyState_m66989_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m66990_gshared (Enumerator_t9093 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m66990(__this, method) (( void (*) (Enumerator_t9093 *, const MethodInfo*))Enumerator_VerifyCurrent_m66990_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void Enumerator_Dispose_m66991_gshared (Enumerator_t9093 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m66991(__this, method) (( void (*) (Enumerator_t9093 *, const MethodInfo*))Enumerator_Dispose_m66991_gshared)(__this, method)
