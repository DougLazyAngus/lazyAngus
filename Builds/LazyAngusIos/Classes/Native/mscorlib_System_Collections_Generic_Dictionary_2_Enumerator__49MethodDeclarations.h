#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>
struct Enumerator_t6982;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Single>
struct Dictionary_2_t6979;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_52.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m43808_gshared (Enumerator_t6982 * __this, Dictionary_2_t6979 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m43808(__this, ___dictionary, method) (( void (*) (Enumerator_t6982 *, Dictionary_2_t6979 *, const MethodInfo*))Enumerator__ctor_m43808_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m43810_gshared (Enumerator_t6982 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m43810(__this, method) (( Object_t * (*) (Enumerator_t6982 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m43810_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m43812_gshared (Enumerator_t6982 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m43812(__this, method) (( void (*) (Enumerator_t6982 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m43812_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2080  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m43814_gshared (Enumerator_t6982 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m43814(__this, method) (( DictionaryEntry_t2080  (*) (Enumerator_t6982 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m43814_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m43816_gshared (Enumerator_t6982 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m43816(__this, method) (( Object_t * (*) (Enumerator_t6982 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m43816_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m43818_gshared (Enumerator_t6982 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m43818(__this, method) (( Object_t * (*) (Enumerator_t6982 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m43818_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::MoveNext()
extern "C" bool Enumerator_MoveNext_m43820_gshared (Enumerator_t6982 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m43820(__this, method) (( bool (*) (Enumerator_t6982 *, const MethodInfo*))Enumerator_MoveNext_m43820_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::get_Current()
extern "C" KeyValuePair_2_t6919  Enumerator_get_Current_m43822_gshared (Enumerator_t6982 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m43822(__this, method) (( KeyValuePair_2_t6919  (*) (Enumerator_t6982 *, const MethodInfo*))Enumerator_get_Current_m43822_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m43824_gshared (Enumerator_t6982 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m43824(__this, method) (( Object_t * (*) (Enumerator_t6982 *, const MethodInfo*))Enumerator_get_CurrentKey_m43824_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::get_CurrentValue()
extern "C" float Enumerator_get_CurrentValue_m43826_gshared (Enumerator_t6982 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m43826(__this, method) (( float (*) (Enumerator_t6982 *, const MethodInfo*))Enumerator_get_CurrentValue_m43826_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::Reset()
extern "C" void Enumerator_Reset_m43828_gshared (Enumerator_t6982 * __this, const MethodInfo* method);
#define Enumerator_Reset_m43828(__this, method) (( void (*) (Enumerator_t6982 *, const MethodInfo*))Enumerator_Reset_m43828_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::VerifyState()
extern "C" void Enumerator_VerifyState_m43830_gshared (Enumerator_t6982 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m43830(__this, method) (( void (*) (Enumerator_t6982 *, const MethodInfo*))Enumerator_VerifyState_m43830_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m43832_gshared (Enumerator_t6982 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m43832(__this, method) (( void (*) (Enumerator_t6982 *, const MethodInfo*))Enumerator_VerifyCurrent_m43832_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::Dispose()
extern "C" void Enumerator_Dispose_m43834_gshared (Enumerator_t6982 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m43834(__this, method) (( void (*) (Enumerator_t6982 *, const MethodInfo*))Enumerator_Dispose_m43834_gshared)(__this, method)
