#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Enumerator_t8525;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t8522;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_136.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m62326_gshared (Enumerator_t8525 * __this, Dictionary_2_t8522 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m62326(__this, ___dictionary, method) (( void (*) (Enumerator_t8525 *, Dictionary_2_t8522 *, const MethodInfo*))Enumerator__ctor_m62326_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m62327_gshared (Enumerator_t8525 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m62327(__this, method) (( Object_t * (*) (Enumerator_t8525 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m62327_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m62328_gshared (Enumerator_t8525 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m62328(__this, method) (( void (*) (Enumerator_t8525 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m62328_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2137  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m62329_gshared (Enumerator_t8525 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m62329(__this, method) (( DictionaryEntry_t2137  (*) (Enumerator_t8525 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m62329_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m62330_gshared (Enumerator_t8525 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m62330(__this, method) (( Object_t * (*) (Enumerator_t8525 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m62330_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m62331_gshared (Enumerator_t8525 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m62331(__this, method) (( Object_t * (*) (Enumerator_t8525 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m62331_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool Enumerator_MoveNext_m62332_gshared (Enumerator_t8525 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m62332(__this, method) (( bool (*) (Enumerator_t8525 *, const MethodInfo*))Enumerator_MoveNext_m62332_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t8498  Enumerator_get_Current_m62333_gshared (Enumerator_t8525 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m62333(__this, method) (( KeyValuePair_2_t8498  (*) (Enumerator_t8525 *, const MethodInfo*))Enumerator_get_Current_m62333_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m62334_gshared (Enumerator_t8525 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m62334(__this, method) (( Object_t * (*) (Enumerator_t8525 *, const MethodInfo*))Enumerator_get_CurrentKey_m62334_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentValue()
extern "C" KeyValuePair_2_t70  Enumerator_get_CurrentValue_m62335_gshared (Enumerator_t8525 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m62335(__this, method) (( KeyValuePair_2_t70  (*) (Enumerator_t8525 *, const MethodInfo*))Enumerator_get_CurrentValue_m62335_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Reset()
extern "C" void Enumerator_Reset_m62336_gshared (Enumerator_t8525 * __this, const MethodInfo* method);
#define Enumerator_Reset_m62336(__this, method) (( void (*) (Enumerator_t8525 *, const MethodInfo*))Enumerator_Reset_m62336_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyState()
extern "C" void Enumerator_VerifyState_m62337_gshared (Enumerator_t8525 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m62337(__this, method) (( void (*) (Enumerator_t8525 *, const MethodInfo*))Enumerator_VerifyState_m62337_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m62338_gshared (Enumerator_t8525 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m62338(__this, method) (( void (*) (Enumerator_t8525 *, const MethodInfo*))Enumerator_VerifyCurrent_m62338_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void Enumerator_Dispose_m62339_gshared (Enumerator_t8525 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m62339(__this, method) (( void (*) (Enumerator_t8525 *, const MethodInfo*))Enumerator_Dispose_m62339_gshared)(__this, method)
