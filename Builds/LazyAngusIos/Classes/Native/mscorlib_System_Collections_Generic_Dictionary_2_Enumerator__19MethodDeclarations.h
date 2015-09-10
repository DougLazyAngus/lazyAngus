#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
struct Enumerator_t6097;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t6092;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_24.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m28308_gshared (Enumerator_t6097 * __this, Dictionary_2_t6092 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m28308(__this, ___dictionary, method) (( void (*) (Enumerator_t6097 *, Dictionary_2_t6092 *, const MethodInfo*))Enumerator__ctor_m28308_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m28309_gshared (Enumerator_t6097 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m28309(__this, method) (( Object_t * (*) (Enumerator_t6097 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m28309_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m28310_gshared (Enumerator_t6097 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m28310(__this, method) (( void (*) (Enumerator_t6097 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m28310_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2167  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m28311_gshared (Enumerator_t6097 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m28311(__this, method) (( DictionaryEntry_t2167  (*) (Enumerator_t6097 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m28311_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m28312_gshared (Enumerator_t6097 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m28312(__this, method) (( Object_t * (*) (Enumerator_t6097 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m28312_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m28313_gshared (Enumerator_t6097 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m28313(__this, method) (( Object_t * (*) (Enumerator_t6097 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m28313_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m28314_gshared (Enumerator_t6097 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m28314(__this, method) (( bool (*) (Enumerator_t6097 *, const MethodInfo*))Enumerator_MoveNext_m28314_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t6093  Enumerator_get_Current_m28315_gshared (Enumerator_t6097 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m28315(__this, method) (( KeyValuePair_2_t6093  (*) (Enumerator_t6097 *, const MethodInfo*))Enumerator_get_Current_m28315_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m28316_gshared (Enumerator_t6097 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m28316(__this, method) (( Object_t * (*) (Enumerator_t6097 *, const MethodInfo*))Enumerator_get_CurrentKey_m28316_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m28317_gshared (Enumerator_t6097 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m28317(__this, method) (( int32_t (*) (Enumerator_t6097 *, const MethodInfo*))Enumerator_get_CurrentValue_m28317_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Reset()
extern "C" void Enumerator_Reset_m28318_gshared (Enumerator_t6097 * __this, const MethodInfo* method);
#define Enumerator_Reset_m28318(__this, method) (( void (*) (Enumerator_t6097 *, const MethodInfo*))Enumerator_Reset_m28318_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m28319_gshared (Enumerator_t6097 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m28319(__this, method) (( void (*) (Enumerator_t6097 *, const MethodInfo*))Enumerator_VerifyState_m28319_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m28320_gshared (Enumerator_t6097 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m28320(__this, method) (( void (*) (Enumerator_t6097 *, const MethodInfo*))Enumerator_VerifyCurrent_m28320_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m28321_gshared (Enumerator_t6097 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m28321(__this, method) (( void (*) (Enumerator_t6097 *, const MethodInfo*))Enumerator_Dispose_m28321_gshared)(__this, method)
