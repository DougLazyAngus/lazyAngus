#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
struct Enumerator_t6208;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t6205;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_45.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m33542_gshared (Enumerator_t6208 * __this, Dictionary_2_t6205 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m33542(__this, ___dictionary, method) (( void (*) (Enumerator_t6208 *, Dictionary_2_t6205 *, const MethodInfo*))Enumerator__ctor_m33542_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m33543_gshared (Enumerator_t6208 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m33543(__this, method) (( Object_t * (*) (Enumerator_t6208 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m33543_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m33544_gshared (Enumerator_t6208 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m33544(__this, method) (( void (*) (Enumerator_t6208 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m33544_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2139  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m33545_gshared (Enumerator_t6208 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m33545(__this, method) (( DictionaryEntry_t2139  (*) (Enumerator_t6208 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m33545_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m33546_gshared (Enumerator_t6208 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m33546(__this, method) (( Object_t * (*) (Enumerator_t6208 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m33546_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m33547_gshared (Enumerator_t6208 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m33547(__this, method) (( Object_t * (*) (Enumerator_t6208 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m33547_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool Enumerator_MoveNext_m33548_gshared (Enumerator_t6208 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m33548(__this, method) (( bool (*) (Enumerator_t6208 *, const MethodInfo*))Enumerator_MoveNext_m33548_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_Current()
extern "C" KeyValuePair_2_t6182  Enumerator_get_Current_m33549_gshared (Enumerator_t6208 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m33549(__this, method) (( KeyValuePair_2_t6182  (*) (Enumerator_t6208 *, const MethodInfo*))Enumerator_get_Current_m33549_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m33550_gshared (Enumerator_t6208 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m33550(__this, method) (( Object_t * (*) (Enumerator_t6208 *, const MethodInfo*))Enumerator_get_CurrentKey_m33550_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentValue()
extern "C" uint8_t Enumerator_get_CurrentValue_m33551_gshared (Enumerator_t6208 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m33551(__this, method) (( uint8_t (*) (Enumerator_t6208 *, const MethodInfo*))Enumerator_get_CurrentValue_m33551_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::Reset()
extern "C" void Enumerator_Reset_m33552_gshared (Enumerator_t6208 * __this, const MethodInfo* method);
#define Enumerator_Reset_m33552(__this, method) (( void (*) (Enumerator_t6208 *, const MethodInfo*))Enumerator_Reset_m33552_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyState()
extern "C" void Enumerator_VerifyState_m33553_gshared (Enumerator_t6208 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m33553(__this, method) (( void (*) (Enumerator_t6208 *, const MethodInfo*))Enumerator_VerifyState_m33553_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m33554_gshared (Enumerator_t6208 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m33554(__this, method) (( void (*) (Enumerator_t6208 *, const MethodInfo*))Enumerator_VerifyCurrent_m33554_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::Dispose()
extern "C" void Enumerator_Dispose_m33555_gshared (Enumerator_t6208 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m33555(__this, method) (( void (*) (Enumerator_t6208 *, const MethodInfo*))Enumerator_Dispose_m33555_gshared)(__this, method)
