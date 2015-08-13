﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>
struct Enumerator_t8648;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t4124;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_143.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m63875_gshared (Enumerator_t8648 * __this, Dictionary_2_t4124 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m63875(__this, ___dictionary, method) (( void (*) (Enumerator_t8648 *, Dictionary_2_t4124 *, const MethodInfo*))Enumerator__ctor_m63875_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m63876_gshared (Enumerator_t8648 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m63876(__this, method) (( Object_t * (*) (Enumerator_t8648 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m63876_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m63877_gshared (Enumerator_t8648 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m63877(__this, method) (( void (*) (Enumerator_t8648 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m63877_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2139  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m63878_gshared (Enumerator_t8648 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m63878(__this, method) (( DictionaryEntry_t2139  (*) (Enumerator_t8648 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m63878_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m63879_gshared (Enumerator_t8648 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m63879(__this, method) (( Object_t * (*) (Enumerator_t8648 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m63879_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m63880_gshared (Enumerator_t8648 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m63880(__this, method) (( Object_t * (*) (Enumerator_t8648 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m63880_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m63881_gshared (Enumerator_t8648 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m63881(__this, method) (( bool (*) (Enumerator_t8648 *, const MethodInfo*))Enumerator_MoveNext_m63881_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t8644  Enumerator_get_Current_m63882_gshared (Enumerator_t8648 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m63882(__this, method) (( KeyValuePair_2_t8644  (*) (Enumerator_t8648 *, const MethodInfo*))Enumerator_get_Current_m63882_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m63883_gshared (Enumerator_t8648 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m63883(__this, method) (( int32_t (*) (Enumerator_t8648 *, const MethodInfo*))Enumerator_get_CurrentKey_m63883_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m63884_gshared (Enumerator_t8648 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m63884(__this, method) (( int32_t (*) (Enumerator_t8648 *, const MethodInfo*))Enumerator_get_CurrentValue_m63884_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::Reset()
extern "C" void Enumerator_Reset_m63885_gshared (Enumerator_t8648 * __this, const MethodInfo* method);
#define Enumerator_Reset_m63885(__this, method) (( void (*) (Enumerator_t8648 *, const MethodInfo*))Enumerator_Reset_m63885_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m63886_gshared (Enumerator_t8648 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m63886(__this, method) (( void (*) (Enumerator_t8648 *, const MethodInfo*))Enumerator_VerifyState_m63886_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m63887_gshared (Enumerator_t8648 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m63887(__this, method) (( void (*) (Enumerator_t8648 *, const MethodInfo*))Enumerator_VerifyCurrent_m63887_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m63888_gshared (Enumerator_t8648 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m63888(__this, method) (( void (*) (Enumerator_t8648 *, const MethodInfo*))Enumerator_Dispose_m63888_gshared)(__this, method)