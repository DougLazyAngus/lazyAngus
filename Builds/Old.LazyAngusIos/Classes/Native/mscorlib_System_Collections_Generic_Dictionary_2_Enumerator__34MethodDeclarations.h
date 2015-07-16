#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Enumerator_t3956;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t3953;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_36.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m26564_gshared (Enumerator_t3956 * __this, Dictionary_2_t3953 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m26564(__this, ___dictionary, method) (( void (*) (Enumerator_t3956 *, Dictionary_2_t3953 *, const MethodInfo*))Enumerator__ctor_m26564_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m26565_gshared (Enumerator_t3956 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m26565(__this, method) (( Object_t * (*) (Enumerator_t3956 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m26565_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1710  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m26566_gshared (Enumerator_t3956 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m26566(__this, method) (( DictionaryEntry_t1710  (*) (Enumerator_t3956 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m26566_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m26567_gshared (Enumerator_t3956 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m26567(__this, method) (( Object_t * (*) (Enumerator_t3956 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m26567_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m26568_gshared (Enumerator_t3956 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m26568(__this, method) (( Object_t * (*) (Enumerator_t3956 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m26568_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool Enumerator_MoveNext_m26569_gshared (Enumerator_t3956 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m26569(__this, method) (( bool (*) (Enumerator_t3956 *, const MethodInfo*))Enumerator_MoveNext_m26569_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t3927  Enumerator_get_Current_m26570_gshared (Enumerator_t3956 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m26570(__this, method) (( KeyValuePair_2_t3927  (*) (Enumerator_t3956 *, const MethodInfo*))Enumerator_get_Current_m26570_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m26571_gshared (Enumerator_t3956 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m26571(__this, method) (( Object_t * (*) (Enumerator_t3956 *, const MethodInfo*))Enumerator_get_CurrentKey_m26571_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentValue()
extern "C" KeyValuePair_2_t40  Enumerator_get_CurrentValue_m26572_gshared (Enumerator_t3956 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m26572(__this, method) (( KeyValuePair_2_t40  (*) (Enumerator_t3956 *, const MethodInfo*))Enumerator_get_CurrentValue_m26572_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyState()
extern "C" void Enumerator_VerifyState_m26573_gshared (Enumerator_t3956 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m26573(__this, method) (( void (*) (Enumerator_t3956 *, const MethodInfo*))Enumerator_VerifyState_m26573_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m26574_gshared (Enumerator_t3956 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m26574(__this, method) (( void (*) (Enumerator_t3956 *, const MethodInfo*))Enumerator_VerifyCurrent_m26574_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void Enumerator_Dispose_m26575_gshared (Enumerator_t3956 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m26575(__this, method) (( void (*) (Enumerator_t3956 *, const MethodInfo*))Enumerator_Dispose_m26575_gshared)(__this, method)
