#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>
struct Enumerator_t6989;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Single>
struct Dictionary_2_t6986;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_52.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m43855_gshared (Enumerator_t6989 * __this, Dictionary_2_t6986 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m43855(__this, ___dictionary, method) (( void (*) (Enumerator_t6989 *, Dictionary_2_t6986 *, const MethodInfo*))Enumerator__ctor_m43855_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m43857_gshared (Enumerator_t6989 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m43857(__this, method) (( Object_t * (*) (Enumerator_t6989 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m43857_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m43859_gshared (Enumerator_t6989 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m43859(__this, method) (( void (*) (Enumerator_t6989 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m43859_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2086  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m43861_gshared (Enumerator_t6989 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m43861(__this, method) (( DictionaryEntry_t2086  (*) (Enumerator_t6989 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m43861_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m43863_gshared (Enumerator_t6989 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m43863(__this, method) (( Object_t * (*) (Enumerator_t6989 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m43863_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m43865_gshared (Enumerator_t6989 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m43865(__this, method) (( Object_t * (*) (Enumerator_t6989 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m43865_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::MoveNext()
extern "C" bool Enumerator_MoveNext_m43867_gshared (Enumerator_t6989 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m43867(__this, method) (( bool (*) (Enumerator_t6989 *, const MethodInfo*))Enumerator_MoveNext_m43867_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::get_Current()
extern "C" KeyValuePair_2_t6926  Enumerator_get_Current_m43869_gshared (Enumerator_t6989 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m43869(__this, method) (( KeyValuePair_2_t6926  (*) (Enumerator_t6989 *, const MethodInfo*))Enumerator_get_Current_m43869_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m43871_gshared (Enumerator_t6989 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m43871(__this, method) (( Object_t * (*) (Enumerator_t6989 *, const MethodInfo*))Enumerator_get_CurrentKey_m43871_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::get_CurrentValue()
extern "C" float Enumerator_get_CurrentValue_m43873_gshared (Enumerator_t6989 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m43873(__this, method) (( float (*) (Enumerator_t6989 *, const MethodInfo*))Enumerator_get_CurrentValue_m43873_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::Reset()
extern "C" void Enumerator_Reset_m43875_gshared (Enumerator_t6989 * __this, const MethodInfo* method);
#define Enumerator_Reset_m43875(__this, method) (( void (*) (Enumerator_t6989 *, const MethodInfo*))Enumerator_Reset_m43875_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::VerifyState()
extern "C" void Enumerator_VerifyState_m43877_gshared (Enumerator_t6989 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m43877(__this, method) (( void (*) (Enumerator_t6989 *, const MethodInfo*))Enumerator_VerifyState_m43877_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m43879_gshared (Enumerator_t6989 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m43879(__this, method) (( void (*) (Enumerator_t6989 *, const MethodInfo*))Enumerator_VerifyCurrent_m43879_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::Dispose()
extern "C" void Enumerator_Dispose_m43881_gshared (Enumerator_t6989 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m43881(__this, method) (( void (*) (Enumerator_t6989 *, const MethodInfo*))Enumerator_Dispose_m43881_gshared)(__this, method)
