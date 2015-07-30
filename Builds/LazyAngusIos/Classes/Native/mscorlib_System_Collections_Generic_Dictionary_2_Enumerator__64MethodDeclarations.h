#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
struct Enumerator_t8375;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t8372;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m60461_gshared (Enumerator_t8375 * __this, Dictionary_2_t8372 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m60461(__this, ___dictionary, method) (( void (*) (Enumerator_t8375 *, Dictionary_2_t8372 *, const MethodInfo*))Enumerator__ctor_m60461_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m60462_gshared (Enumerator_t8375 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m60462(__this, method) (( Object_t * (*) (Enumerator_t8375 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m60462_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m60463_gshared (Enumerator_t8375 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m60463(__this, method) (( void (*) (Enumerator_t8375 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m60463_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2086  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m60464_gshared (Enumerator_t8375 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m60464(__this, method) (( DictionaryEntry_t2086  (*) (Enumerator_t8375 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m60464_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m60465_gshared (Enumerator_t8375 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m60465(__this, method) (( Object_t * (*) (Enumerator_t8375 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m60465_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m60466_gshared (Enumerator_t8375 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m60466(__this, method) (( Object_t * (*) (Enumerator_t8375 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m60466_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool Enumerator_MoveNext_m60467_gshared (Enumerator_t8375 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m60467(__this, method) (( bool (*) (Enumerator_t8375 *, const MethodInfo*))Enumerator_MoveNext_m60467_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_Current()
extern "C" KeyValuePair_2_t7169  Enumerator_get_Current_m60468_gshared (Enumerator_t8375 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m60468(__this, method) (( KeyValuePair_2_t7169  (*) (Enumerator_t8375 *, const MethodInfo*))Enumerator_get_Current_m60468_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m60469_gshared (Enumerator_t8375 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m60469(__this, method) (( Object_t * (*) (Enumerator_t8375 *, const MethodInfo*))Enumerator_get_CurrentKey_m60469_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentValue()
extern "C" int64_t Enumerator_get_CurrentValue_m60470_gshared (Enumerator_t8375 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m60470(__this, method) (( int64_t (*) (Enumerator_t8375 *, const MethodInfo*))Enumerator_get_CurrentValue_m60470_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::Reset()
extern "C" void Enumerator_Reset_m60471_gshared (Enumerator_t8375 * __this, const MethodInfo* method);
#define Enumerator_Reset_m60471(__this, method) (( void (*) (Enumerator_t8375 *, const MethodInfo*))Enumerator_Reset_m60471_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyState()
extern "C" void Enumerator_VerifyState_m60472_gshared (Enumerator_t8375 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m60472(__this, method) (( void (*) (Enumerator_t8375 *, const MethodInfo*))Enumerator_VerifyState_m60472_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m60473_gshared (Enumerator_t8375 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m60473(__this, method) (( void (*) (Enumerator_t8375 *, const MethodInfo*))Enumerator_VerifyCurrent_m60473_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::Dispose()
extern "C" void Enumerator_Dispose_m60474_gshared (Enumerator_t8375 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m60474(__this, method) (( void (*) (Enumerator_t8375 *, const MethodInfo*))Enumerator_Dispose_m60474_gshared)(__this, method)
