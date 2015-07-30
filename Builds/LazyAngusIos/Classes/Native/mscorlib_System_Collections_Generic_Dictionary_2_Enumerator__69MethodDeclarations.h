#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Enumerator_t8447;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t8444;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_135.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m61537_gshared (Enumerator_t8447 * __this, Dictionary_2_t8444 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m61537(__this, ___dictionary, method) (( void (*) (Enumerator_t8447 *, Dictionary_2_t8444 *, const MethodInfo*))Enumerator__ctor_m61537_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m61538_gshared (Enumerator_t8447 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m61538(__this, method) (( Object_t * (*) (Enumerator_t8447 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m61538_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m61539_gshared (Enumerator_t8447 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m61539(__this, method) (( void (*) (Enumerator_t8447 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m61539_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2086  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m61540_gshared (Enumerator_t8447 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m61540(__this, method) (( DictionaryEntry_t2086  (*) (Enumerator_t8447 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m61540_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m61541_gshared (Enumerator_t8447 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m61541(__this, method) (( Object_t * (*) (Enumerator_t8447 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m61541_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m61542_gshared (Enumerator_t8447 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m61542(__this, method) (( Object_t * (*) (Enumerator_t8447 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m61542_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool Enumerator_MoveNext_m61543_gshared (Enumerator_t8447 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m61543(__this, method) (( bool (*) (Enumerator_t8447 *, const MethodInfo*))Enumerator_MoveNext_m61543_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t8420  Enumerator_get_Current_m61544_gshared (Enumerator_t8447 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m61544(__this, method) (( KeyValuePair_2_t8420  (*) (Enumerator_t8447 *, const MethodInfo*))Enumerator_get_Current_m61544_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m61545_gshared (Enumerator_t8447 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m61545(__this, method) (( Object_t * (*) (Enumerator_t8447 *, const MethodInfo*))Enumerator_get_CurrentKey_m61545_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentValue()
extern "C" KeyValuePair_2_t70  Enumerator_get_CurrentValue_m61546_gshared (Enumerator_t8447 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m61546(__this, method) (( KeyValuePair_2_t70  (*) (Enumerator_t8447 *, const MethodInfo*))Enumerator_get_CurrentValue_m61546_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Reset()
extern "C" void Enumerator_Reset_m61547_gshared (Enumerator_t8447 * __this, const MethodInfo* method);
#define Enumerator_Reset_m61547(__this, method) (( void (*) (Enumerator_t8447 *, const MethodInfo*))Enumerator_Reset_m61547_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyState()
extern "C" void Enumerator_VerifyState_m61548_gshared (Enumerator_t8447 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m61548(__this, method) (( void (*) (Enumerator_t8447 *, const MethodInfo*))Enumerator_VerifyState_m61548_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m61549_gshared (Enumerator_t8447 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m61549(__this, method) (( void (*) (Enumerator_t8447 *, const MethodInfo*))Enumerator_VerifyCurrent_m61549_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void Enumerator_Dispose_m61550_gshared (Enumerator_t8447 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m61550(__this, method) (( void (*) (Enumerator_t8447 *, const MethodInfo*))Enumerator_Dispose_m61550_gshared)(__this, method)
