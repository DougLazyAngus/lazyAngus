#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
struct Enumerator_t3990;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t3985;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_42.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m27207_gshared (Enumerator_t3990 * __this, Dictionary_2_t3985 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m27207(__this, ___dictionary, method) (( void (*) (Enumerator_t3990 *, Dictionary_2_t3985 *, const MethodInfo*))Enumerator__ctor_m27207_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m27208_gshared (Enumerator_t3990 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m27208(__this, method) (( Object_t * (*) (Enumerator_t3990 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m27208_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1663  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m27209_gshared (Enumerator_t3990 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m27209(__this, method) (( DictionaryEntry_t1663  (*) (Enumerator_t3990 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m27209_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m27210_gshared (Enumerator_t3990 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m27210(__this, method) (( Object_t * (*) (Enumerator_t3990 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m27210_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m27211_gshared (Enumerator_t3990 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m27211(__this, method) (( Object_t * (*) (Enumerator_t3990 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m27211_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool Enumerator_MoveNext_m27212_gshared (Enumerator_t3990 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m27212(__this, method) (( bool (*) (Enumerator_t3990 *, const MethodInfo*))Enumerator_MoveNext_m27212_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_Current()
extern "C" KeyValuePair_2_t3986  Enumerator_get_Current_m27213_gshared (Enumerator_t3990 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m27213(__this, method) (( KeyValuePair_2_t3986  (*) (Enumerator_t3990 *, const MethodInfo*))Enumerator_get_Current_m27213_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m27214_gshared (Enumerator_t3990 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m27214(__this, method) (( Object_t * (*) (Enumerator_t3990 *, const MethodInfo*))Enumerator_get_CurrentKey_m27214_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentValue()
extern "C" uint8_t Enumerator_get_CurrentValue_m27215_gshared (Enumerator_t3990 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m27215(__this, method) (( uint8_t (*) (Enumerator_t3990 *, const MethodInfo*))Enumerator_get_CurrentValue_m27215_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyState()
extern "C" void Enumerator_VerifyState_m27216_gshared (Enumerator_t3990 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m27216(__this, method) (( void (*) (Enumerator_t3990 *, const MethodInfo*))Enumerator_VerifyState_m27216_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m27217_gshared (Enumerator_t3990 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m27217(__this, method) (( void (*) (Enumerator_t3990 *, const MethodInfo*))Enumerator_VerifyCurrent_m27217_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::Dispose()
extern "C" void Enumerator_Dispose_m27218_gshared (Enumerator_t3990 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m27218(__this, method) (( void (*) (Enumerator_t3990 *, const MethodInfo*))Enumerator_Dispose_m27218_gshared)(__this, method)
