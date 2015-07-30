#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>
struct Enumerator_t6051;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>
struct Task_1_t2384;
// System.Collections.Generic.Dictionary`2<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>
struct Dictionary_2_t6041;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_42.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__14MethodDeclarations.h"
#define Enumerator__ctor_m31874(__this, ___dictionary, method) (( void (*) (Enumerator_t6051 *, Dictionary_2_t6041 *, const MethodInfo*))Enumerator__ctor_m21654_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::System.Collections.IEnumerator.get_Current()
#define Enumerator_System_Collections_IEnumerator_get_Current_m31875(__this, method) (( Object_t * (*) (Enumerator_t6051 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m21655_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::System.Collections.IEnumerator.Reset()
#define Enumerator_System_Collections_IEnumerator_Reset_m31876(__this, method) (( void (*) (Enumerator_t6051 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m21656_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::System.Collections.IDictionaryEnumerator.get_Entry()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m31877(__this, method) (( DictionaryEntry_t2086  (*) (Enumerator_t6051 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m21657_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::System.Collections.IDictionaryEnumerator.get_Key()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m31878(__this, method) (( Object_t * (*) (Enumerator_t6051 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m21658_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::System.Collections.IDictionaryEnumerator.get_Value()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m31879(__this, method) (( Object_t * (*) (Enumerator_t6051 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m21659_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::MoveNext()
#define Enumerator_MoveNext_m31880(__this, method) (( bool (*) (Enumerator_t6051 *, const MethodInfo*))Enumerator_MoveNext_m21660_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::get_Current()
#define Enumerator_get_Current_m31881(__this, method) (( KeyValuePair_2_t6048  (*) (Enumerator_t6051 *, const MethodInfo*))Enumerator_get_Current_m21661_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::get_CurrentKey()
#define Enumerator_get_CurrentKey_m31882(__this, method) (( String_t* (*) (Enumerator_t6051 *, const MethodInfo*))Enumerator_get_CurrentKey_m21662_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::get_CurrentValue()
#define Enumerator_get_CurrentValue_m31883(__this, method) (( Task_1_t2384 * (*) (Enumerator_t6051 *, const MethodInfo*))Enumerator_get_CurrentValue_m21663_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::Reset()
#define Enumerator_Reset_m31884(__this, method) (( void (*) (Enumerator_t6051 *, const MethodInfo*))Enumerator_Reset_m21664_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::VerifyState()
#define Enumerator_VerifyState_m31885(__this, method) (( void (*) (Enumerator_t6051 *, const MethodInfo*))Enumerator_VerifyState_m21665_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::VerifyCurrent()
#define Enumerator_VerifyCurrent_m31886(__this, method) (( void (*) (Enumerator_t6051 *, const MethodInfo*))Enumerator_VerifyCurrent_m21666_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::Dispose()
#define Enumerator_Dispose_m31887(__this, method) (( void (*) (Enumerator_t6051 *, const MethodInfo*))Enumerator_Dispose_m21667_gshared)(__this, method)
