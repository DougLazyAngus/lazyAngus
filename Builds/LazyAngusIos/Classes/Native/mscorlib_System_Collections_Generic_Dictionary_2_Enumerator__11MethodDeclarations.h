#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_t3397;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t3391;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m17745_gshared (Enumerator_t3397 * __this, Dictionary_2_t3391 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m17745(__this, ___dictionary, method) (( void (*) (Enumerator_t3397 *, Dictionary_2_t3391 *, const MethodInfo*))Enumerator__ctor_m17745_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m17746_gshared (Enumerator_t3397 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m17746(__this, method) (( Object_t * (*) (Enumerator_t3397 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m17746_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2179  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m17747_gshared (Enumerator_t3397 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m17747(__this, method) (( DictionaryEntry_t2179  (*) (Enumerator_t3397 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m17747_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m17748_gshared (Enumerator_t3397 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m17748(__this, method) (( Object_t * (*) (Enumerator_t3397 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m17748_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m17749_gshared (Enumerator_t3397 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m17749(__this, method) (( Object_t * (*) (Enumerator_t3397 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m17749_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m17750_gshared (Enumerator_t3397 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m17750(__this, method) (( bool (*) (Enumerator_t3397 *, const MethodInfo*))Enumerator_MoveNext_m17750_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern "C" KeyValuePair_2_t40  Enumerator_get_Current_m17751_gshared (Enumerator_t3397 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m17751(__this, method) (( KeyValuePair_2_t40  (*) (Enumerator_t3397 *, const MethodInfo*))Enumerator_get_Current_m17751_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m17752_gshared (Enumerator_t3397 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m17752(__this, method) (( Object_t * (*) (Enumerator_t3397 *, const MethodInfo*))Enumerator_get_CurrentKey_m17752_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m17753_gshared (Enumerator_t3397 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m17753(__this, method) (( Object_t * (*) (Enumerator_t3397 *, const MethodInfo*))Enumerator_get_CurrentValue_m17753_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m17754_gshared (Enumerator_t3397 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m17754(__this, method) (( void (*) (Enumerator_t3397 *, const MethodInfo*))Enumerator_VerifyState_m17754_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m17755_gshared (Enumerator_t3397 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m17755(__this, method) (( void (*) (Enumerator_t3397 *, const MethodInfo*))Enumerator_VerifyCurrent_m17755_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m17756_gshared (Enumerator_t3397 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m17756(__this, method) (( void (*) (Enumerator_t3397 *, const MethodInfo*))Enumerator_Dispose_m17756_gshared)(__this, method)
