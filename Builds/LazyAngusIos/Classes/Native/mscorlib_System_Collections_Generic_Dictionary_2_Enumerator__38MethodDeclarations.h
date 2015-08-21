#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>
struct Enumerator_t6130;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>
struct Task_1_t2435;
// System.Collections.Generic.Dictionary`2<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>
struct Dictionary_2_t6120;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_43.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__14MethodDeclarations.h"
#define Enumerator__ctor_m32670(__this, ___dictionary, method) (( void (*) (Enumerator_t6130 *, Dictionary_2_t6120 *, const MethodInfo*))Enumerator__ctor_m21916_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::System.Collections.IEnumerator.get_Current()
#define Enumerator_System_Collections_IEnumerator_get_Current_m32671(__this, method) (( Object_t * (*) (Enumerator_t6130 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m21917_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::System.Collections.IEnumerator.Reset()
#define Enumerator_System_Collections_IEnumerator_Reset_m32672(__this, method) (( void (*) (Enumerator_t6130 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m21918_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::System.Collections.IDictionaryEnumerator.get_Entry()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m32673(__this, method) (( DictionaryEntry_t2137  (*) (Enumerator_t6130 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m21919_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::System.Collections.IDictionaryEnumerator.get_Key()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m32674(__this, method) (( Object_t * (*) (Enumerator_t6130 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m21920_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::System.Collections.IDictionaryEnumerator.get_Value()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m32675(__this, method) (( Object_t * (*) (Enumerator_t6130 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m21921_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::MoveNext()
#define Enumerator_MoveNext_m32676(__this, method) (( bool (*) (Enumerator_t6130 *, const MethodInfo*))Enumerator_MoveNext_m21922_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::get_Current()
#define Enumerator_get_Current_m32677(__this, method) (( KeyValuePair_2_t6127  (*) (Enumerator_t6130 *, const MethodInfo*))Enumerator_get_Current_m21923_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::get_CurrentKey()
#define Enumerator_get_CurrentKey_m32678(__this, method) (( String_t* (*) (Enumerator_t6130 *, const MethodInfo*))Enumerator_get_CurrentKey_m21924_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::get_CurrentValue()
#define Enumerator_get_CurrentValue_m32679(__this, method) (( Task_1_t2435 * (*) (Enumerator_t6130 *, const MethodInfo*))Enumerator_get_CurrentValue_m21925_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::Reset()
#define Enumerator_Reset_m32680(__this, method) (( void (*) (Enumerator_t6130 *, const MethodInfo*))Enumerator_Reset_m21926_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::VerifyState()
#define Enumerator_VerifyState_m32681(__this, method) (( void (*) (Enumerator_t6130 *, const MethodInfo*))Enumerator_VerifyState_m21927_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::VerifyCurrent()
#define Enumerator_VerifyCurrent_m32682(__this, method) (( void (*) (Enumerator_t6130 *, const MethodInfo*))Enumerator_VerifyCurrent_m21928_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::Dispose()
#define Enumerator_Dispose_m32683(__this, method) (( void (*) (Enumerator_t6130 *, const MethodInfo*))Enumerator_Dispose_m21929_gshared)(__this, method)
