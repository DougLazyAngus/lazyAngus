#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
struct Enumerator_t4134;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t4129;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_46.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m28766_gshared (Enumerator_t4134 * __this, Dictionary_2_t4129 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m28766(__this, ___dictionary, method) (( void (*) (Enumerator_t4134 *, Dictionary_2_t4129 *, const MethodInfo*))Enumerator__ctor_m28766_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m28767_gshared (Enumerator_t4134 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m28767(__this, method) (( Object_t * (*) (Enumerator_t4134 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m28767_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2179  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m28768_gshared (Enumerator_t4134 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m28768(__this, method) (( DictionaryEntry_t2179  (*) (Enumerator_t4134 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m28768_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m28769_gshared (Enumerator_t4134 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m28769(__this, method) (( Object_t * (*) (Enumerator_t4134 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m28769_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m28770_gshared (Enumerator_t4134 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m28770(__this, method) (( Object_t * (*) (Enumerator_t4134 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m28770_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool Enumerator_MoveNext_m28771_gshared (Enumerator_t4134 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m28771(__this, method) (( bool (*) (Enumerator_t4134 *, const MethodInfo*))Enumerator_MoveNext_m28771_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_Current()
extern "C" KeyValuePair_2_t4130  Enumerator_get_Current_m28772_gshared (Enumerator_t4134 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m28772(__this, method) (( KeyValuePair_2_t4130  (*) (Enumerator_t4134 *, const MethodInfo*))Enumerator_get_Current_m28772_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m28773_gshared (Enumerator_t4134 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m28773(__this, method) (( Object_t * (*) (Enumerator_t4134 *, const MethodInfo*))Enumerator_get_CurrentKey_m28773_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentValue()
extern "C" uint8_t Enumerator_get_CurrentValue_m28774_gshared (Enumerator_t4134 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m28774(__this, method) (( uint8_t (*) (Enumerator_t4134 *, const MethodInfo*))Enumerator_get_CurrentValue_m28774_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyState()
extern "C" void Enumerator_VerifyState_m28775_gshared (Enumerator_t4134 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m28775(__this, method) (( void (*) (Enumerator_t4134 *, const MethodInfo*))Enumerator_VerifyState_m28775_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m28776_gshared (Enumerator_t4134 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m28776(__this, method) (( void (*) (Enumerator_t4134 *, const MethodInfo*))Enumerator_VerifyCurrent_m28776_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::Dispose()
extern "C" void Enumerator_Dispose_m28777_gshared (Enumerator_t4134 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m28777(__this, method) (( void (*) (Enumerator_t4134 *, const MethodInfo*))Enumerator_Dispose_m28777_gshared)(__this, method)
