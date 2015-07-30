#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>
struct Enumerator_t5550;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>
struct Dictionary_2_t699;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>
struct Dictionary_2_t274;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_28.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__14MethodDeclarations.h"
#define Enumerator__ctor_m24809(__this, ___dictionary, method) (( void (*) (Enumerator_t5550 *, Dictionary_2_t274 *, const MethodInfo*))Enumerator__ctor_m21654_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>::System.Collections.IEnumerator.get_Current()
#define Enumerator_System_Collections_IEnumerator_get_Current_m24810(__this, method) (( Object_t * (*) (Enumerator_t5550 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m21655_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>::System.Collections.IEnumerator.Reset()
#define Enumerator_System_Collections_IEnumerator_Reset_m24811(__this, method) (( void (*) (Enumerator_t5550 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m21656_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>::System.Collections.IDictionaryEnumerator.get_Entry()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m24812(__this, method) (( DictionaryEntry_t2086  (*) (Enumerator_t5550 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m21657_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>::System.Collections.IDictionaryEnumerator.get_Key()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m24813(__this, method) (( Object_t * (*) (Enumerator_t5550 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m21658_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>::System.Collections.IDictionaryEnumerator.get_Value()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m24814(__this, method) (( Object_t * (*) (Enumerator_t5550 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m21659_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>::MoveNext()
#define Enumerator_MoveNext_m24815(__this, method) (( bool (*) (Enumerator_t5550 *, const MethodInfo*))Enumerator_MoveNext_m21660_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>::get_Current()
#define Enumerator_get_Current_m24816(__this, method) (( KeyValuePair_2_t5547  (*) (Enumerator_t5550 *, const MethodInfo*))Enumerator_get_Current_m21661_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>::get_CurrentKey()
#define Enumerator_get_CurrentKey_m24817(__this, method) (( String_t* (*) (Enumerator_t5550 *, const MethodInfo*))Enumerator_get_CurrentKey_m21662_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>::get_CurrentValue()
#define Enumerator_get_CurrentValue_m24818(__this, method) (( Dictionary_2_t699 * (*) (Enumerator_t5550 *, const MethodInfo*))Enumerator_get_CurrentValue_m21663_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>::Reset()
#define Enumerator_Reset_m24819(__this, method) (( void (*) (Enumerator_t5550 *, const MethodInfo*))Enumerator_Reset_m21664_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>::VerifyState()
#define Enumerator_VerifyState_m24820(__this, method) (( void (*) (Enumerator_t5550 *, const MethodInfo*))Enumerator_VerifyState_m21665_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>::VerifyCurrent()
#define Enumerator_VerifyCurrent_m24821(__this, method) (( void (*) (Enumerator_t5550 *, const MethodInfo*))Enumerator_VerifyCurrent_m21666_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>::Dispose()
#define Enumerator_Dispose_m24822(__this, method) (( void (*) (Enumerator_t5550 *, const MethodInfo*))Enumerator_Dispose_m21667_gshared)(__this, method)
