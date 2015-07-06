﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>
struct Enumerator_t4036;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1620;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_44.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m27575_gshared (Enumerator_t4036 * __this, Dictionary_2_t1620 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m27575(__this, ___dictionary, method) (( void (*) (Enumerator_t4036 *, Dictionary_2_t1620 *, const MethodInfo*))Enumerator__ctor_m27575_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m27576_gshared (Enumerator_t4036 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m27576(__this, method) (( Object_t * (*) (Enumerator_t4036 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m27576_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1685  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m27577_gshared (Enumerator_t4036 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m27577(__this, method) (( DictionaryEntry_t1685  (*) (Enumerator_t4036 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m27577_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m27578_gshared (Enumerator_t4036 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m27578(__this, method) (( Object_t * (*) (Enumerator_t4036 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m27578_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m27579_gshared (Enumerator_t4036 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m27579(__this, method) (( Object_t * (*) (Enumerator_t4036 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m27579_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m27580_gshared (Enumerator_t4036 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m27580(__this, method) (( bool (*) (Enumerator_t4036 *, const MethodInfo*))Enumerator_MoveNext_m27580_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t4032  Enumerator_get_Current_m27581_gshared (Enumerator_t4036 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m27581(__this, method) (( KeyValuePair_2_t4032  (*) (Enumerator_t4036 *, const MethodInfo*))Enumerator_get_Current_m27581_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m27582_gshared (Enumerator_t4036 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m27582(__this, method) (( int32_t (*) (Enumerator_t4036 *, const MethodInfo*))Enumerator_get_CurrentKey_m27582_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m27583_gshared (Enumerator_t4036 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m27583(__this, method) (( int32_t (*) (Enumerator_t4036 *, const MethodInfo*))Enumerator_get_CurrentValue_m27583_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m27584_gshared (Enumerator_t4036 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m27584(__this, method) (( void (*) (Enumerator_t4036 *, const MethodInfo*))Enumerator_VerifyState_m27584_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m27585_gshared (Enumerator_t4036 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m27585(__this, method) (( void (*) (Enumerator_t4036 *, const MethodInfo*))Enumerator_VerifyCurrent_m27585_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m27586_gshared (Enumerator_t4036 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m27586(__this, method) (( void (*) (Enumerator_t4036 *, const MethodInfo*))Enumerator_Dispose_m27586_gshared)(__this, method)
