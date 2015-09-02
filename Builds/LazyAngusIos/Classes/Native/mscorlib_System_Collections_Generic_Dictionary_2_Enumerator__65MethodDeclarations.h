#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
struct Enumerator_t8485;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t8482;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_75.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m61614_gshared (Enumerator_t8485 * __this, Dictionary_2_t8482 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m61614(__this, ___dictionary, method) (( void (*) (Enumerator_t8485 *, Dictionary_2_t8482 *, const MethodInfo*))Enumerator__ctor_m61614_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m61615_gshared (Enumerator_t8485 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m61615(__this, method) (( Object_t * (*) (Enumerator_t8485 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m61615_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m61616_gshared (Enumerator_t8485 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m61616(__this, method) (( void (*) (Enumerator_t8485 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m61616_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2156  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m61617_gshared (Enumerator_t8485 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m61617(__this, method) (( DictionaryEntry_t2156  (*) (Enumerator_t8485 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m61617_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m61618_gshared (Enumerator_t8485 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m61618(__this, method) (( Object_t * (*) (Enumerator_t8485 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m61618_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m61619_gshared (Enumerator_t8485 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m61619(__this, method) (( Object_t * (*) (Enumerator_t8485 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m61619_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool Enumerator_MoveNext_m61620_gshared (Enumerator_t8485 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m61620(__this, method) (( bool (*) (Enumerator_t8485 *, const MethodInfo*))Enumerator_MoveNext_m61620_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_Current()
extern "C" KeyValuePair_2_t7279  Enumerator_get_Current_m61621_gshared (Enumerator_t8485 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m61621(__this, method) (( KeyValuePair_2_t7279  (*) (Enumerator_t8485 *, const MethodInfo*))Enumerator_get_Current_m61621_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m61622_gshared (Enumerator_t8485 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m61622(__this, method) (( Object_t * (*) (Enumerator_t8485 *, const MethodInfo*))Enumerator_get_CurrentKey_m61622_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentValue()
extern "C" int64_t Enumerator_get_CurrentValue_m61623_gshared (Enumerator_t8485 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m61623(__this, method) (( int64_t (*) (Enumerator_t8485 *, const MethodInfo*))Enumerator_get_CurrentValue_m61623_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::Reset()
extern "C" void Enumerator_Reset_m61624_gshared (Enumerator_t8485 * __this, const MethodInfo* method);
#define Enumerator_Reset_m61624(__this, method) (( void (*) (Enumerator_t8485 *, const MethodInfo*))Enumerator_Reset_m61624_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyState()
extern "C" void Enumerator_VerifyState_m61625_gshared (Enumerator_t8485 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m61625(__this, method) (( void (*) (Enumerator_t8485 *, const MethodInfo*))Enumerator_VerifyState_m61625_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m61626_gshared (Enumerator_t8485 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m61626(__this, method) (( void (*) (Enumerator_t8485 *, const MethodInfo*))Enumerator_VerifyCurrent_m61626_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::Dispose()
extern "C" void Enumerator_Dispose_m61627_gshared (Enumerator_t8485 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m61627(__this, method) (( void (*) (Enumerator_t8485 *, const MethodInfo*))Enumerator_Dispose_m61627_gshared)(__this, method)
