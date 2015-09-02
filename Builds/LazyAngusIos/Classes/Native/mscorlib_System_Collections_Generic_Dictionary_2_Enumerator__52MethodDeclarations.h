#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>
struct Enumerator_t7119;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Double>
struct Dictionary_2_t7116;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_54.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m45279_gshared (Enumerator_t7119 * __this, Dictionary_2_t7116 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m45279(__this, ___dictionary, method) (( void (*) (Enumerator_t7119 *, Dictionary_2_t7116 *, const MethodInfo*))Enumerator__ctor_m45279_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m45281_gshared (Enumerator_t7119 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m45281(__this, method) (( Object_t * (*) (Enumerator_t7119 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m45281_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m45283_gshared (Enumerator_t7119 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m45283(__this, method) (( void (*) (Enumerator_t7119 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m45283_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2156  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m45285_gshared (Enumerator_t7119 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m45285(__this, method) (( DictionaryEntry_t2156  (*) (Enumerator_t7119 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m45285_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m45287_gshared (Enumerator_t7119 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m45287(__this, method) (( Object_t * (*) (Enumerator_t7119 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m45287_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m45289_gshared (Enumerator_t7119 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m45289(__this, method) (( Object_t * (*) (Enumerator_t7119 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m45289_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::MoveNext()
extern "C" bool Enumerator_MoveNext_m45291_gshared (Enumerator_t7119 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m45291(__this, method) (( bool (*) (Enumerator_t7119 *, const MethodInfo*))Enumerator_MoveNext_m45291_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::get_Current()
extern "C" KeyValuePair_2_t7042  Enumerator_get_Current_m45293_gshared (Enumerator_t7119 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m45293(__this, method) (( KeyValuePair_2_t7042  (*) (Enumerator_t7119 *, const MethodInfo*))Enumerator_get_Current_m45293_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m45295_gshared (Enumerator_t7119 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m45295(__this, method) (( Object_t * (*) (Enumerator_t7119 *, const MethodInfo*))Enumerator_get_CurrentKey_m45295_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::get_CurrentValue()
extern "C" double Enumerator_get_CurrentValue_m45297_gshared (Enumerator_t7119 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m45297(__this, method) (( double (*) (Enumerator_t7119 *, const MethodInfo*))Enumerator_get_CurrentValue_m45297_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::Reset()
extern "C" void Enumerator_Reset_m45299_gshared (Enumerator_t7119 * __this, const MethodInfo* method);
#define Enumerator_Reset_m45299(__this, method) (( void (*) (Enumerator_t7119 *, const MethodInfo*))Enumerator_Reset_m45299_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::VerifyState()
extern "C" void Enumerator_VerifyState_m45301_gshared (Enumerator_t7119 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m45301(__this, method) (( void (*) (Enumerator_t7119 *, const MethodInfo*))Enumerator_VerifyState_m45301_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m45303_gshared (Enumerator_t7119 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m45303(__this, method) (( void (*) (Enumerator_t7119 *, const MethodInfo*))Enumerator_VerifyCurrent_m45303_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::Dispose()
extern "C" void Enumerator_Dispose_m45305_gshared (Enumerator_t7119 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m45305(__this, method) (( void (*) (Enumerator_t7119 *, const MethodInfo*))Enumerator_Dispose_m45305_gshared)(__this, method)
