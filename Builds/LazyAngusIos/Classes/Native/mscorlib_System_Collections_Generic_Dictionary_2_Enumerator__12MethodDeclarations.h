#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
struct Enumerator_t5420;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2870;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_18.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m21398_gshared (Enumerator_t5420 * __this, Dictionary_2_t2870 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m21398(__this, ___dictionary, method) (( void (*) (Enumerator_t5420 *, Dictionary_2_t2870 *, const MethodInfo*))Enumerator__ctor_m21398_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m21399_gshared (Enumerator_t5420 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m21399(__this, method) (( Object_t * (*) (Enumerator_t5420 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m21399_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m21400_gshared (Enumerator_t5420 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m21400(__this, method) (( void (*) (Enumerator_t5420 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m21400_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2156  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m21401_gshared (Enumerator_t5420 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m21401(__this, method) (( DictionaryEntry_t2156  (*) (Enumerator_t5420 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m21401_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m21402_gshared (Enumerator_t5420 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m21402(__this, method) (( Object_t * (*) (Enumerator_t5420 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m21402_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m21403_gshared (Enumerator_t5420 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m21403(__this, method) (( Object_t * (*) (Enumerator_t5420 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m21403_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m21404_gshared (Enumerator_t5420 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m21404(__this, method) (( bool (*) (Enumerator_t5420 *, const MethodInfo*))Enumerator_MoveNext_m21404_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" KeyValuePair_2_t5412  Enumerator_get_Current_m21405_gshared (Enumerator_t5420 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m21405(__this, method) (( KeyValuePair_2_t5412  (*) (Enumerator_t5420 *, const MethodInfo*))Enumerator_get_Current_m21405_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m21406_gshared (Enumerator_t5420 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m21406(__this, method) (( int32_t (*) (Enumerator_t5420 *, const MethodInfo*))Enumerator_get_CurrentKey_m21406_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m21407_gshared (Enumerator_t5420 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m21407(__this, method) (( Object_t * (*) (Enumerator_t5420 *, const MethodInfo*))Enumerator_get_CurrentValue_m21407_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Reset()
extern "C" void Enumerator_Reset_m21408_gshared (Enumerator_t5420 * __this, const MethodInfo* method);
#define Enumerator_Reset_m21408(__this, method) (( void (*) (Enumerator_t5420 *, const MethodInfo*))Enumerator_Reset_m21408_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m21409_gshared (Enumerator_t5420 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m21409(__this, method) (( void (*) (Enumerator_t5420 *, const MethodInfo*))Enumerator_VerifyState_m21409_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m21410_gshared (Enumerator_t5420 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m21410(__this, method) (( void (*) (Enumerator_t5420 *, const MethodInfo*))Enumerator_VerifyCurrent_m21410_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m21411_gshared (Enumerator_t5420 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m21411(__this, method) (( void (*) (Enumerator_t5420 *, const MethodInfo*))Enumerator_Dispose_m21411_gshared)(__this, method)
