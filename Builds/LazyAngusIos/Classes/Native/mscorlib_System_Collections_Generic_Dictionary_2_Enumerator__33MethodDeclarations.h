#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
struct Enumerator_t3949;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t3943;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_36.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m26565_gshared (Enumerator_t3949 * __this, Dictionary_2_t3943 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m26565(__this, ___dictionary, method) (( void (*) (Enumerator_t3949 *, Dictionary_2_t3943 *, const MethodInfo*))Enumerator__ctor_m26565_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m26566_gshared (Enumerator_t3949 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m26566(__this, method) (( Object_t * (*) (Enumerator_t3949 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m26566_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2180  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m26567_gshared (Enumerator_t3949 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m26567(__this, method) (( DictionaryEntry_t2180  (*) (Enumerator_t3949 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m26567_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m26568_gshared (Enumerator_t3949 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m26568(__this, method) (( Object_t * (*) (Enumerator_t3949 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m26568_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m26569_gshared (Enumerator_t3949 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m26569(__this, method) (( Object_t * (*) (Enumerator_t3949 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m26569_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool Enumerator_MoveNext_m26570_gshared (Enumerator_t3949 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m26570(__this, method) (( bool (*) (Enumerator_t3949 *, const MethodInfo*))Enumerator_MoveNext_m26570_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_Current()
extern "C" KeyValuePair_2_t3944  Enumerator_get_Current_m26571_gshared (Enumerator_t3949 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m26571(__this, method) (( KeyValuePair_2_t3944  (*) (Enumerator_t3949 *, const MethodInfo*))Enumerator_get_Current_m26571_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m26572_gshared (Enumerator_t3949 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m26572(__this, method) (( Object_t * (*) (Enumerator_t3949 *, const MethodInfo*))Enumerator_get_CurrentKey_m26572_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentValue()
extern "C" int64_t Enumerator_get_CurrentValue_m26573_gshared (Enumerator_t3949 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m26573(__this, method) (( int64_t (*) (Enumerator_t3949 *, const MethodInfo*))Enumerator_get_CurrentValue_m26573_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyState()
extern "C" void Enumerator_VerifyState_m26574_gshared (Enumerator_t3949 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m26574(__this, method) (( void (*) (Enumerator_t3949 *, const MethodInfo*))Enumerator_VerifyState_m26574_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m26575_gshared (Enumerator_t3949 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m26575(__this, method) (( void (*) (Enumerator_t3949 *, const MethodInfo*))Enumerator_VerifyCurrent_m26575_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::Dispose()
extern "C" void Enumerator_Dispose_m26576_gshared (Enumerator_t3949 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m26576(__this, method) (( void (*) (Enumerator_t3949 *, const MethodInfo*))Enumerator_Dispose_m26576_gshared)(__this, method)
