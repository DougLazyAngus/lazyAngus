#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
struct Enumerator_t8379;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t8376;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m60489_gshared (Enumerator_t8379 * __this, Dictionary_2_t8376 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m60489(__this, ___dictionary, method) (( void (*) (Enumerator_t8379 *, Dictionary_2_t8376 *, const MethodInfo*))Enumerator__ctor_m60489_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m60490_gshared (Enumerator_t8379 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m60490(__this, method) (( Object_t * (*) (Enumerator_t8379 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m60490_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m60491_gshared (Enumerator_t8379 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m60491(__this, method) (( void (*) (Enumerator_t8379 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m60491_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2090  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m60492_gshared (Enumerator_t8379 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m60492(__this, method) (( DictionaryEntry_t2090  (*) (Enumerator_t8379 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m60492_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m60493_gshared (Enumerator_t8379 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m60493(__this, method) (( Object_t * (*) (Enumerator_t8379 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m60493_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m60494_gshared (Enumerator_t8379 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m60494(__this, method) (( Object_t * (*) (Enumerator_t8379 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m60494_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool Enumerator_MoveNext_m60495_gshared (Enumerator_t8379 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m60495(__this, method) (( bool (*) (Enumerator_t8379 *, const MethodInfo*))Enumerator_MoveNext_m60495_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_Current()
extern "C" KeyValuePair_2_t7173  Enumerator_get_Current_m60496_gshared (Enumerator_t8379 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m60496(__this, method) (( KeyValuePair_2_t7173  (*) (Enumerator_t8379 *, const MethodInfo*))Enumerator_get_Current_m60496_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m60497_gshared (Enumerator_t8379 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m60497(__this, method) (( Object_t * (*) (Enumerator_t8379 *, const MethodInfo*))Enumerator_get_CurrentKey_m60497_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentValue()
extern "C" int64_t Enumerator_get_CurrentValue_m60498_gshared (Enumerator_t8379 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m60498(__this, method) (( int64_t (*) (Enumerator_t8379 *, const MethodInfo*))Enumerator_get_CurrentValue_m60498_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::Reset()
extern "C" void Enumerator_Reset_m60499_gshared (Enumerator_t8379 * __this, const MethodInfo* method);
#define Enumerator_Reset_m60499(__this, method) (( void (*) (Enumerator_t8379 *, const MethodInfo*))Enumerator_Reset_m60499_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyState()
extern "C" void Enumerator_VerifyState_m60500_gshared (Enumerator_t8379 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m60500(__this, method) (( void (*) (Enumerator_t8379 *, const MethodInfo*))Enumerator_VerifyState_m60500_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m60501_gshared (Enumerator_t8379 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m60501(__this, method) (( void (*) (Enumerator_t8379 *, const MethodInfo*))Enumerator_VerifyCurrent_m60501_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::Dispose()
extern "C" void Enumerator_Dispose_m60502_gshared (Enumerator_t8379 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m60502(__this, method) (( void (*) (Enumerator_t8379 *, const MethodInfo*))Enumerator_Dispose_m60502_gshared)(__this, method)
