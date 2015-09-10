#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_t6004;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1515;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m26338_gshared (Enumerator_t6004 * __this, Dictionary_2_t1515 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m26338(__this, ___dictionary, method) (( void (*) (Enumerator_t6004 *, Dictionary_2_t1515 *, const MethodInfo*))Enumerator__ctor_m26338_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m26339_gshared (Enumerator_t6004 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m26339(__this, method) (( Object_t * (*) (Enumerator_t6004 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m26339_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m26340_gshared (Enumerator_t6004 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m26340(__this, method) (( void (*) (Enumerator_t6004 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m26340_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2167  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m26341_gshared (Enumerator_t6004 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m26341(__this, method) (( DictionaryEntry_t2167  (*) (Enumerator_t6004 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m26341_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m26342_gshared (Enumerator_t6004 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m26342(__this, method) (( Object_t * (*) (Enumerator_t6004 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m26342_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m26343_gshared (Enumerator_t6004 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m26343(__this, method) (( Object_t * (*) (Enumerator_t6004 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m26343_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m26344_gshared (Enumerator_t6004 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m26344(__this, method) (( bool (*) (Enumerator_t6004 *, const MethodInfo*))Enumerator_MoveNext_m26344_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern "C" KeyValuePair_2_t70  Enumerator_get_Current_m26345_gshared (Enumerator_t6004 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m26345(__this, method) (( KeyValuePair_2_t70  (*) (Enumerator_t6004 *, const MethodInfo*))Enumerator_get_Current_m26345_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m26346_gshared (Enumerator_t6004 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m26346(__this, method) (( Object_t * (*) (Enumerator_t6004 *, const MethodInfo*))Enumerator_get_CurrentKey_m26346_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m26347_gshared (Enumerator_t6004 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m26347(__this, method) (( Object_t * (*) (Enumerator_t6004 *, const MethodInfo*))Enumerator_get_CurrentValue_m26347_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Reset()
extern "C" void Enumerator_Reset_m26348_gshared (Enumerator_t6004 * __this, const MethodInfo* method);
#define Enumerator_Reset_m26348(__this, method) (( void (*) (Enumerator_t6004 *, const MethodInfo*))Enumerator_Reset_m26348_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m26349_gshared (Enumerator_t6004 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m26349(__this, method) (( void (*) (Enumerator_t6004 *, const MethodInfo*))Enumerator_VerifyState_m26349_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m26350_gshared (Enumerator_t6004 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m26350(__this, method) (( void (*) (Enumerator_t6004 *, const MethodInfo*))Enumerator_VerifyCurrent_m26350_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m26351_gshared (Enumerator_t6004 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m26351(__this, method) (( void (*) (Enumerator_t6004 *, const MethodInfo*))Enumerator_Dispose_m26351_gshared)(__this, method)
