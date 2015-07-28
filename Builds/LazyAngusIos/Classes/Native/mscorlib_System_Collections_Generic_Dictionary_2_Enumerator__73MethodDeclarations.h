#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>
struct Enumerator_t8567;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t4069;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_142.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m63128_gshared (Enumerator_t8567 * __this, Dictionary_2_t4069 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m63128(__this, ___dictionary, method) (( void (*) (Enumerator_t8567 *, Dictionary_2_t4069 *, const MethodInfo*))Enumerator__ctor_m63128_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m63129_gshared (Enumerator_t8567 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m63129(__this, method) (( Object_t * (*) (Enumerator_t8567 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m63129_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m63130_gshared (Enumerator_t8567 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m63130(__this, method) (( void (*) (Enumerator_t8567 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m63130_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2080  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m63131_gshared (Enumerator_t8567 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m63131(__this, method) (( DictionaryEntry_t2080  (*) (Enumerator_t8567 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m63131_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m63132_gshared (Enumerator_t8567 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m63132(__this, method) (( Object_t * (*) (Enumerator_t8567 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m63132_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m63133_gshared (Enumerator_t8567 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m63133(__this, method) (( Object_t * (*) (Enumerator_t8567 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m63133_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m63134_gshared (Enumerator_t8567 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m63134(__this, method) (( bool (*) (Enumerator_t8567 *, const MethodInfo*))Enumerator_MoveNext_m63134_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t8563  Enumerator_get_Current_m63135_gshared (Enumerator_t8567 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m63135(__this, method) (( KeyValuePair_2_t8563  (*) (Enumerator_t8567 *, const MethodInfo*))Enumerator_get_Current_m63135_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m63136_gshared (Enumerator_t8567 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m63136(__this, method) (( int32_t (*) (Enumerator_t8567 *, const MethodInfo*))Enumerator_get_CurrentKey_m63136_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m63137_gshared (Enumerator_t8567 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m63137(__this, method) (( int32_t (*) (Enumerator_t8567 *, const MethodInfo*))Enumerator_get_CurrentValue_m63137_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::Reset()
extern "C" void Enumerator_Reset_m63138_gshared (Enumerator_t8567 * __this, const MethodInfo* method);
#define Enumerator_Reset_m63138(__this, method) (( void (*) (Enumerator_t8567 *, const MethodInfo*))Enumerator_Reset_m63138_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m63139_gshared (Enumerator_t8567 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m63139(__this, method) (( void (*) (Enumerator_t8567 *, const MethodInfo*))Enumerator_VerifyState_m63139_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m63140_gshared (Enumerator_t8567 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m63140(__this, method) (( void (*) (Enumerator_t8567 *, const MethodInfo*))Enumerator_VerifyCurrent_m63140_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m63141_gshared (Enumerator_t8567 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m63141(__this, method) (( void (*) (Enumerator_t8567 *, const MethodInfo*))Enumerator_Dispose_m63141_gshared)(__this, method)
