#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>
struct Enumerator_t5552;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>
struct Dictionary_2_t700;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>
struct Dictionary_2_t274;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_28.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__14MethodDeclarations.h"
#define Enumerator__ctor_m24825(__this, ___dictionary, method) (( void (*) (Enumerator_t5552 *, Dictionary_2_t274 *, const MethodInfo*))Enumerator__ctor_m21670_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>::System.Collections.IEnumerator.get_Current()
#define Enumerator_System_Collections_IEnumerator_get_Current_m24826(__this, method) (( Object_t * (*) (Enumerator_t5552 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m21671_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>::System.Collections.IEnumerator.Reset()
#define Enumerator_System_Collections_IEnumerator_Reset_m24827(__this, method) (( void (*) (Enumerator_t5552 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m21672_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>::System.Collections.IDictionaryEnumerator.get_Entry()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m24828(__this, method) (( DictionaryEntry_t2088  (*) (Enumerator_t5552 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m21673_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>::System.Collections.IDictionaryEnumerator.get_Key()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m24829(__this, method) (( Object_t * (*) (Enumerator_t5552 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m21674_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>::System.Collections.IDictionaryEnumerator.get_Value()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m24830(__this, method) (( Object_t * (*) (Enumerator_t5552 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m21675_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>::MoveNext()
#define Enumerator_MoveNext_m24831(__this, method) (( bool (*) (Enumerator_t5552 *, const MethodInfo*))Enumerator_MoveNext_m21676_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>::get_Current()
#define Enumerator_get_Current_m24832(__this, method) (( KeyValuePair_2_t5549  (*) (Enumerator_t5552 *, const MethodInfo*))Enumerator_get_Current_m21677_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>::get_CurrentKey()
#define Enumerator_get_CurrentKey_m24833(__this, method) (( String_t* (*) (Enumerator_t5552 *, const MethodInfo*))Enumerator_get_CurrentKey_m21678_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>::get_CurrentValue()
#define Enumerator_get_CurrentValue_m24834(__this, method) (( Dictionary_2_t700 * (*) (Enumerator_t5552 *, const MethodInfo*))Enumerator_get_CurrentValue_m21679_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>::Reset()
#define Enumerator_Reset_m24835(__this, method) (( void (*) (Enumerator_t5552 *, const MethodInfo*))Enumerator_Reset_m21680_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>::VerifyState()
#define Enumerator_VerifyState_m24836(__this, method) (( void (*) (Enumerator_t5552 *, const MethodInfo*))Enumerator_VerifyState_m21681_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>::VerifyCurrent()
#define Enumerator_VerifyCurrent_m24837(__this, method) (( void (*) (Enumerator_t5552 *, const MethodInfo*))Enumerator_VerifyCurrent_m21682_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>::Dispose()
#define Enumerator_Dispose_m24838(__this, method) (( void (*) (Enumerator_t5552 *, const MethodInfo*))Enumerator_Dispose_m21683_gshared)(__this, method)
