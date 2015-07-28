﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>
struct Enumerator_t8401;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t8396;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_133.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m60856_gshared (Enumerator_t8401 * __this, Dictionary_2_t8396 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m60856(__this, ___dictionary, method) (( void (*) (Enumerator_t8401 *, Dictionary_2_t8396 *, const MethodInfo*))Enumerator__ctor_m60856_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m60857_gshared (Enumerator_t8401 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m60857(__this, method) (( Object_t * (*) (Enumerator_t8401 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m60857_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m60858_gshared (Enumerator_t8401 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m60858(__this, method) (( void (*) (Enumerator_t8401 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m60858_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2080  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m60859_gshared (Enumerator_t8401 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m60859(__this, method) (( DictionaryEntry_t2080  (*) (Enumerator_t8401 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m60859_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m60860_gshared (Enumerator_t8401 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m60860(__this, method) (( Object_t * (*) (Enumerator_t8401 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m60860_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m60861_gshared (Enumerator_t8401 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m60861(__this, method) (( Object_t * (*) (Enumerator_t8401 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m60861_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m60862_gshared (Enumerator_t8401 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m60862(__this, method) (( bool (*) (Enumerator_t8401 *, const MethodInfo*))Enumerator_MoveNext_m60862_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_Current()
extern "C" KeyValuePair_2_t8397  Enumerator_get_Current_m60863_gshared (Enumerator_t8401 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m60863(__this, method) (( KeyValuePair_2_t8397  (*) (Enumerator_t8401 *, const MethodInfo*))Enumerator_get_Current_m60863_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_CurrentKey()
extern "C" uint64_t Enumerator_get_CurrentKey_m60864_gshared (Enumerator_t8401 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m60864(__this, method) (( uint64_t (*) (Enumerator_t8401 *, const MethodInfo*))Enumerator_get_CurrentKey_m60864_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m60865_gshared (Enumerator_t8401 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m60865(__this, method) (( Object_t * (*) (Enumerator_t8401 *, const MethodInfo*))Enumerator_get_CurrentValue_m60865_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::Reset()
extern "C" void Enumerator_Reset_m60866_gshared (Enumerator_t8401 * __this, const MethodInfo* method);
#define Enumerator_Reset_m60866(__this, method) (( void (*) (Enumerator_t8401 *, const MethodInfo*))Enumerator_Reset_m60866_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m60867_gshared (Enumerator_t8401 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m60867(__this, method) (( void (*) (Enumerator_t8401 *, const MethodInfo*))Enumerator_VerifyState_m60867_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m60868_gshared (Enumerator_t8401 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m60868(__this, method) (( void (*) (Enumerator_t8401 *, const MethodInfo*))Enumerator_VerifyCurrent_m60868_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m60869_gshared (Enumerator_t8401 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m60869(__this, method) (( void (*) (Enumerator_t8401 *, const MethodInfo*))Enumerator_Dispose_m60869_gshared)(__this, method)
