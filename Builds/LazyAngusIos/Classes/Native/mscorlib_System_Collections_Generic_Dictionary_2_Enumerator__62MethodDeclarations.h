#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>
struct Enumerator_t8915;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>
struct Dictionary_2_t8912;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_131.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m64463_gshared (Enumerator_t8915 * __this, Dictionary_2_t8912 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m64463(__this, ___dictionary, method) (( void (*) (Enumerator_t8915 *, Dictionary_2_t8912 *, const MethodInfo*))Enumerator__ctor_m64463_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m64464_gshared (Enumerator_t8915 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m64464(__this, method) (( Object_t * (*) (Enumerator_t8915 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m64464_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m64465_gshared (Enumerator_t8915 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m64465(__this, method) (( void (*) (Enumerator_t8915 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m64465_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2157  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m64466_gshared (Enumerator_t8915 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m64466(__this, method) (( DictionaryEntry_t2157  (*) (Enumerator_t8915 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m64466_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m64467_gshared (Enumerator_t8915 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m64467(__this, method) (( Object_t * (*) (Enumerator_t8915 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m64467_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m64468_gshared (Enumerator_t8915 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m64468(__this, method) (( Object_t * (*) (Enumerator_t8915 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m64468_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m64469_gshared (Enumerator_t8915 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m64469(__this, method) (( bool (*) (Enumerator_t8915 *, const MethodInfo*))Enumerator_MoveNext_m64469_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t8909  Enumerator_get_Current_m64470_gshared (Enumerator_t8915 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m64470(__this, method) (( KeyValuePair_2_t8909  (*) (Enumerator_t8915 *, const MethodInfo*))Enumerator_get_Current_m64470_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::get_CurrentKey()
extern "C" int64_t Enumerator_get_CurrentKey_m64471_gshared (Enumerator_t8915 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m64471(__this, method) (( int64_t (*) (Enumerator_t8915 *, const MethodInfo*))Enumerator_get_CurrentKey_m64471_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m64472_gshared (Enumerator_t8915 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m64472(__this, method) (( int32_t (*) (Enumerator_t8915 *, const MethodInfo*))Enumerator_get_CurrentValue_m64472_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::Reset()
extern "C" void Enumerator_Reset_m64473_gshared (Enumerator_t8915 * __this, const MethodInfo* method);
#define Enumerator_Reset_m64473(__this, method) (( void (*) (Enumerator_t8915 *, const MethodInfo*))Enumerator_Reset_m64473_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m64474_gshared (Enumerator_t8915 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m64474(__this, method) (( void (*) (Enumerator_t8915 *, const MethodInfo*))Enumerator_VerifyState_m64474_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m64475_gshared (Enumerator_t8915 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m64475(__this, method) (( void (*) (Enumerator_t8915 *, const MethodInfo*))Enumerator_VerifyCurrent_m64475_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m64476_gshared (Enumerator_t8915 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m64476(__this, method) (( void (*) (Enumerator_t8915 *, const MethodInfo*))Enumerator_Dispose_m64476_gshared)(__this, method)
