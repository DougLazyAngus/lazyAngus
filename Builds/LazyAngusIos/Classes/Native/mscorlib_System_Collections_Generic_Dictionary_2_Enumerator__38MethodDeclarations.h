#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>
struct Enumerator_t6133;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>
struct Task_1_t2438;
// System.Collections.Generic.Dictionary`2<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>
struct Dictionary_2_t6123;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_43.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__14MethodDeclarations.h"
#define Enumerator__ctor_m32702(__this, ___dictionary, method) (( void (*) (Enumerator_t6133 *, Dictionary_2_t6123 *, const MethodInfo*))Enumerator__ctor_m21948_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::System.Collections.IEnumerator.get_Current()
#define Enumerator_System_Collections_IEnumerator_get_Current_m32703(__this, method) (( Object_t * (*) (Enumerator_t6133 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m21949_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::System.Collections.IEnumerator.Reset()
#define Enumerator_System_Collections_IEnumerator_Reset_m32704(__this, method) (( void (*) (Enumerator_t6133 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m21950_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::System.Collections.IDictionaryEnumerator.get_Entry()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m32705(__this, method) (( DictionaryEntry_t2140  (*) (Enumerator_t6133 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m21951_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::System.Collections.IDictionaryEnumerator.get_Key()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m32706(__this, method) (( Object_t * (*) (Enumerator_t6133 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m21952_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::System.Collections.IDictionaryEnumerator.get_Value()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m32707(__this, method) (( Object_t * (*) (Enumerator_t6133 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m21953_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::MoveNext()
#define Enumerator_MoveNext_m32708(__this, method) (( bool (*) (Enumerator_t6133 *, const MethodInfo*))Enumerator_MoveNext_m21954_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::get_Current()
#define Enumerator_get_Current_m32709(__this, method) (( KeyValuePair_2_t6130  (*) (Enumerator_t6133 *, const MethodInfo*))Enumerator_get_Current_m21955_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::get_CurrentKey()
#define Enumerator_get_CurrentKey_m32710(__this, method) (( String_t* (*) (Enumerator_t6133 *, const MethodInfo*))Enumerator_get_CurrentKey_m21956_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::get_CurrentValue()
#define Enumerator_get_CurrentValue_m32711(__this, method) (( Task_1_t2438 * (*) (Enumerator_t6133 *, const MethodInfo*))Enumerator_get_CurrentValue_m21957_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::Reset()
#define Enumerator_Reset_m32712(__this, method) (( void (*) (Enumerator_t6133 *, const MethodInfo*))Enumerator_Reset_m21958_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::VerifyState()
#define Enumerator_VerifyState_m32713(__this, method) (( void (*) (Enumerator_t6133 *, const MethodInfo*))Enumerator_VerifyState_m21959_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::VerifyCurrent()
#define Enumerator_VerifyCurrent_m32714(__this, method) (( void (*) (Enumerator_t6133 *, const MethodInfo*))Enumerator_VerifyCurrent_m21960_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::Dispose()
#define Enumerator_Dispose_m32715(__this, method) (( void (*) (Enumerator_t6133 *, const MethodInfo*))Enumerator_Dispose_m21961_gshared)(__this, method)
