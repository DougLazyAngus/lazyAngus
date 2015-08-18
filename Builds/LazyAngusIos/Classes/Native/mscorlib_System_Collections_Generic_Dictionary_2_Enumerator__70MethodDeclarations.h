#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Enumerator_t8521;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t8518;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_136.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m62234_gshared (Enumerator_t8521 * __this, Dictionary_2_t8518 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m62234(__this, ___dictionary, method) (( void (*) (Enumerator_t8521 *, Dictionary_2_t8518 *, const MethodInfo*))Enumerator__ctor_m62234_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m62235_gshared (Enumerator_t8521 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m62235(__this, method) (( Object_t * (*) (Enumerator_t8521 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m62235_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m62236_gshared (Enumerator_t8521 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m62236(__this, method) (( void (*) (Enumerator_t8521 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m62236_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2139  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m62237_gshared (Enumerator_t8521 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m62237(__this, method) (( DictionaryEntry_t2139  (*) (Enumerator_t8521 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m62237_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m62238_gshared (Enumerator_t8521 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m62238(__this, method) (( Object_t * (*) (Enumerator_t8521 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m62238_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m62239_gshared (Enumerator_t8521 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m62239(__this, method) (( Object_t * (*) (Enumerator_t8521 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m62239_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool Enumerator_MoveNext_m62240_gshared (Enumerator_t8521 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m62240(__this, method) (( bool (*) (Enumerator_t8521 *, const MethodInfo*))Enumerator_MoveNext_m62240_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t8494  Enumerator_get_Current_m62241_gshared (Enumerator_t8521 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m62241(__this, method) (( KeyValuePair_2_t8494  (*) (Enumerator_t8521 *, const MethodInfo*))Enumerator_get_Current_m62241_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m62242_gshared (Enumerator_t8521 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m62242(__this, method) (( Object_t * (*) (Enumerator_t8521 *, const MethodInfo*))Enumerator_get_CurrentKey_m62242_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentValue()
extern "C" KeyValuePair_2_t70  Enumerator_get_CurrentValue_m62243_gshared (Enumerator_t8521 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m62243(__this, method) (( KeyValuePair_2_t70  (*) (Enumerator_t8521 *, const MethodInfo*))Enumerator_get_CurrentValue_m62243_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Reset()
extern "C" void Enumerator_Reset_m62244_gshared (Enumerator_t8521 * __this, const MethodInfo* method);
#define Enumerator_Reset_m62244(__this, method) (( void (*) (Enumerator_t8521 *, const MethodInfo*))Enumerator_Reset_m62244_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyState()
extern "C" void Enumerator_VerifyState_m62245_gshared (Enumerator_t8521 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m62245(__this, method) (( void (*) (Enumerator_t8521 *, const MethodInfo*))Enumerator_VerifyState_m62245_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m62246_gshared (Enumerator_t8521 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m62246(__this, method) (( void (*) (Enumerator_t8521 *, const MethodInfo*))Enumerator_VerifyCurrent_m62246_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void Enumerator_Dispose_m62247_gshared (Enumerator_t8521 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m62247(__this, method) (( void (*) (Enumerator_t8521 *, const MethodInfo*))Enumerator_Dispose_m62247_gshared)(__this, method)
