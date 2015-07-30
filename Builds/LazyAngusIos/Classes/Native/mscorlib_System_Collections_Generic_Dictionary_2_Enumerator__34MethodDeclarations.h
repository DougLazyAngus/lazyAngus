#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>
struct Enumerator_t5936;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Object>
struct Dictionary_2_t5933;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_39.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m30454_gshared (Enumerator_t5936 * __this, Dictionary_2_t5933 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m30454(__this, ___dictionary, method) (( void (*) (Enumerator_t5936 *, Dictionary_2_t5933 *, const MethodInfo*))Enumerator__ctor_m30454_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m30455_gshared (Enumerator_t5936 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m30455(__this, method) (( Object_t * (*) (Enumerator_t5936 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m30455_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m30456_gshared (Enumerator_t5936 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m30456(__this, method) (( void (*) (Enumerator_t5936 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m30456_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2086  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m30457_gshared (Enumerator_t5936 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m30457(__this, method) (( DictionaryEntry_t2086  (*) (Enumerator_t5936 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m30457_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m30458_gshared (Enumerator_t5936 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m30458(__this, method) (( Object_t * (*) (Enumerator_t5936 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m30458_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m30459_gshared (Enumerator_t5936 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m30459(__this, method) (( Object_t * (*) (Enumerator_t5936 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m30459_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m30460_gshared (Enumerator_t5936 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m30460(__this, method) (( bool (*) (Enumerator_t5936 *, const MethodInfo*))Enumerator_MoveNext_m30460_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::get_Current()
extern "C" KeyValuePair_2_t5928  Enumerator_get_Current_m30461_gshared (Enumerator_t5936 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m30461(__this, method) (( KeyValuePair_2_t5928  (*) (Enumerator_t5936 *, const MethodInfo*))Enumerator_get_Current_m30461_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::get_CurrentKey()
extern "C" int64_t Enumerator_get_CurrentKey_m30462_gshared (Enumerator_t5936 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m30462(__this, method) (( int64_t (*) (Enumerator_t5936 *, const MethodInfo*))Enumerator_get_CurrentKey_m30462_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m30463_gshared (Enumerator_t5936 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m30463(__this, method) (( Object_t * (*) (Enumerator_t5936 *, const MethodInfo*))Enumerator_get_CurrentValue_m30463_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::Reset()
extern "C" void Enumerator_Reset_m30464_gshared (Enumerator_t5936 * __this, const MethodInfo* method);
#define Enumerator_Reset_m30464(__this, method) (( void (*) (Enumerator_t5936 *, const MethodInfo*))Enumerator_Reset_m30464_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m30465_gshared (Enumerator_t5936 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m30465(__this, method) (( void (*) (Enumerator_t5936 *, const MethodInfo*))Enumerator_VerifyState_m30465_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m30466_gshared (Enumerator_t5936 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m30466(__this, method) (( void (*) (Enumerator_t5936 *, const MethodInfo*))Enumerator_VerifyCurrent_m30466_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m30467_gshared (Enumerator_t5936 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m30467(__this, method) (( void (*) (Enumerator_t5936 *, const MethodInfo*))Enumerator_Dispose_m30467_gshared)(__this, method)
