#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>
struct Enumerator_t7109;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>
struct Dictionary_2_t7106;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_55.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m45174_gshared (Enumerator_t7109 * __this, Dictionary_2_t7106 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m45174(__this, ___dictionary, method) (( void (*) (Enumerator_t7109 *, Dictionary_2_t7106 *, const MethodInfo*))Enumerator__ctor_m45174_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m45176_gshared (Enumerator_t7109 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m45176(__this, method) (( Object_t * (*) (Enumerator_t7109 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m45176_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m45178_gshared (Enumerator_t7109 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m45178(__this, method) (( void (*) (Enumerator_t7109 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m45178_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2139  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m45180_gshared (Enumerator_t7109 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m45180(__this, method) (( DictionaryEntry_t2139  (*) (Enumerator_t7109 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m45180_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m45182_gshared (Enumerator_t7109 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m45182(__this, method) (( Object_t * (*) (Enumerator_t7109 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m45182_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m45184_gshared (Enumerator_t7109 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m45184(__this, method) (( Object_t * (*) (Enumerator_t7109 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m45184_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::MoveNext()
extern "C" bool Enumerator_MoveNext_m45186_gshared (Enumerator_t7109 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m45186(__this, method) (( bool (*) (Enumerator_t7109 *, const MethodInfo*))Enumerator_MoveNext_m45186_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::get_Current()
extern "C" KeyValuePair_2_t7017  Enumerator_get_Current_m45188_gshared (Enumerator_t7109 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m45188(__this, method) (( KeyValuePair_2_t7017  (*) (Enumerator_t7109 *, const MethodInfo*))Enumerator_get_Current_m45188_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m45190_gshared (Enumerator_t7109 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m45190(__this, method) (( Object_t * (*) (Enumerator_t7109 *, const MethodInfo*))Enumerator_get_CurrentKey_m45190_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::get_CurrentValue()
extern "C" DateTime_t287  Enumerator_get_CurrentValue_m45192_gshared (Enumerator_t7109 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m45192(__this, method) (( DateTime_t287  (*) (Enumerator_t7109 *, const MethodInfo*))Enumerator_get_CurrentValue_m45192_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::Reset()
extern "C" void Enumerator_Reset_m45194_gshared (Enumerator_t7109 * __this, const MethodInfo* method);
#define Enumerator_Reset_m45194(__this, method) (( void (*) (Enumerator_t7109 *, const MethodInfo*))Enumerator_Reset_m45194_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::VerifyState()
extern "C" void Enumerator_VerifyState_m45196_gshared (Enumerator_t7109 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m45196(__this, method) (( void (*) (Enumerator_t7109 *, const MethodInfo*))Enumerator_VerifyState_m45196_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m45198_gshared (Enumerator_t7109 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m45198(__this, method) (( void (*) (Enumerator_t7109 *, const MethodInfo*))Enumerator_VerifyCurrent_m45198_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::Dispose()
extern "C" void Enumerator_Dispose_m45200_gshared (Enumerator_t7109 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m45200(__this, method) (( void (*) (Enumerator_t7109 *, const MethodInfo*))Enumerator_Dispose_m45200_gshared)(__this, method)
