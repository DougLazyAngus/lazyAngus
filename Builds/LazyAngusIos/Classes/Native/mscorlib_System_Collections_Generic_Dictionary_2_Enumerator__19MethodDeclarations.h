#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
struct Enumerator_t6086;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t6081;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_24.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m28238_gshared (Enumerator_t6086 * __this, Dictionary_2_t6081 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m28238(__this, ___dictionary, method) (( void (*) (Enumerator_t6086 *, Dictionary_2_t6081 *, const MethodInfo*))Enumerator__ctor_m28238_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m28239_gshared (Enumerator_t6086 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m28239(__this, method) (( Object_t * (*) (Enumerator_t6086 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m28239_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m28240_gshared (Enumerator_t6086 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m28240(__this, method) (( void (*) (Enumerator_t6086 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m28240_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2156  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m28241_gshared (Enumerator_t6086 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m28241(__this, method) (( DictionaryEntry_t2156  (*) (Enumerator_t6086 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m28241_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m28242_gshared (Enumerator_t6086 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m28242(__this, method) (( Object_t * (*) (Enumerator_t6086 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m28242_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m28243_gshared (Enumerator_t6086 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m28243(__this, method) (( Object_t * (*) (Enumerator_t6086 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m28243_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m28244_gshared (Enumerator_t6086 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m28244(__this, method) (( bool (*) (Enumerator_t6086 *, const MethodInfo*))Enumerator_MoveNext_m28244_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t6082  Enumerator_get_Current_m28245_gshared (Enumerator_t6086 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m28245(__this, method) (( KeyValuePair_2_t6082  (*) (Enumerator_t6086 *, const MethodInfo*))Enumerator_get_Current_m28245_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m28246_gshared (Enumerator_t6086 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m28246(__this, method) (( Object_t * (*) (Enumerator_t6086 *, const MethodInfo*))Enumerator_get_CurrentKey_m28246_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m28247_gshared (Enumerator_t6086 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m28247(__this, method) (( int32_t (*) (Enumerator_t6086 *, const MethodInfo*))Enumerator_get_CurrentValue_m28247_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Reset()
extern "C" void Enumerator_Reset_m28248_gshared (Enumerator_t6086 * __this, const MethodInfo* method);
#define Enumerator_Reset_m28248(__this, method) (( void (*) (Enumerator_t6086 *, const MethodInfo*))Enumerator_Reset_m28248_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m28249_gshared (Enumerator_t6086 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m28249(__this, method) (( void (*) (Enumerator_t6086 *, const MethodInfo*))Enumerator_VerifyState_m28249_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m28250_gshared (Enumerator_t6086 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m28250(__this, method) (( void (*) (Enumerator_t6086 *, const MethodInfo*))Enumerator_VerifyCurrent_m28250_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m28251_gshared (Enumerator_t6086 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m28251(__this, method) (( void (*) (Enumerator_t6086 *, const MethodInfo*))Enumerator_Dispose_m28251_gshared)(__this, method)
