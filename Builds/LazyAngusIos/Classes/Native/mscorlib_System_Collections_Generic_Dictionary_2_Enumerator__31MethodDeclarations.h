#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>
struct Enumerator_t3893;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t3887;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_34.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m25878_gshared (Enumerator_t3893 * __this, Dictionary_2_t3887 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m25878(__this, ___dictionary, method) (( void (*) (Enumerator_t3893 *, Dictionary_2_t3887 *, const MethodInfo*))Enumerator__ctor_m25878_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m25879_gshared (Enumerator_t3893 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m25879(__this, method) (( Object_t * (*) (Enumerator_t3893 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m25879_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1685  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m25880_gshared (Enumerator_t3893 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m25880(__this, method) (( DictionaryEntry_t1685  (*) (Enumerator_t3893 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m25880_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m25881_gshared (Enumerator_t3893 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m25881(__this, method) (( Object_t * (*) (Enumerator_t3893 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m25881_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m25882_gshared (Enumerator_t3893 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m25882(__this, method) (( Object_t * (*) (Enumerator_t3893 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m25882_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m25883_gshared (Enumerator_t3893 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m25883(__this, method) (( bool (*) (Enumerator_t3893 *, const MethodInfo*))Enumerator_MoveNext_m25883_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_Current()
extern "C" KeyValuePair_2_t3888  Enumerator_get_Current_m25884_gshared (Enumerator_t3893 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m25884(__this, method) (( KeyValuePair_2_t3888  (*) (Enumerator_t3893 *, const MethodInfo*))Enumerator_get_Current_m25884_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_CurrentKey()
extern "C" uint64_t Enumerator_get_CurrentKey_m25885_gshared (Enumerator_t3893 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m25885(__this, method) (( uint64_t (*) (Enumerator_t3893 *, const MethodInfo*))Enumerator_get_CurrentKey_m25885_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m25886_gshared (Enumerator_t3893 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m25886(__this, method) (( Object_t * (*) (Enumerator_t3893 *, const MethodInfo*))Enumerator_get_CurrentValue_m25886_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m25887_gshared (Enumerator_t3893 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m25887(__this, method) (( void (*) (Enumerator_t3893 *, const MethodInfo*))Enumerator_VerifyState_m25887_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m25888_gshared (Enumerator_t3893 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m25888(__this, method) (( void (*) (Enumerator_t3893 *, const MethodInfo*))Enumerator_VerifyCurrent_m25888_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m25889_gshared (Enumerator_t3893 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m25889(__this, method) (( void (*) (Enumerator_t3893 *, const MethodInfo*))Enumerator_Dispose_m25889_gshared)(__this, method)
