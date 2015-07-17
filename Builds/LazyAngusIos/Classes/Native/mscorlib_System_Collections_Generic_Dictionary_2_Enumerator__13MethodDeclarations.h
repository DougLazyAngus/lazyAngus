#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
struct Enumerator_t3437;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1227;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_16.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m18532_gshared (Enumerator_t3437 * __this, Dictionary_2_t1227 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m18532(__this, ___dictionary, method) (( void (*) (Enumerator_t3437 *, Dictionary_2_t1227 *, const MethodInfo*))Enumerator__ctor_m18532_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m18533_gshared (Enumerator_t3437 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m18533(__this, method) (( Object_t * (*) (Enumerator_t3437 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m18533_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2179  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18534_gshared (Enumerator_t3437 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18534(__this, method) (( DictionaryEntry_t2179  (*) (Enumerator_t3437 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18534_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18535_gshared (Enumerator_t3437 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18535(__this, method) (( Object_t * (*) (Enumerator_t3437 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18535_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18536_gshared (Enumerator_t3437 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18536(__this, method) (( Object_t * (*) (Enumerator_t3437 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18536_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m18537_gshared (Enumerator_t3437 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m18537(__this, method) (( bool (*) (Enumerator_t3437 *, const MethodInfo*))Enumerator_MoveNext_m18537_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" KeyValuePair_2_t3433  Enumerator_get_Current_m18538_gshared (Enumerator_t3437 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m18538(__this, method) (( KeyValuePair_2_t3433  (*) (Enumerator_t3437 *, const MethodInfo*))Enumerator_get_Current_m18538_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m18539_gshared (Enumerator_t3437 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m18539(__this, method) (( int32_t (*) (Enumerator_t3437 *, const MethodInfo*))Enumerator_get_CurrentKey_m18539_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m18540_gshared (Enumerator_t3437 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m18540(__this, method) (( Object_t * (*) (Enumerator_t3437 *, const MethodInfo*))Enumerator_get_CurrentValue_m18540_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m18541_gshared (Enumerator_t3437 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m18541(__this, method) (( void (*) (Enumerator_t3437 *, const MethodInfo*))Enumerator_VerifyState_m18541_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m18542_gshared (Enumerator_t3437 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m18542(__this, method) (( void (*) (Enumerator_t3437 *, const MethodInfo*))Enumerator_VerifyCurrent_m18542_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m18543_gshared (Enumerator_t3437 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m18543(__this, method) (( void (*) (Enumerator_t3437 *, const MethodInfo*))Enumerator_Dispose_m18543_gshared)(__this, method)
