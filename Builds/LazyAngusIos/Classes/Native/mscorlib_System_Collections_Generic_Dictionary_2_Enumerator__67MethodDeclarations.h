#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>
struct Enumerator_t9054;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t9049;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_134.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m66338_gshared (Enumerator_t9054 * __this, Dictionary_2_t9049 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m66338(__this, ___dictionary, method) (( void (*) (Enumerator_t9054 *, Dictionary_2_t9049 *, const MethodInfo*))Enumerator__ctor_m66338_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m66339_gshared (Enumerator_t9054 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m66339(__this, method) (( Object_t * (*) (Enumerator_t9054 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m66339_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m66340_gshared (Enumerator_t9054 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m66340(__this, method) (( void (*) (Enumerator_t9054 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m66340_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2157  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m66341_gshared (Enumerator_t9054 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m66341(__this, method) (( DictionaryEntry_t2157  (*) (Enumerator_t9054 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m66341_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m66342_gshared (Enumerator_t9054 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m66342(__this, method) (( Object_t * (*) (Enumerator_t9054 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m66342_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m66343_gshared (Enumerator_t9054 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m66343(__this, method) (( Object_t * (*) (Enumerator_t9054 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m66343_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m66344_gshared (Enumerator_t9054 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m66344(__this, method) (( bool (*) (Enumerator_t9054 *, const MethodInfo*))Enumerator_MoveNext_m66344_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_Current()
extern "C" KeyValuePair_2_t9050  Enumerator_get_Current_m66345_gshared (Enumerator_t9054 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m66345(__this, method) (( KeyValuePair_2_t9050  (*) (Enumerator_t9054 *, const MethodInfo*))Enumerator_get_Current_m66345_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_CurrentKey()
extern "C" uint64_t Enumerator_get_CurrentKey_m66346_gshared (Enumerator_t9054 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m66346(__this, method) (( uint64_t (*) (Enumerator_t9054 *, const MethodInfo*))Enumerator_get_CurrentKey_m66346_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m66347_gshared (Enumerator_t9054 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m66347(__this, method) (( Object_t * (*) (Enumerator_t9054 *, const MethodInfo*))Enumerator_get_CurrentValue_m66347_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::Reset()
extern "C" void Enumerator_Reset_m66348_gshared (Enumerator_t9054 * __this, const MethodInfo* method);
#define Enumerator_Reset_m66348(__this, method) (( void (*) (Enumerator_t9054 *, const MethodInfo*))Enumerator_Reset_m66348_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m66349_gshared (Enumerator_t9054 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m66349(__this, method) (( void (*) (Enumerator_t9054 *, const MethodInfo*))Enumerator_VerifyState_m66349_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m66350_gshared (Enumerator_t9054 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m66350(__this, method) (( void (*) (Enumerator_t9054 *, const MethodInfo*))Enumerator_VerifyCurrent_m66350_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m66351_gshared (Enumerator_t9054 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m66351(__this, method) (( void (*) (Enumerator_t9054 *, const MethodInfo*))Enumerator_Dispose_m66351_gshared)(__this, method)
