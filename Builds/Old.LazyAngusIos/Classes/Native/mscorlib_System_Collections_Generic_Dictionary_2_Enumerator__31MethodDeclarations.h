﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>
struct Enumerator_t3912;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t3906;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_34.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m25934_gshared (Enumerator_t3912 * __this, Dictionary_2_t3906 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m25934(__this, ___dictionary, method) (( void (*) (Enumerator_t3912 *, Dictionary_2_t3906 *, const MethodInfo*))Enumerator__ctor_m25934_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m25935_gshared (Enumerator_t3912 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m25935(__this, method) (( Object_t * (*) (Enumerator_t3912 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m25935_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1710  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m25936_gshared (Enumerator_t3912 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m25936(__this, method) (( DictionaryEntry_t1710  (*) (Enumerator_t3912 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m25936_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m25937_gshared (Enumerator_t3912 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m25937(__this, method) (( Object_t * (*) (Enumerator_t3912 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m25937_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m25938_gshared (Enumerator_t3912 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m25938(__this, method) (( Object_t * (*) (Enumerator_t3912 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m25938_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m25939_gshared (Enumerator_t3912 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m25939(__this, method) (( bool (*) (Enumerator_t3912 *, const MethodInfo*))Enumerator_MoveNext_m25939_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_Current()
extern "C" KeyValuePair_2_t3907  Enumerator_get_Current_m25940_gshared (Enumerator_t3912 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m25940(__this, method) (( KeyValuePair_2_t3907  (*) (Enumerator_t3912 *, const MethodInfo*))Enumerator_get_Current_m25940_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_CurrentKey()
extern "C" uint64_t Enumerator_get_CurrentKey_m25941_gshared (Enumerator_t3912 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m25941(__this, method) (( uint64_t (*) (Enumerator_t3912 *, const MethodInfo*))Enumerator_get_CurrentKey_m25941_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m25942_gshared (Enumerator_t3912 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m25942(__this, method) (( Object_t * (*) (Enumerator_t3912 *, const MethodInfo*))Enumerator_get_CurrentValue_m25942_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m25943_gshared (Enumerator_t3912 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m25943(__this, method) (( void (*) (Enumerator_t3912 *, const MethodInfo*))Enumerator_VerifyState_m25943_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m25944_gshared (Enumerator_t3912 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m25944(__this, method) (( void (*) (Enumerator_t3912 *, const MethodInfo*))Enumerator_VerifyCurrent_m25944_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m25945_gshared (Enumerator_t3912 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m25945(__this, method) (( void (*) (Enumerator_t3912 *, const MethodInfo*))Enumerator_Dispose_m25945_gshared)(__this, method)