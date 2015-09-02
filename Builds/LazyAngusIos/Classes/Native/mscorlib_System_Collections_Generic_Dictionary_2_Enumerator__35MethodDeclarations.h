#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>
struct Enumerator_t6047;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Object>
struct Dictionary_2_t6044;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_40.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m31614_gshared (Enumerator_t6047 * __this, Dictionary_2_t6044 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m31614(__this, ___dictionary, method) (( void (*) (Enumerator_t6047 *, Dictionary_2_t6044 *, const MethodInfo*))Enumerator__ctor_m31614_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m31615_gshared (Enumerator_t6047 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m31615(__this, method) (( Object_t * (*) (Enumerator_t6047 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m31615_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m31616_gshared (Enumerator_t6047 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m31616(__this, method) (( void (*) (Enumerator_t6047 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m31616_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2156  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m31617_gshared (Enumerator_t6047 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m31617(__this, method) (( DictionaryEntry_t2156  (*) (Enumerator_t6047 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m31617_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m31618_gshared (Enumerator_t6047 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m31618(__this, method) (( Object_t * (*) (Enumerator_t6047 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m31618_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m31619_gshared (Enumerator_t6047 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m31619(__this, method) (( Object_t * (*) (Enumerator_t6047 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m31619_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m31620_gshared (Enumerator_t6047 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m31620(__this, method) (( bool (*) (Enumerator_t6047 *, const MethodInfo*))Enumerator_MoveNext_m31620_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::get_Current()
extern "C" KeyValuePair_2_t6039  Enumerator_get_Current_m31621_gshared (Enumerator_t6047 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m31621(__this, method) (( KeyValuePair_2_t6039  (*) (Enumerator_t6047 *, const MethodInfo*))Enumerator_get_Current_m31621_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::get_CurrentKey()
extern "C" int64_t Enumerator_get_CurrentKey_m31622_gshared (Enumerator_t6047 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m31622(__this, method) (( int64_t (*) (Enumerator_t6047 *, const MethodInfo*))Enumerator_get_CurrentKey_m31622_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m31623_gshared (Enumerator_t6047 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m31623(__this, method) (( Object_t * (*) (Enumerator_t6047 *, const MethodInfo*))Enumerator_get_CurrentValue_m31623_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::Reset()
extern "C" void Enumerator_Reset_m31624_gshared (Enumerator_t6047 * __this, const MethodInfo* method);
#define Enumerator_Reset_m31624(__this, method) (( void (*) (Enumerator_t6047 *, const MethodInfo*))Enumerator_Reset_m31624_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m31625_gshared (Enumerator_t6047 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m31625(__this, method) (( void (*) (Enumerator_t6047 *, const MethodInfo*))Enumerator_VerifyState_m31625_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m31626_gshared (Enumerator_t6047 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m31626(__this, method) (( void (*) (Enumerator_t6047 *, const MethodInfo*))Enumerator_VerifyCurrent_m31626_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m31627_gshared (Enumerator_t6047 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m31627(__this, method) (( void (*) (Enumerator_t6047 *, const MethodInfo*))Enumerator_Dispose_m31627_gshared)(__this, method)
