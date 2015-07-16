#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
struct Enumerator_t3883;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t3877;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_32.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m25535_gshared (Enumerator_t3883 * __this, Dictionary_2_t3877 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m25535(__this, ___dictionary, method) (( void (*) (Enumerator_t3883 *, Dictionary_2_t3877 *, const MethodInfo*))Enumerator__ctor_m25535_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m25536_gshared (Enumerator_t3883 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m25536(__this, method) (( Object_t * (*) (Enumerator_t3883 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m25536_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1718  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m25537_gshared (Enumerator_t3883 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m25537(__this, method) (( DictionaryEntry_t1718  (*) (Enumerator_t3883 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m25537_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m25538_gshared (Enumerator_t3883 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m25538(__this, method) (( Object_t * (*) (Enumerator_t3883 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m25538_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m25539_gshared (Enumerator_t3883 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m25539(__this, method) (( Object_t * (*) (Enumerator_t3883 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m25539_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool Enumerator_MoveNext_m25540_gshared (Enumerator_t3883 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m25540(__this, method) (( bool (*) (Enumerator_t3883 *, const MethodInfo*))Enumerator_MoveNext_m25540_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_Current()
extern "C" KeyValuePair_2_t3878  Enumerator_get_Current_m25541_gshared (Enumerator_t3883 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m25541(__this, method) (( KeyValuePair_2_t3878  (*) (Enumerator_t3883 *, const MethodInfo*))Enumerator_get_Current_m25541_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m25542_gshared (Enumerator_t3883 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m25542(__this, method) (( Object_t * (*) (Enumerator_t3883 *, const MethodInfo*))Enumerator_get_CurrentKey_m25542_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentValue()
extern "C" int64_t Enumerator_get_CurrentValue_m25543_gshared (Enumerator_t3883 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m25543(__this, method) (( int64_t (*) (Enumerator_t3883 *, const MethodInfo*))Enumerator_get_CurrentValue_m25543_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyState()
extern "C" void Enumerator_VerifyState_m25544_gshared (Enumerator_t3883 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m25544(__this, method) (( void (*) (Enumerator_t3883 *, const MethodInfo*))Enumerator_VerifyState_m25544_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m25545_gshared (Enumerator_t3883 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m25545(__this, method) (( void (*) (Enumerator_t3883 *, const MethodInfo*))Enumerator_VerifyCurrent_m25545_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::Dispose()
extern "C" void Enumerator_Dispose_m25546_gshared (Enumerator_t3883 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m25546(__this, method) (( void (*) (Enumerator_t3883 *, const MethodInfo*))Enumerator_Dispose_m25546_gshared)(__this, method)
