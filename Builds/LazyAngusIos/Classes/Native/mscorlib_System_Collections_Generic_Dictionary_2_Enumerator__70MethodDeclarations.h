#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Enumerator_t8557;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t8554;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_136.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m62690_gshared (Enumerator_t8557 * __this, Dictionary_2_t8554 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m62690(__this, ___dictionary, method) (( void (*) (Enumerator_t8557 *, Dictionary_2_t8554 *, const MethodInfo*))Enumerator__ctor_m62690_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m62691_gshared (Enumerator_t8557 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m62691(__this, method) (( Object_t * (*) (Enumerator_t8557 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m62691_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m62692_gshared (Enumerator_t8557 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m62692(__this, method) (( void (*) (Enumerator_t8557 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m62692_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2156  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m62693_gshared (Enumerator_t8557 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m62693(__this, method) (( DictionaryEntry_t2156  (*) (Enumerator_t8557 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m62693_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m62694_gshared (Enumerator_t8557 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m62694(__this, method) (( Object_t * (*) (Enumerator_t8557 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m62694_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m62695_gshared (Enumerator_t8557 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m62695(__this, method) (( Object_t * (*) (Enumerator_t8557 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m62695_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool Enumerator_MoveNext_m62696_gshared (Enumerator_t8557 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m62696(__this, method) (( bool (*) (Enumerator_t8557 *, const MethodInfo*))Enumerator_MoveNext_m62696_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t8530  Enumerator_get_Current_m62697_gshared (Enumerator_t8557 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m62697(__this, method) (( KeyValuePair_2_t8530  (*) (Enumerator_t8557 *, const MethodInfo*))Enumerator_get_Current_m62697_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m62698_gshared (Enumerator_t8557 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m62698(__this, method) (( Object_t * (*) (Enumerator_t8557 *, const MethodInfo*))Enumerator_get_CurrentKey_m62698_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentValue()
extern "C" KeyValuePair_2_t70  Enumerator_get_CurrentValue_m62699_gshared (Enumerator_t8557 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m62699(__this, method) (( KeyValuePair_2_t70  (*) (Enumerator_t8557 *, const MethodInfo*))Enumerator_get_CurrentValue_m62699_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Reset()
extern "C" void Enumerator_Reset_m62700_gshared (Enumerator_t8557 * __this, const MethodInfo* method);
#define Enumerator_Reset_m62700(__this, method) (( void (*) (Enumerator_t8557 *, const MethodInfo*))Enumerator_Reset_m62700_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyState()
extern "C" void Enumerator_VerifyState_m62701_gshared (Enumerator_t8557 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m62701(__this, method) (( void (*) (Enumerator_t8557 *, const MethodInfo*))Enumerator_VerifyState_m62701_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m62702_gshared (Enumerator_t8557 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m62702(__this, method) (( void (*) (Enumerator_t8557 *, const MethodInfo*))Enumerator_VerifyCurrent_m62702_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void Enumerator_Dispose_m62703_gshared (Enumerator_t8557 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m62703(__this, method) (( void (*) (Enumerator_t8557 *, const MethodInfo*))Enumerator_Dispose_m62703_gshared)(__this, method)
