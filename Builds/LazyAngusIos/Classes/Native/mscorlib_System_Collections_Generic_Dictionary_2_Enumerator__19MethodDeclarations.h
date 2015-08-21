#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
struct Enumerator_t5534;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t5529;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_24.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m23873_gshared (Enumerator_t5534 * __this, Dictionary_2_t5529 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m23873(__this, ___dictionary, method) (( void (*) (Enumerator_t5534 *, Dictionary_2_t5529 *, const MethodInfo*))Enumerator__ctor_m23873_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m23874_gshared (Enumerator_t5534 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m23874(__this, method) (( Object_t * (*) (Enumerator_t5534 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m23874_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m23875_gshared (Enumerator_t5534 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m23875(__this, method) (( void (*) (Enumerator_t5534 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m23875_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2137  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m23876_gshared (Enumerator_t5534 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m23876(__this, method) (( DictionaryEntry_t2137  (*) (Enumerator_t5534 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m23876_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m23877_gshared (Enumerator_t5534 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m23877(__this, method) (( Object_t * (*) (Enumerator_t5534 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m23877_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m23878_gshared (Enumerator_t5534 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m23878(__this, method) (( Object_t * (*) (Enumerator_t5534 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m23878_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m23879_gshared (Enumerator_t5534 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m23879(__this, method) (( bool (*) (Enumerator_t5534 *, const MethodInfo*))Enumerator_MoveNext_m23879_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t5530  Enumerator_get_Current_m23880_gshared (Enumerator_t5534 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m23880(__this, method) (( KeyValuePair_2_t5530  (*) (Enumerator_t5534 *, const MethodInfo*))Enumerator_get_Current_m23880_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m23881_gshared (Enumerator_t5534 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m23881(__this, method) (( Object_t * (*) (Enumerator_t5534 *, const MethodInfo*))Enumerator_get_CurrentKey_m23881_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m23882_gshared (Enumerator_t5534 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m23882(__this, method) (( int32_t (*) (Enumerator_t5534 *, const MethodInfo*))Enumerator_get_CurrentValue_m23882_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Reset()
extern "C" void Enumerator_Reset_m23883_gshared (Enumerator_t5534 * __this, const MethodInfo* method);
#define Enumerator_Reset_m23883(__this, method) (( void (*) (Enumerator_t5534 *, const MethodInfo*))Enumerator_Reset_m23883_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m23884_gshared (Enumerator_t5534 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m23884(__this, method) (( void (*) (Enumerator_t5534 *, const MethodInfo*))Enumerator_VerifyState_m23884_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m23885_gshared (Enumerator_t5534 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m23885(__this, method) (( void (*) (Enumerator_t5534 *, const MethodInfo*))Enumerator_VerifyCurrent_m23885_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m23886_gshared (Enumerator_t5534 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m23886(__this, method) (( void (*) (Enumerator_t5534 *, const MethodInfo*))Enumerator_Dispose_m23886_gshared)(__this, method)
