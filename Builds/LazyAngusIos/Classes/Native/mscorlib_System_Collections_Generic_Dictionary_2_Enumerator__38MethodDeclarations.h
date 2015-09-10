#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>
struct Enumerator_t6708;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>
struct Task_1_t2465;
// System.Collections.Generic.Dictionary`2<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>
struct Dictionary_2_t6698;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_43.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__14MethodDeclarations.h"
#define Enumerator__ctor_m37349(__this, ___dictionary, method) (( void (*) (Enumerator_t6708 *, Dictionary_2_t6698 *, const MethodInfo*))Enumerator__ctor_m26338_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::System.Collections.IEnumerator.get_Current()
#define Enumerator_System_Collections_IEnumerator_get_Current_m37350(__this, method) (( Object_t * (*) (Enumerator_t6708 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m26339_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::System.Collections.IEnumerator.Reset()
#define Enumerator_System_Collections_IEnumerator_Reset_m37351(__this, method) (( void (*) (Enumerator_t6708 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m26340_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::System.Collections.IDictionaryEnumerator.get_Entry()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m37352(__this, method) (( DictionaryEntry_t2167  (*) (Enumerator_t6708 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m26341_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::System.Collections.IDictionaryEnumerator.get_Key()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m37353(__this, method) (( Object_t * (*) (Enumerator_t6708 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m26342_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::System.Collections.IDictionaryEnumerator.get_Value()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m37354(__this, method) (( Object_t * (*) (Enumerator_t6708 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m26343_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::MoveNext()
#define Enumerator_MoveNext_m37355(__this, method) (( bool (*) (Enumerator_t6708 *, const MethodInfo*))Enumerator_MoveNext_m26344_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::get_Current()
#define Enumerator_get_Current_m37356(__this, method) (( KeyValuePair_2_t6705  (*) (Enumerator_t6708 *, const MethodInfo*))Enumerator_get_Current_m26345_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::get_CurrentKey()
#define Enumerator_get_CurrentKey_m37357(__this, method) (( String_t* (*) (Enumerator_t6708 *, const MethodInfo*))Enumerator_get_CurrentKey_m26346_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::get_CurrentValue()
#define Enumerator_get_CurrentValue_m37358(__this, method) (( Task_1_t2465 * (*) (Enumerator_t6708 *, const MethodInfo*))Enumerator_get_CurrentValue_m26347_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::Reset()
#define Enumerator_Reset_m37359(__this, method) (( void (*) (Enumerator_t6708 *, const MethodInfo*))Enumerator_Reset_m26348_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::VerifyState()
#define Enumerator_VerifyState_m37360(__this, method) (( void (*) (Enumerator_t6708 *, const MethodInfo*))Enumerator_VerifyState_m26349_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::VerifyCurrent()
#define Enumerator_VerifyCurrent_m37361(__this, method) (( void (*) (Enumerator_t6708 *, const MethodInfo*))Enumerator_VerifyCurrent_m26350_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::Dispose()
#define Enumerator_Dispose_m37362(__this, method) (( void (*) (Enumerator_t6708 *, const MethodInfo*))Enumerator_Dispose_m26351_gshared)(__this, method)
