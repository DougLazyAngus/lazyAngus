#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>
struct Enumerator_t9066;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t9061;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_134.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m66407_gshared (Enumerator_t9066 * __this, Dictionary_2_t9061 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m66407(__this, ___dictionary, method) (( void (*) (Enumerator_t9066 *, Dictionary_2_t9061 *, const MethodInfo*))Enumerator__ctor_m66407_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m66408_gshared (Enumerator_t9066 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m66408(__this, method) (( Object_t * (*) (Enumerator_t9066 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m66408_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m66409_gshared (Enumerator_t9066 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m66409(__this, method) (( void (*) (Enumerator_t9066 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m66409_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2167  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m66410_gshared (Enumerator_t9066 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m66410(__this, method) (( DictionaryEntry_t2167  (*) (Enumerator_t9066 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m66410_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m66411_gshared (Enumerator_t9066 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m66411(__this, method) (( Object_t * (*) (Enumerator_t9066 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m66411_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m66412_gshared (Enumerator_t9066 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m66412(__this, method) (( Object_t * (*) (Enumerator_t9066 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m66412_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m66413_gshared (Enumerator_t9066 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m66413(__this, method) (( bool (*) (Enumerator_t9066 *, const MethodInfo*))Enumerator_MoveNext_m66413_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_Current()
extern "C" KeyValuePair_2_t9062  Enumerator_get_Current_m66414_gshared (Enumerator_t9066 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m66414(__this, method) (( KeyValuePair_2_t9062  (*) (Enumerator_t9066 *, const MethodInfo*))Enumerator_get_Current_m66414_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_CurrentKey()
extern "C" uint64_t Enumerator_get_CurrentKey_m66415_gshared (Enumerator_t9066 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m66415(__this, method) (( uint64_t (*) (Enumerator_t9066 *, const MethodInfo*))Enumerator_get_CurrentKey_m66415_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m66416_gshared (Enumerator_t9066 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m66416(__this, method) (( Object_t * (*) (Enumerator_t9066 *, const MethodInfo*))Enumerator_get_CurrentValue_m66416_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::Reset()
extern "C" void Enumerator_Reset_m66417_gshared (Enumerator_t9066 * __this, const MethodInfo* method);
#define Enumerator_Reset_m66417(__this, method) (( void (*) (Enumerator_t9066 *, const MethodInfo*))Enumerator_Reset_m66417_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m66418_gshared (Enumerator_t9066 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m66418(__this, method) (( void (*) (Enumerator_t9066 *, const MethodInfo*))Enumerator_VerifyState_m66418_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m66419_gshared (Enumerator_t9066 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m66419(__this, method) (( void (*) (Enumerator_t9066 *, const MethodInfo*))Enumerator_VerifyCurrent_m66419_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m66420_gshared (Enumerator_t9066 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m66420(__this, method) (( void (*) (Enumerator_t9066 *, const MethodInfo*))Enumerator_Dispose_m66420_gshared)(__this, method)
