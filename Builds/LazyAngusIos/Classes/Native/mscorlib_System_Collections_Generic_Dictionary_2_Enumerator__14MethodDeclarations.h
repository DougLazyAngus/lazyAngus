#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_t5388;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1428;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m21607_gshared (Enumerator_t5388 * __this, Dictionary_2_t1428 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m21607(__this, ___dictionary, method) (( void (*) (Enumerator_t5388 *, Dictionary_2_t1428 *, const MethodInfo*))Enumerator__ctor_m21607_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m21608_gshared (Enumerator_t5388 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m21608(__this, method) (( Object_t * (*) (Enumerator_t5388 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m21608_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m21609_gshared (Enumerator_t5388 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m21609(__this, method) (( void (*) (Enumerator_t5388 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m21609_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2080  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m21610_gshared (Enumerator_t5388 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m21610(__this, method) (( DictionaryEntry_t2080  (*) (Enumerator_t5388 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m21610_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m21611_gshared (Enumerator_t5388 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m21611(__this, method) (( Object_t * (*) (Enumerator_t5388 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m21611_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m21612_gshared (Enumerator_t5388 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m21612(__this, method) (( Object_t * (*) (Enumerator_t5388 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m21612_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m21613_gshared (Enumerator_t5388 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m21613(__this, method) (( bool (*) (Enumerator_t5388 *, const MethodInfo*))Enumerator_MoveNext_m21613_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern "C" KeyValuePair_2_t70  Enumerator_get_Current_m21614_gshared (Enumerator_t5388 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m21614(__this, method) (( KeyValuePair_2_t70  (*) (Enumerator_t5388 *, const MethodInfo*))Enumerator_get_Current_m21614_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m21615_gshared (Enumerator_t5388 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m21615(__this, method) (( Object_t * (*) (Enumerator_t5388 *, const MethodInfo*))Enumerator_get_CurrentKey_m21615_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m21616_gshared (Enumerator_t5388 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m21616(__this, method) (( Object_t * (*) (Enumerator_t5388 *, const MethodInfo*))Enumerator_get_CurrentValue_m21616_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Reset()
extern "C" void Enumerator_Reset_m21617_gshared (Enumerator_t5388 * __this, const MethodInfo* method);
#define Enumerator_Reset_m21617(__this, method) (( void (*) (Enumerator_t5388 *, const MethodInfo*))Enumerator_Reset_m21617_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m21618_gshared (Enumerator_t5388 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m21618(__this, method) (( void (*) (Enumerator_t5388 *, const MethodInfo*))Enumerator_VerifyState_m21618_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m21619_gshared (Enumerator_t5388 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m21619(__this, method) (( void (*) (Enumerator_t5388 *, const MethodInfo*))Enumerator_VerifyCurrent_m21619_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m21620_gshared (Enumerator_t5388 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m21620(__this, method) (( void (*) (Enumerator_t5388 *, const MethodInfo*))Enumerator_Dispose_m21620_gshared)(__this, method)
