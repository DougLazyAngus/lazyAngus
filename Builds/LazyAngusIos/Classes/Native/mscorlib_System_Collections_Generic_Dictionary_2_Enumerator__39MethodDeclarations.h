#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>
struct Enumerator_t6111;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>
struct Dictionary_2_t6108;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_45.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m32581_gshared (Enumerator_t6111 * __this, Dictionary_2_t6108 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m32581(__this, ___dictionary, method) (( void (*) (Enumerator_t6111 *, Dictionary_2_t6108 *, const MethodInfo*))Enumerator__ctor_m32581_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m32582_gshared (Enumerator_t6111 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m32582(__this, method) (( Object_t * (*) (Enumerator_t6111 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m32582_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m32583_gshared (Enumerator_t6111 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m32583(__this, method) (( void (*) (Enumerator_t6111 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m32583_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2079  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m32584_gshared (Enumerator_t6111 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m32584(__this, method) (( DictionaryEntry_t2079  (*) (Enumerator_t6111 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m32584_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m32585_gshared (Enumerator_t6111 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m32585(__this, method) (( Object_t * (*) (Enumerator_t6111 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m32585_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m32586_gshared (Enumerator_t6111 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m32586(__this, method) (( Object_t * (*) (Enumerator_t6111 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m32586_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::MoveNext()
extern "C" bool Enumerator_MoveNext_m32587_gshared (Enumerator_t6111 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m32587(__this, method) (( bool (*) (Enumerator_t6111 *, const MethodInfo*))Enumerator_MoveNext_m32587_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::get_Current()
extern "C" KeyValuePair_2_t6105  Enumerator_get_Current_m32588_gshared (Enumerator_t6111 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m32588(__this, method) (( KeyValuePair_2_t6105  (*) (Enumerator_t6111 *, const MethodInfo*))Enumerator_get_Current_m32588_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::get_CurrentKey()
extern "C" int64_t Enumerator_get_CurrentKey_m32589_gshared (Enumerator_t6111 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m32589(__this, method) (( int64_t (*) (Enumerator_t6111 *, const MethodInfo*))Enumerator_get_CurrentKey_m32589_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::get_CurrentValue()
extern "C" uint8_t Enumerator_get_CurrentValue_m32590_gshared (Enumerator_t6111 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m32590(__this, method) (( uint8_t (*) (Enumerator_t6111 *, const MethodInfo*))Enumerator_get_CurrentValue_m32590_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::Reset()
extern "C" void Enumerator_Reset_m32591_gshared (Enumerator_t6111 * __this, const MethodInfo* method);
#define Enumerator_Reset_m32591(__this, method) (( void (*) (Enumerator_t6111 *, const MethodInfo*))Enumerator_Reset_m32591_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::VerifyState()
extern "C" void Enumerator_VerifyState_m32592_gshared (Enumerator_t6111 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m32592(__this, method) (( void (*) (Enumerator_t6111 *, const MethodInfo*))Enumerator_VerifyState_m32592_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m32593_gshared (Enumerator_t6111 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m32593(__this, method) (( void (*) (Enumerator_t6111 *, const MethodInfo*))Enumerator_VerifyCurrent_m32593_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::Dispose()
extern "C" void Enumerator_Dispose_m32594_gshared (Enumerator_t6111 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m32594(__this, method) (( void (*) (Enumerator_t6111 *, const MethodInfo*))Enumerator_Dispose_m32594_gshared)(__this, method)
