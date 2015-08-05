#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>
struct Enumerator_t8411;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t8406;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_133.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m60926_gshared (Enumerator_t8411 * __this, Dictionary_2_t8406 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m60926(__this, ___dictionary, method) (( void (*) (Enumerator_t8411 *, Dictionary_2_t8406 *, const MethodInfo*))Enumerator__ctor_m60926_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m60927_gshared (Enumerator_t8411 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m60927(__this, method) (( Object_t * (*) (Enumerator_t8411 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m60927_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m60928_gshared (Enumerator_t8411 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m60928(__this, method) (( void (*) (Enumerator_t8411 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m60928_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2089  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m60929_gshared (Enumerator_t8411 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m60929(__this, method) (( DictionaryEntry_t2089  (*) (Enumerator_t8411 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m60929_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m60930_gshared (Enumerator_t8411 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m60930(__this, method) (( Object_t * (*) (Enumerator_t8411 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m60930_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m60931_gshared (Enumerator_t8411 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m60931(__this, method) (( Object_t * (*) (Enumerator_t8411 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m60931_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m60932_gshared (Enumerator_t8411 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m60932(__this, method) (( bool (*) (Enumerator_t8411 *, const MethodInfo*))Enumerator_MoveNext_m60932_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_Current()
extern "C" KeyValuePair_2_t8407  Enumerator_get_Current_m60933_gshared (Enumerator_t8411 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m60933(__this, method) (( KeyValuePair_2_t8407  (*) (Enumerator_t8411 *, const MethodInfo*))Enumerator_get_Current_m60933_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_CurrentKey()
extern "C" uint64_t Enumerator_get_CurrentKey_m60934_gshared (Enumerator_t8411 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m60934(__this, method) (( uint64_t (*) (Enumerator_t8411 *, const MethodInfo*))Enumerator_get_CurrentKey_m60934_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m60935_gshared (Enumerator_t8411 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m60935(__this, method) (( Object_t * (*) (Enumerator_t8411 *, const MethodInfo*))Enumerator_get_CurrentValue_m60935_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::Reset()
extern "C" void Enumerator_Reset_m60936_gshared (Enumerator_t8411 * __this, const MethodInfo* method);
#define Enumerator_Reset_m60936(__this, method) (( void (*) (Enumerator_t8411 *, const MethodInfo*))Enumerator_Reset_m60936_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m60937_gshared (Enumerator_t8411 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m60937(__this, method) (( void (*) (Enumerator_t8411 *, const MethodInfo*))Enumerator_VerifyState_m60937_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m60938_gshared (Enumerator_t8411 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m60938(__this, method) (( void (*) (Enumerator_t8411 *, const MethodInfo*))Enumerator_VerifyCurrent_m60938_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m60939_gshared (Enumerator_t8411 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m60939(__this, method) (( void (*) (Enumerator_t8411 *, const MethodInfo*))Enumerator_Dispose_m60939_gshared)(__this, method)
