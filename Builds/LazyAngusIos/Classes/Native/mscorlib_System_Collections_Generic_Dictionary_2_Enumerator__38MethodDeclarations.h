#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Enumerator_t4032;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t4029;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_40.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m27638_gshared (Enumerator_t4032 * __this, Dictionary_2_t4029 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m27638(__this, ___dictionary, method) (( void (*) (Enumerator_t4032 *, Dictionary_2_t4029 *, const MethodInfo*))Enumerator__ctor_m27638_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m27639_gshared (Enumerator_t4032 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m27639(__this, method) (( Object_t * (*) (Enumerator_t4032 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m27639_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2181  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m27640_gshared (Enumerator_t4032 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m27640(__this, method) (( DictionaryEntry_t2181  (*) (Enumerator_t4032 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m27640_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m27641_gshared (Enumerator_t4032 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m27641(__this, method) (( Object_t * (*) (Enumerator_t4032 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m27641_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m27642_gshared (Enumerator_t4032 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m27642(__this, method) (( Object_t * (*) (Enumerator_t4032 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m27642_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool Enumerator_MoveNext_m27643_gshared (Enumerator_t4032 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m27643(__this, method) (( bool (*) (Enumerator_t4032 *, const MethodInfo*))Enumerator_MoveNext_m27643_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t4003  Enumerator_get_Current_m27644_gshared (Enumerator_t4032 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m27644(__this, method) (( KeyValuePair_2_t4003  (*) (Enumerator_t4032 *, const MethodInfo*))Enumerator_get_Current_m27644_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m27645_gshared (Enumerator_t4032 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m27645(__this, method) (( Object_t * (*) (Enumerator_t4032 *, const MethodInfo*))Enumerator_get_CurrentKey_m27645_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentValue()
extern "C" KeyValuePair_2_t40  Enumerator_get_CurrentValue_m27646_gshared (Enumerator_t4032 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m27646(__this, method) (( KeyValuePair_2_t40  (*) (Enumerator_t4032 *, const MethodInfo*))Enumerator_get_CurrentValue_m27646_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyState()
extern "C" void Enumerator_VerifyState_m27647_gshared (Enumerator_t4032 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m27647(__this, method) (( void (*) (Enumerator_t4032 *, const MethodInfo*))Enumerator_VerifyState_m27647_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m27648_gshared (Enumerator_t4032 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m27648(__this, method) (( void (*) (Enumerator_t4032 *, const MethodInfo*))Enumerator_VerifyCurrent_m27648_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void Enumerator_Dispose_m27649_gshared (Enumerator_t4032 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m27649(__this, method) (( void (*) (Enumerator_t4032 *, const MethodInfo*))Enumerator_Dispose_m27649_gshared)(__this, method)
