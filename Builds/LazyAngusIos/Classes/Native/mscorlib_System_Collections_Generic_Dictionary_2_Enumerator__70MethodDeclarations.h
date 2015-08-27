#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Enumerator_t8528;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t8525;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_136.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m62358_gshared (Enumerator_t8528 * __this, Dictionary_2_t8525 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m62358(__this, ___dictionary, method) (( void (*) (Enumerator_t8528 *, Dictionary_2_t8525 *, const MethodInfo*))Enumerator__ctor_m62358_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m62359_gshared (Enumerator_t8528 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m62359(__this, method) (( Object_t * (*) (Enumerator_t8528 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m62359_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m62360_gshared (Enumerator_t8528 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m62360(__this, method) (( void (*) (Enumerator_t8528 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m62360_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2140  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m62361_gshared (Enumerator_t8528 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m62361(__this, method) (( DictionaryEntry_t2140  (*) (Enumerator_t8528 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m62361_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m62362_gshared (Enumerator_t8528 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m62362(__this, method) (( Object_t * (*) (Enumerator_t8528 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m62362_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m62363_gshared (Enumerator_t8528 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m62363(__this, method) (( Object_t * (*) (Enumerator_t8528 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m62363_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool Enumerator_MoveNext_m62364_gshared (Enumerator_t8528 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m62364(__this, method) (( bool (*) (Enumerator_t8528 *, const MethodInfo*))Enumerator_MoveNext_m62364_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t8501  Enumerator_get_Current_m62365_gshared (Enumerator_t8528 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m62365(__this, method) (( KeyValuePair_2_t8501  (*) (Enumerator_t8528 *, const MethodInfo*))Enumerator_get_Current_m62365_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m62366_gshared (Enumerator_t8528 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m62366(__this, method) (( Object_t * (*) (Enumerator_t8528 *, const MethodInfo*))Enumerator_get_CurrentKey_m62366_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentValue()
extern "C" KeyValuePair_2_t70  Enumerator_get_CurrentValue_m62367_gshared (Enumerator_t8528 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m62367(__this, method) (( KeyValuePair_2_t70  (*) (Enumerator_t8528 *, const MethodInfo*))Enumerator_get_CurrentValue_m62367_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Reset()
extern "C" void Enumerator_Reset_m62368_gshared (Enumerator_t8528 * __this, const MethodInfo* method);
#define Enumerator_Reset_m62368(__this, method) (( void (*) (Enumerator_t8528 *, const MethodInfo*))Enumerator_Reset_m62368_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyState()
extern "C" void Enumerator_VerifyState_m62369_gshared (Enumerator_t8528 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m62369(__this, method) (( void (*) (Enumerator_t8528 *, const MethodInfo*))Enumerator_VerifyState_m62369_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m62370_gshared (Enumerator_t8528 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m62370(__this, method) (( void (*) (Enumerator_t8528 *, const MethodInfo*))Enumerator_VerifyCurrent_m62370_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void Enumerator_Dispose_m62371_gshared (Enumerator_t8528 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m62371(__this, method) (( void (*) (Enumerator_t8528 *, const MethodInfo*))Enumerator_Dispose_m62371_gshared)(__this, method)
