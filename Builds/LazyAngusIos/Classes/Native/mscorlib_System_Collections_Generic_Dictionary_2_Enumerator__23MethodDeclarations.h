#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>
struct Enumerator_t5598;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>
struct Dictionary_2_t749;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>
struct Dictionary_2_t274;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_28.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__14MethodDeclarations.h"
#define Enumerator__ctor_m25081(__this, ___dictionary, method) (( void (*) (Enumerator_t5598 *, Dictionary_2_t274 *, const MethodInfo*))Enumerator__ctor_m21926_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>::System.Collections.IEnumerator.get_Current()
#define Enumerator_System_Collections_IEnumerator_get_Current_m25082(__this, method) (( Object_t * (*) (Enumerator_t5598 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m21927_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>::System.Collections.IEnumerator.Reset()
#define Enumerator_System_Collections_IEnumerator_Reset_m25083(__this, method) (( void (*) (Enumerator_t5598 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m21928_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>::System.Collections.IDictionaryEnumerator.get_Entry()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m25084(__this, method) (( DictionaryEntry_t2139  (*) (Enumerator_t5598 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m21929_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>::System.Collections.IDictionaryEnumerator.get_Key()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m25085(__this, method) (( Object_t * (*) (Enumerator_t5598 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m21930_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>::System.Collections.IDictionaryEnumerator.get_Value()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m25086(__this, method) (( Object_t * (*) (Enumerator_t5598 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m21931_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>::MoveNext()
#define Enumerator_MoveNext_m25087(__this, method) (( bool (*) (Enumerator_t5598 *, const MethodInfo*))Enumerator_MoveNext_m21932_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>::get_Current()
#define Enumerator_get_Current_m25088(__this, method) (( KeyValuePair_2_t5595  (*) (Enumerator_t5598 *, const MethodInfo*))Enumerator_get_Current_m21933_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>::get_CurrentKey()
#define Enumerator_get_CurrentKey_m25089(__this, method) (( String_t* (*) (Enumerator_t5598 *, const MethodInfo*))Enumerator_get_CurrentKey_m21934_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>::get_CurrentValue()
#define Enumerator_get_CurrentValue_m25090(__this, method) (( Dictionary_2_t749 * (*) (Enumerator_t5598 *, const MethodInfo*))Enumerator_get_CurrentValue_m21935_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>::Reset()
#define Enumerator_Reset_m25091(__this, method) (( void (*) (Enumerator_t5598 *, const MethodInfo*))Enumerator_Reset_m21936_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>::VerifyState()
#define Enumerator_VerifyState_m25092(__this, method) (( void (*) (Enumerator_t5598 *, const MethodInfo*))Enumerator_VerifyState_m21937_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>::VerifyCurrent()
#define Enumerator_VerifyCurrent_m25093(__this, method) (( void (*) (Enumerator_t5598 *, const MethodInfo*))Enumerator_VerifyCurrent_m21938_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>::Dispose()
#define Enumerator_Dispose_m25094(__this, method) (( void (*) (Enumerator_t5598 *, const MethodInfo*))Enumerator_Dispose_m21939_gshared)(__this, method)
