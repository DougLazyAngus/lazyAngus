#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Enumerator_t8451;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t8448;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_135.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m61568_gshared (Enumerator_t8451 * __this, Dictionary_2_t8448 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m61568(__this, ___dictionary, method) (( void (*) (Enumerator_t8451 *, Dictionary_2_t8448 *, const MethodInfo*))Enumerator__ctor_m61568_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m61569_gshared (Enumerator_t8451 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m61569(__this, method) (( Object_t * (*) (Enumerator_t8451 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m61569_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m61570_gshared (Enumerator_t8451 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m61570(__this, method) (( void (*) (Enumerator_t8451 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m61570_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2090  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m61571_gshared (Enumerator_t8451 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m61571(__this, method) (( DictionaryEntry_t2090  (*) (Enumerator_t8451 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m61571_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m61572_gshared (Enumerator_t8451 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m61572(__this, method) (( Object_t * (*) (Enumerator_t8451 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m61572_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m61573_gshared (Enumerator_t8451 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m61573(__this, method) (( Object_t * (*) (Enumerator_t8451 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m61573_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool Enumerator_MoveNext_m61574_gshared (Enumerator_t8451 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m61574(__this, method) (( bool (*) (Enumerator_t8451 *, const MethodInfo*))Enumerator_MoveNext_m61574_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t8424  Enumerator_get_Current_m61575_gshared (Enumerator_t8451 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m61575(__this, method) (( KeyValuePair_2_t8424  (*) (Enumerator_t8451 *, const MethodInfo*))Enumerator_get_Current_m61575_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m61576_gshared (Enumerator_t8451 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m61576(__this, method) (( Object_t * (*) (Enumerator_t8451 *, const MethodInfo*))Enumerator_get_CurrentKey_m61576_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentValue()
extern "C" KeyValuePair_2_t70  Enumerator_get_CurrentValue_m61577_gshared (Enumerator_t8451 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m61577(__this, method) (( KeyValuePair_2_t70  (*) (Enumerator_t8451 *, const MethodInfo*))Enumerator_get_CurrentValue_m61577_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Reset()
extern "C" void Enumerator_Reset_m61578_gshared (Enumerator_t8451 * __this, const MethodInfo* method);
#define Enumerator_Reset_m61578(__this, method) (( void (*) (Enumerator_t8451 *, const MethodInfo*))Enumerator_Reset_m61578_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyState()
extern "C" void Enumerator_VerifyState_m61579_gshared (Enumerator_t8451 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m61579(__this, method) (( void (*) (Enumerator_t8451 *, const MethodInfo*))Enumerator_VerifyState_m61579_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m61580_gshared (Enumerator_t8451 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m61580(__this, method) (( void (*) (Enumerator_t8451 *, const MethodInfo*))Enumerator_VerifyCurrent_m61580_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void Enumerator_Dispose_m61581_gshared (Enumerator_t8451 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m61581(__this, method) (( void (*) (Enumerator_t8451 *, const MethodInfo*))Enumerator_Dispose_m61581_gshared)(__this, method)
