#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Enumerator_t9105;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t9102;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_136.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m67047_gshared (Enumerator_t9105 * __this, Dictionary_2_t9102 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m67047(__this, ___dictionary, method) (( void (*) (Enumerator_t9105 *, Dictionary_2_t9102 *, const MethodInfo*))Enumerator__ctor_m67047_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m67048_gshared (Enumerator_t9105 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m67048(__this, method) (( Object_t * (*) (Enumerator_t9105 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m67048_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m67049_gshared (Enumerator_t9105 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m67049(__this, method) (( void (*) (Enumerator_t9105 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m67049_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2167  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m67050_gshared (Enumerator_t9105 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m67050(__this, method) (( DictionaryEntry_t2167  (*) (Enumerator_t9105 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m67050_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m67051_gshared (Enumerator_t9105 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m67051(__this, method) (( Object_t * (*) (Enumerator_t9105 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m67051_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m67052_gshared (Enumerator_t9105 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m67052(__this, method) (( Object_t * (*) (Enumerator_t9105 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m67052_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool Enumerator_MoveNext_m67053_gshared (Enumerator_t9105 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m67053(__this, method) (( bool (*) (Enumerator_t9105 *, const MethodInfo*))Enumerator_MoveNext_m67053_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t9078  Enumerator_get_Current_m67054_gshared (Enumerator_t9105 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m67054(__this, method) (( KeyValuePair_2_t9078  (*) (Enumerator_t9105 *, const MethodInfo*))Enumerator_get_Current_m67054_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m67055_gshared (Enumerator_t9105 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m67055(__this, method) (( Object_t * (*) (Enumerator_t9105 *, const MethodInfo*))Enumerator_get_CurrentKey_m67055_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentValue()
extern "C" KeyValuePair_2_t70  Enumerator_get_CurrentValue_m67056_gshared (Enumerator_t9105 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m67056(__this, method) (( KeyValuePair_2_t70  (*) (Enumerator_t9105 *, const MethodInfo*))Enumerator_get_CurrentValue_m67056_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Reset()
extern "C" void Enumerator_Reset_m67057_gshared (Enumerator_t9105 * __this, const MethodInfo* method);
#define Enumerator_Reset_m67057(__this, method) (( void (*) (Enumerator_t9105 *, const MethodInfo*))Enumerator_Reset_m67057_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyState()
extern "C" void Enumerator_VerifyState_m67058_gshared (Enumerator_t9105 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m67058(__this, method) (( void (*) (Enumerator_t9105 *, const MethodInfo*))Enumerator_VerifyState_m67058_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m67059_gshared (Enumerator_t9105 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m67059(__this, method) (( void (*) (Enumerator_t9105 *, const MethodInfo*))Enumerator_VerifyCurrent_m67059_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void Enumerator_Dispose_m67060_gshared (Enumerator_t9105 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m67060(__this, method) (( void (*) (Enumerator_t9105 *, const MethodInfo*))Enumerator_Dispose_m67060_gshared)(__this, method)
