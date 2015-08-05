#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>
struct Enumerator_t8412;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t8407;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_133.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m60931_gshared (Enumerator_t8412 * __this, Dictionary_2_t8407 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m60931(__this, ___dictionary, method) (( void (*) (Enumerator_t8412 *, Dictionary_2_t8407 *, const MethodInfo*))Enumerator__ctor_m60931_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m60932_gshared (Enumerator_t8412 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m60932(__this, method) (( Object_t * (*) (Enumerator_t8412 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m60932_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m60933_gshared (Enumerator_t8412 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m60933(__this, method) (( void (*) (Enumerator_t8412 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m60933_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2090  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m60934_gshared (Enumerator_t8412 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m60934(__this, method) (( DictionaryEntry_t2090  (*) (Enumerator_t8412 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m60934_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m60935_gshared (Enumerator_t8412 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m60935(__this, method) (( Object_t * (*) (Enumerator_t8412 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m60935_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m60936_gshared (Enumerator_t8412 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m60936(__this, method) (( Object_t * (*) (Enumerator_t8412 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m60936_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m60937_gshared (Enumerator_t8412 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m60937(__this, method) (( bool (*) (Enumerator_t8412 *, const MethodInfo*))Enumerator_MoveNext_m60937_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_Current()
extern "C" KeyValuePair_2_t8408  Enumerator_get_Current_m60938_gshared (Enumerator_t8412 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m60938(__this, method) (( KeyValuePair_2_t8408  (*) (Enumerator_t8412 *, const MethodInfo*))Enumerator_get_Current_m60938_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_CurrentKey()
extern "C" uint64_t Enumerator_get_CurrentKey_m60939_gshared (Enumerator_t8412 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m60939(__this, method) (( uint64_t (*) (Enumerator_t8412 *, const MethodInfo*))Enumerator_get_CurrentKey_m60939_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m60940_gshared (Enumerator_t8412 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m60940(__this, method) (( Object_t * (*) (Enumerator_t8412 *, const MethodInfo*))Enumerator_get_CurrentValue_m60940_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::Reset()
extern "C" void Enumerator_Reset_m60941_gshared (Enumerator_t8412 * __this, const MethodInfo* method);
#define Enumerator_Reset_m60941(__this, method) (( void (*) (Enumerator_t8412 *, const MethodInfo*))Enumerator_Reset_m60941_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m60942_gshared (Enumerator_t8412 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m60942(__this, method) (( void (*) (Enumerator_t8412 *, const MethodInfo*))Enumerator_VerifyState_m60942_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m60943_gshared (Enumerator_t8412 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m60943(__this, method) (( void (*) (Enumerator_t8412 *, const MethodInfo*))Enumerator_VerifyCurrent_m60943_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m60944_gshared (Enumerator_t8412 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m60944(__this, method) (( void (*) (Enumerator_t8412 *, const MethodInfo*))Enumerator_Dispose_m60944_gshared)(__this, method)
