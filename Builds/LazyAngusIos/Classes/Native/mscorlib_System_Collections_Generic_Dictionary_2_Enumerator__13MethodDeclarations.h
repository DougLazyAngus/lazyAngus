#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
struct Enumerator_t3443;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t3438;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_16.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m18739_gshared (Enumerator_t3443 * __this, Dictionary_2_t3438 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m18739(__this, ___dictionary, method) (( void (*) (Enumerator_t3443 *, Dictionary_2_t3438 *, const MethodInfo*))Enumerator__ctor_m18739_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m18740_gshared (Enumerator_t3443 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m18740(__this, method) (( Object_t * (*) (Enumerator_t3443 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m18740_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1718  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18741_gshared (Enumerator_t3443 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18741(__this, method) (( DictionaryEntry_t1718  (*) (Enumerator_t3443 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18741_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18742_gshared (Enumerator_t3443 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18742(__this, method) (( Object_t * (*) (Enumerator_t3443 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18742_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18743_gshared (Enumerator_t3443 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18743(__this, method) (( Object_t * (*) (Enumerator_t3443 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18743_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m18744_gshared (Enumerator_t3443 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m18744(__this, method) (( bool (*) (Enumerator_t3443 *, const MethodInfo*))Enumerator_MoveNext_m18744_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t3439  Enumerator_get_Current_m18745_gshared (Enumerator_t3443 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m18745(__this, method) (( KeyValuePair_2_t3439  (*) (Enumerator_t3443 *, const MethodInfo*))Enumerator_get_Current_m18745_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m18746_gshared (Enumerator_t3443 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m18746(__this, method) (( Object_t * (*) (Enumerator_t3443 *, const MethodInfo*))Enumerator_get_CurrentKey_m18746_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m18747_gshared (Enumerator_t3443 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m18747(__this, method) (( int32_t (*) (Enumerator_t3443 *, const MethodInfo*))Enumerator_get_CurrentValue_m18747_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m18748_gshared (Enumerator_t3443 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m18748(__this, method) (( void (*) (Enumerator_t3443 *, const MethodInfo*))Enumerator_VerifyState_m18748_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m18749_gshared (Enumerator_t3443 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m18749(__this, method) (( void (*) (Enumerator_t3443 *, const MethodInfo*))Enumerator_VerifyCurrent_m18749_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m18750_gshared (Enumerator_t3443 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m18750(__this, method) (( void (*) (Enumerator_t3443 *, const MethodInfo*))Enumerator_Dispose_m18750_gshared)(__this, method)
