#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>
struct Enumerator_t6775;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>
struct Dictionary_2_t6772;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_46.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m38108_gshared (Enumerator_t6775 * __this, Dictionary_2_t6772 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m38108(__this, ___dictionary, method) (( void (*) (Enumerator_t6775 *, Dictionary_2_t6772 *, const MethodInfo*))Enumerator__ctor_m38108_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m38109_gshared (Enumerator_t6775 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m38109(__this, method) (( Object_t * (*) (Enumerator_t6775 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m38109_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m38110_gshared (Enumerator_t6775 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m38110(__this, method) (( void (*) (Enumerator_t6775 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m38110_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2167  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m38111_gshared (Enumerator_t6775 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m38111(__this, method) (( DictionaryEntry_t2167  (*) (Enumerator_t6775 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m38111_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m38112_gshared (Enumerator_t6775 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m38112(__this, method) (( Object_t * (*) (Enumerator_t6775 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m38112_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m38113_gshared (Enumerator_t6775 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m38113(__this, method) (( Object_t * (*) (Enumerator_t6775 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m38113_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::MoveNext()
extern "C" bool Enumerator_MoveNext_m38114_gshared (Enumerator_t6775 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m38114(__this, method) (( bool (*) (Enumerator_t6775 *, const MethodInfo*))Enumerator_MoveNext_m38114_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::get_Current()
extern "C" KeyValuePair_2_t6769  Enumerator_get_Current_m38115_gshared (Enumerator_t6775 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m38115(__this, method) (( KeyValuePair_2_t6769  (*) (Enumerator_t6775 *, const MethodInfo*))Enumerator_get_Current_m38115_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::get_CurrentKey()
extern "C" int64_t Enumerator_get_CurrentKey_m38116_gshared (Enumerator_t6775 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m38116(__this, method) (( int64_t (*) (Enumerator_t6775 *, const MethodInfo*))Enumerator_get_CurrentKey_m38116_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::get_CurrentValue()
extern "C" uint8_t Enumerator_get_CurrentValue_m38117_gshared (Enumerator_t6775 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m38117(__this, method) (( uint8_t (*) (Enumerator_t6775 *, const MethodInfo*))Enumerator_get_CurrentValue_m38117_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::Reset()
extern "C" void Enumerator_Reset_m38118_gshared (Enumerator_t6775 * __this, const MethodInfo* method);
#define Enumerator_Reset_m38118(__this, method) (( void (*) (Enumerator_t6775 *, const MethodInfo*))Enumerator_Reset_m38118_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::VerifyState()
extern "C" void Enumerator_VerifyState_m38119_gshared (Enumerator_t6775 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m38119(__this, method) (( void (*) (Enumerator_t6775 *, const MethodInfo*))Enumerator_VerifyState_m38119_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m38120_gshared (Enumerator_t6775 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m38120(__this, method) (( void (*) (Enumerator_t6775 *, const MethodInfo*))Enumerator_VerifyCurrent_m38120_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::Dispose()
extern "C" void Enumerator_Dispose_m38121_gshared (Enumerator_t6775 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m38121(__this, method) (( void (*) (Enumerator_t6775 *, const MethodInfo*))Enumerator_Dispose_m38121_gshared)(__this, method)
