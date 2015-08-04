#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Enumerator_t8449;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t8446;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_135.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m61553_gshared (Enumerator_t8449 * __this, Dictionary_2_t8446 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m61553(__this, ___dictionary, method) (( void (*) (Enumerator_t8449 *, Dictionary_2_t8446 *, const MethodInfo*))Enumerator__ctor_m61553_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m61554_gshared (Enumerator_t8449 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m61554(__this, method) (( Object_t * (*) (Enumerator_t8449 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m61554_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m61555_gshared (Enumerator_t8449 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m61555(__this, method) (( void (*) (Enumerator_t8449 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m61555_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2088  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m61556_gshared (Enumerator_t8449 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m61556(__this, method) (( DictionaryEntry_t2088  (*) (Enumerator_t8449 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m61556_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m61557_gshared (Enumerator_t8449 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m61557(__this, method) (( Object_t * (*) (Enumerator_t8449 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m61557_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m61558_gshared (Enumerator_t8449 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m61558(__this, method) (( Object_t * (*) (Enumerator_t8449 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m61558_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool Enumerator_MoveNext_m61559_gshared (Enumerator_t8449 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m61559(__this, method) (( bool (*) (Enumerator_t8449 *, const MethodInfo*))Enumerator_MoveNext_m61559_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t8422  Enumerator_get_Current_m61560_gshared (Enumerator_t8449 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m61560(__this, method) (( KeyValuePair_2_t8422  (*) (Enumerator_t8449 *, const MethodInfo*))Enumerator_get_Current_m61560_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m61561_gshared (Enumerator_t8449 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m61561(__this, method) (( Object_t * (*) (Enumerator_t8449 *, const MethodInfo*))Enumerator_get_CurrentKey_m61561_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentValue()
extern "C" KeyValuePair_2_t70  Enumerator_get_CurrentValue_m61562_gshared (Enumerator_t8449 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m61562(__this, method) (( KeyValuePair_2_t70  (*) (Enumerator_t8449 *, const MethodInfo*))Enumerator_get_CurrentValue_m61562_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Reset()
extern "C" void Enumerator_Reset_m61563_gshared (Enumerator_t8449 * __this, const MethodInfo* method);
#define Enumerator_Reset_m61563(__this, method) (( void (*) (Enumerator_t8449 *, const MethodInfo*))Enumerator_Reset_m61563_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyState()
extern "C" void Enumerator_VerifyState_m61564_gshared (Enumerator_t8449 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m61564(__this, method) (( void (*) (Enumerator_t8449 *, const MethodInfo*))Enumerator_VerifyState_m61564_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m61565_gshared (Enumerator_t8449 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m61565(__this, method) (( void (*) (Enumerator_t8449 *, const MethodInfo*))Enumerator_VerifyCurrent_m61565_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void Enumerator_Dispose_m61566_gshared (Enumerator_t8449 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m61566(__this, method) (( void (*) (Enumerator_t8449 *, const MethodInfo*))Enumerator_Dispose_m61566_gshared)(__this, method)
