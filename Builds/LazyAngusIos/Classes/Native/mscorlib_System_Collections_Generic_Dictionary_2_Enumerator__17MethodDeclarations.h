#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
struct Enumerator_t3511;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t3506;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_20.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m19783_gshared (Enumerator_t3511 * __this, Dictionary_2_t3506 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m19783(__this, ___dictionary, method) (( void (*) (Enumerator_t3511 *, Dictionary_2_t3506 *, const MethodInfo*))Enumerator__ctor_m19783_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m19784_gshared (Enumerator_t3511 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m19784(__this, method) (( Object_t * (*) (Enumerator_t3511 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m19784_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2181  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m19785_gshared (Enumerator_t3511 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m19785(__this, method) (( DictionaryEntry_t2181  (*) (Enumerator_t3511 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m19785_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m19786_gshared (Enumerator_t3511 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m19786(__this, method) (( Object_t * (*) (Enumerator_t3511 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m19786_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m19787_gshared (Enumerator_t3511 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m19787(__this, method) (( Object_t * (*) (Enumerator_t3511 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m19787_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m19788_gshared (Enumerator_t3511 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m19788(__this, method) (( bool (*) (Enumerator_t3511 *, const MethodInfo*))Enumerator_MoveNext_m19788_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t3507  Enumerator_get_Current_m19789_gshared (Enumerator_t3511 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m19789(__this, method) (( KeyValuePair_2_t3507  (*) (Enumerator_t3511 *, const MethodInfo*))Enumerator_get_Current_m19789_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m19790_gshared (Enumerator_t3511 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m19790(__this, method) (( Object_t * (*) (Enumerator_t3511 *, const MethodInfo*))Enumerator_get_CurrentKey_m19790_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m19791_gshared (Enumerator_t3511 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m19791(__this, method) (( int32_t (*) (Enumerator_t3511 *, const MethodInfo*))Enumerator_get_CurrentValue_m19791_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m19792_gshared (Enumerator_t3511 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m19792(__this, method) (( void (*) (Enumerator_t3511 *, const MethodInfo*))Enumerator_VerifyState_m19792_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m19793_gshared (Enumerator_t3511 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m19793(__this, method) (( void (*) (Enumerator_t3511 *, const MethodInfo*))Enumerator_VerifyCurrent_m19793_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m19794_gshared (Enumerator_t3511 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m19794(__this, method) (( void (*) (Enumerator_t3511 *, const MethodInfo*))Enumerator_Dispose_m19794_gshared)(__this, method)
