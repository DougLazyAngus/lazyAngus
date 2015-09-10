#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>
struct Enumerator_t6593;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Object>
struct Dictionary_2_t6590;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_40.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m35926_gshared (Enumerator_t6593 * __this, Dictionary_2_t6590 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m35926(__this, ___dictionary, method) (( void (*) (Enumerator_t6593 *, Dictionary_2_t6590 *, const MethodInfo*))Enumerator__ctor_m35926_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m35927_gshared (Enumerator_t6593 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m35927(__this, method) (( Object_t * (*) (Enumerator_t6593 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m35927_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m35928_gshared (Enumerator_t6593 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m35928(__this, method) (( void (*) (Enumerator_t6593 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m35928_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2167  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m35929_gshared (Enumerator_t6593 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m35929(__this, method) (( DictionaryEntry_t2167  (*) (Enumerator_t6593 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m35929_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m35930_gshared (Enumerator_t6593 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m35930(__this, method) (( Object_t * (*) (Enumerator_t6593 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m35930_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m35931_gshared (Enumerator_t6593 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m35931(__this, method) (( Object_t * (*) (Enumerator_t6593 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m35931_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m35932_gshared (Enumerator_t6593 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m35932(__this, method) (( bool (*) (Enumerator_t6593 *, const MethodInfo*))Enumerator_MoveNext_m35932_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::get_Current()
extern "C" KeyValuePair_2_t6585  Enumerator_get_Current_m35933_gshared (Enumerator_t6593 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m35933(__this, method) (( KeyValuePair_2_t6585  (*) (Enumerator_t6593 *, const MethodInfo*))Enumerator_get_Current_m35933_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::get_CurrentKey()
extern "C" int64_t Enumerator_get_CurrentKey_m35934_gshared (Enumerator_t6593 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m35934(__this, method) (( int64_t (*) (Enumerator_t6593 *, const MethodInfo*))Enumerator_get_CurrentKey_m35934_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m35935_gshared (Enumerator_t6593 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m35935(__this, method) (( Object_t * (*) (Enumerator_t6593 *, const MethodInfo*))Enumerator_get_CurrentValue_m35935_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::Reset()
extern "C" void Enumerator_Reset_m35936_gshared (Enumerator_t6593 * __this, const MethodInfo* method);
#define Enumerator_Reset_m35936(__this, method) (( void (*) (Enumerator_t6593 *, const MethodInfo*))Enumerator_Reset_m35936_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m35937_gshared (Enumerator_t6593 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m35937(__this, method) (( void (*) (Enumerator_t6593 *, const MethodInfo*))Enumerator_VerifyState_m35937_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m35938_gshared (Enumerator_t6593 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m35938(__this, method) (( void (*) (Enumerator_t6593 *, const MethodInfo*))Enumerator_VerifyCurrent_m35938_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m35939_gshared (Enumerator_t6593 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m35939(__this, method) (( void (*) (Enumerator_t6593 *, const MethodInfo*))Enumerator_Dispose_m35939_gshared)(__this, method)
