#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Enumerator_t3913;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t3910;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_36.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m26350_gshared (Enumerator_t3913 * __this, Dictionary_2_t3910 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m26350(__this, ___dictionary, method) (( void (*) (Enumerator_t3913 *, Dictionary_2_t3910 *, const MethodInfo*))Enumerator__ctor_m26350_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m26351_gshared (Enumerator_t3913 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m26351(__this, method) (( Object_t * (*) (Enumerator_t3913 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m26351_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1663  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m26352_gshared (Enumerator_t3913 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m26352(__this, method) (( DictionaryEntry_t1663  (*) (Enumerator_t3913 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m26352_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m26353_gshared (Enumerator_t3913 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m26353(__this, method) (( Object_t * (*) (Enumerator_t3913 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m26353_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m26354_gshared (Enumerator_t3913 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m26354(__this, method) (( Object_t * (*) (Enumerator_t3913 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m26354_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool Enumerator_MoveNext_m26355_gshared (Enumerator_t3913 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m26355(__this, method) (( bool (*) (Enumerator_t3913 *, const MethodInfo*))Enumerator_MoveNext_m26355_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t3884  Enumerator_get_Current_m26356_gshared (Enumerator_t3913 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m26356(__this, method) (( KeyValuePair_2_t3884  (*) (Enumerator_t3913 *, const MethodInfo*))Enumerator_get_Current_m26356_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m26357_gshared (Enumerator_t3913 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m26357(__this, method) (( Object_t * (*) (Enumerator_t3913 *, const MethodInfo*))Enumerator_get_CurrentKey_m26357_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentValue()
extern "C" KeyValuePair_2_t40  Enumerator_get_CurrentValue_m26358_gshared (Enumerator_t3913 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m26358(__this, method) (( KeyValuePair_2_t40  (*) (Enumerator_t3913 *, const MethodInfo*))Enumerator_get_CurrentValue_m26358_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyState()
extern "C" void Enumerator_VerifyState_m26359_gshared (Enumerator_t3913 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m26359(__this, method) (( void (*) (Enumerator_t3913 *, const MethodInfo*))Enumerator_VerifyState_m26359_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m26360_gshared (Enumerator_t3913 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m26360(__this, method) (( void (*) (Enumerator_t3913 *, const MethodInfo*))Enumerator_VerifyCurrent_m26360_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void Enumerator_Dispose_m26361_gshared (Enumerator_t3913 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m26361(__this, method) (( void (*) (Enumerator_t3913 *, const MethodInfo*))Enumerator_Dispose_m26361_gshared)(__this, method)
