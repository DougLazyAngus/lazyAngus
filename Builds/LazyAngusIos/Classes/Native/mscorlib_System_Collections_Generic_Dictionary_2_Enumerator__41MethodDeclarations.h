#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
struct Enumerator_t4136;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t4131;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_46.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m28777_gshared (Enumerator_t4136 * __this, Dictionary_2_t4131 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m28777(__this, ___dictionary, method) (( void (*) (Enumerator_t4136 *, Dictionary_2_t4131 *, const MethodInfo*))Enumerator__ctor_m28777_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m28778_gshared (Enumerator_t4136 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m28778(__this, method) (( Object_t * (*) (Enumerator_t4136 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m28778_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2181  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m28779_gshared (Enumerator_t4136 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m28779(__this, method) (( DictionaryEntry_t2181  (*) (Enumerator_t4136 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m28779_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m28780_gshared (Enumerator_t4136 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m28780(__this, method) (( Object_t * (*) (Enumerator_t4136 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m28780_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m28781_gshared (Enumerator_t4136 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m28781(__this, method) (( Object_t * (*) (Enumerator_t4136 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m28781_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool Enumerator_MoveNext_m28782_gshared (Enumerator_t4136 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m28782(__this, method) (( bool (*) (Enumerator_t4136 *, const MethodInfo*))Enumerator_MoveNext_m28782_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_Current()
extern "C" KeyValuePair_2_t4132  Enumerator_get_Current_m28783_gshared (Enumerator_t4136 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m28783(__this, method) (( KeyValuePair_2_t4132  (*) (Enumerator_t4136 *, const MethodInfo*))Enumerator_get_Current_m28783_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m28784_gshared (Enumerator_t4136 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m28784(__this, method) (( Object_t * (*) (Enumerator_t4136 *, const MethodInfo*))Enumerator_get_CurrentKey_m28784_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentValue()
extern "C" uint8_t Enumerator_get_CurrentValue_m28785_gshared (Enumerator_t4136 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m28785(__this, method) (( uint8_t (*) (Enumerator_t4136 *, const MethodInfo*))Enumerator_get_CurrentValue_m28785_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyState()
extern "C" void Enumerator_VerifyState_m28786_gshared (Enumerator_t4136 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m28786(__this, method) (( void (*) (Enumerator_t4136 *, const MethodInfo*))Enumerator_VerifyState_m28786_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m28787_gshared (Enumerator_t4136 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m28787(__this, method) (( void (*) (Enumerator_t4136 *, const MethodInfo*))Enumerator_VerifyCurrent_m28787_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::Dispose()
extern "C" void Enumerator_Dispose_m28788_gshared (Enumerator_t4136 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m28788(__this, method) (( void (*) (Enumerator_t4136 *, const MethodInfo*))Enumerator_Dispose_m28788_gshared)(__this, method)
