#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Enumerator_t4030;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t4027;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_40.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m27627_gshared (Enumerator_t4030 * __this, Dictionary_2_t4027 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m27627(__this, ___dictionary, method) (( void (*) (Enumerator_t4030 *, Dictionary_2_t4027 *, const MethodInfo*))Enumerator__ctor_m27627_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m27628_gshared (Enumerator_t4030 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m27628(__this, method) (( Object_t * (*) (Enumerator_t4030 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m27628_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2179  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m27629_gshared (Enumerator_t4030 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m27629(__this, method) (( DictionaryEntry_t2179  (*) (Enumerator_t4030 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m27629_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m27630_gshared (Enumerator_t4030 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m27630(__this, method) (( Object_t * (*) (Enumerator_t4030 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m27630_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m27631_gshared (Enumerator_t4030 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m27631(__this, method) (( Object_t * (*) (Enumerator_t4030 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m27631_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool Enumerator_MoveNext_m27632_gshared (Enumerator_t4030 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m27632(__this, method) (( bool (*) (Enumerator_t4030 *, const MethodInfo*))Enumerator_MoveNext_m27632_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t4001  Enumerator_get_Current_m27633_gshared (Enumerator_t4030 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m27633(__this, method) (( KeyValuePair_2_t4001  (*) (Enumerator_t4030 *, const MethodInfo*))Enumerator_get_Current_m27633_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m27634_gshared (Enumerator_t4030 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m27634(__this, method) (( Object_t * (*) (Enumerator_t4030 *, const MethodInfo*))Enumerator_get_CurrentKey_m27634_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentValue()
extern "C" KeyValuePair_2_t40  Enumerator_get_CurrentValue_m27635_gshared (Enumerator_t4030 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m27635(__this, method) (( KeyValuePair_2_t40  (*) (Enumerator_t4030 *, const MethodInfo*))Enumerator_get_CurrentValue_m27635_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyState()
extern "C" void Enumerator_VerifyState_m27636_gshared (Enumerator_t4030 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m27636(__this, method) (( void (*) (Enumerator_t4030 *, const MethodInfo*))Enumerator_VerifyState_m27636_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m27637_gshared (Enumerator_t4030 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m27637(__this, method) (( void (*) (Enumerator_t4030 *, const MethodInfo*))Enumerator_VerifyCurrent_m27637_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void Enumerator_Dispose_m27638_gshared (Enumerator_t4030 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m27638(__this, method) (( void (*) (Enumerator_t4030 *, const MethodInfo*))Enumerator_Dispose_m27638_gshared)(__this, method)
