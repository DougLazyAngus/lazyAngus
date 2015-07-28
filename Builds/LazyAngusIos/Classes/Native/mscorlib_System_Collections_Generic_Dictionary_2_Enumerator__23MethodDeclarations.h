#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>
struct Enumerator_t5543;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>
struct Dictionary_2_t692;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>
struct Dictionary_2_t274;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_28.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__14MethodDeclarations.h"
#define Enumerator__ctor_m24762(__this, ___dictionary, method) (( void (*) (Enumerator_t5543 *, Dictionary_2_t274 *, const MethodInfo*))Enumerator__ctor_m21607_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>::System.Collections.IEnumerator.get_Current()
#define Enumerator_System_Collections_IEnumerator_get_Current_m24763(__this, method) (( Object_t * (*) (Enumerator_t5543 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m21608_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>::System.Collections.IEnumerator.Reset()
#define Enumerator_System_Collections_IEnumerator_Reset_m24764(__this, method) (( void (*) (Enumerator_t5543 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m21609_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>::System.Collections.IDictionaryEnumerator.get_Entry()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m24765(__this, method) (( DictionaryEntry_t2080  (*) (Enumerator_t5543 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m21610_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>::System.Collections.IDictionaryEnumerator.get_Key()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m24766(__this, method) (( Object_t * (*) (Enumerator_t5543 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m21611_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>::System.Collections.IDictionaryEnumerator.get_Value()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m24767(__this, method) (( Object_t * (*) (Enumerator_t5543 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m21612_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>::MoveNext()
#define Enumerator_MoveNext_m24768(__this, method) (( bool (*) (Enumerator_t5543 *, const MethodInfo*))Enumerator_MoveNext_m21613_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>::get_Current()
#define Enumerator_get_Current_m24769(__this, method) (( KeyValuePair_2_t5540  (*) (Enumerator_t5543 *, const MethodInfo*))Enumerator_get_Current_m21614_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>::get_CurrentKey()
#define Enumerator_get_CurrentKey_m24770(__this, method) (( String_t* (*) (Enumerator_t5543 *, const MethodInfo*))Enumerator_get_CurrentKey_m21615_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>::get_CurrentValue()
#define Enumerator_get_CurrentValue_m24771(__this, method) (( Dictionary_2_t692 * (*) (Enumerator_t5543 *, const MethodInfo*))Enumerator_get_CurrentValue_m21616_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>::Reset()
#define Enumerator_Reset_m24772(__this, method) (( void (*) (Enumerator_t5543 *, const MethodInfo*))Enumerator_Reset_m21617_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>::VerifyState()
#define Enumerator_VerifyState_m24773(__this, method) (( void (*) (Enumerator_t5543 *, const MethodInfo*))Enumerator_VerifyState_m21618_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>::VerifyCurrent()
#define Enumerator_VerifyCurrent_m24774(__this, method) (( void (*) (Enumerator_t5543 *, const MethodInfo*))Enumerator_VerifyCurrent_m21619_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>::Dispose()
#define Enumerator_Dispose_m24775(__this, method) (( void (*) (Enumerator_t5543 *, const MethodInfo*))Enumerator_Dispose_m21620_gshared)(__this, method)
