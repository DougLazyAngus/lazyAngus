#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>
struct Enumerator_t8578;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t4080;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_142.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m63203_gshared (Enumerator_t8578 * __this, Dictionary_2_t4080 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m63203(__this, ___dictionary, method) (( void (*) (Enumerator_t8578 *, Dictionary_2_t4080 *, const MethodInfo*))Enumerator__ctor_m63203_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m63204_gshared (Enumerator_t8578 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m63204(__this, method) (( Object_t * (*) (Enumerator_t8578 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m63204_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m63205_gshared (Enumerator_t8578 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m63205(__this, method) (( void (*) (Enumerator_t8578 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m63205_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2090  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m63206_gshared (Enumerator_t8578 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m63206(__this, method) (( DictionaryEntry_t2090  (*) (Enumerator_t8578 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m63206_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m63207_gshared (Enumerator_t8578 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m63207(__this, method) (( Object_t * (*) (Enumerator_t8578 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m63207_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m63208_gshared (Enumerator_t8578 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m63208(__this, method) (( Object_t * (*) (Enumerator_t8578 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m63208_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m63209_gshared (Enumerator_t8578 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m63209(__this, method) (( bool (*) (Enumerator_t8578 *, const MethodInfo*))Enumerator_MoveNext_m63209_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t8574  Enumerator_get_Current_m63210_gshared (Enumerator_t8578 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m63210(__this, method) (( KeyValuePair_2_t8574  (*) (Enumerator_t8578 *, const MethodInfo*))Enumerator_get_Current_m63210_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m63211_gshared (Enumerator_t8578 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m63211(__this, method) (( int32_t (*) (Enumerator_t8578 *, const MethodInfo*))Enumerator_get_CurrentKey_m63211_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m63212_gshared (Enumerator_t8578 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m63212(__this, method) (( int32_t (*) (Enumerator_t8578 *, const MethodInfo*))Enumerator_get_CurrentValue_m63212_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::Reset()
extern "C" void Enumerator_Reset_m63213_gshared (Enumerator_t8578 * __this, const MethodInfo* method);
#define Enumerator_Reset_m63213(__this, method) (( void (*) (Enumerator_t8578 *, const MethodInfo*))Enumerator_Reset_m63213_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m63214_gshared (Enumerator_t8578 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m63214(__this, method) (( void (*) (Enumerator_t8578 *, const MethodInfo*))Enumerator_VerifyState_m63214_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m63215_gshared (Enumerator_t8578 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m63215(__this, method) (( void (*) (Enumerator_t8578 *, const MethodInfo*))Enumerator_VerifyCurrent_m63215_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m63216_gshared (Enumerator_t8578 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m63216(__this, method) (( void (*) (Enumerator_t8578 *, const MethodInfo*))Enumerator_Dispose_m63216_gshared)(__this, method)
