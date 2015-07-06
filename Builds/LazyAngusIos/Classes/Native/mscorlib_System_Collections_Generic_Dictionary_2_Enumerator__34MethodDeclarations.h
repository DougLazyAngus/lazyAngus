#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Enumerator_t3937;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t3934;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_36.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m26508_gshared (Enumerator_t3937 * __this, Dictionary_2_t3934 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m26508(__this, ___dictionary, method) (( void (*) (Enumerator_t3937 *, Dictionary_2_t3934 *, const MethodInfo*))Enumerator__ctor_m26508_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m26509_gshared (Enumerator_t3937 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m26509(__this, method) (( Object_t * (*) (Enumerator_t3937 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m26509_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1685  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m26510_gshared (Enumerator_t3937 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m26510(__this, method) (( DictionaryEntry_t1685  (*) (Enumerator_t3937 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m26510_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m26511_gshared (Enumerator_t3937 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m26511(__this, method) (( Object_t * (*) (Enumerator_t3937 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m26511_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m26512_gshared (Enumerator_t3937 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m26512(__this, method) (( Object_t * (*) (Enumerator_t3937 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m26512_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool Enumerator_MoveNext_m26513_gshared (Enumerator_t3937 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m26513(__this, method) (( bool (*) (Enumerator_t3937 *, const MethodInfo*))Enumerator_MoveNext_m26513_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t3908  Enumerator_get_Current_m26514_gshared (Enumerator_t3937 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m26514(__this, method) (( KeyValuePair_2_t3908  (*) (Enumerator_t3937 *, const MethodInfo*))Enumerator_get_Current_m26514_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m26515_gshared (Enumerator_t3937 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m26515(__this, method) (( Object_t * (*) (Enumerator_t3937 *, const MethodInfo*))Enumerator_get_CurrentKey_m26515_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentValue()
extern "C" KeyValuePair_2_t40  Enumerator_get_CurrentValue_m26516_gshared (Enumerator_t3937 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m26516(__this, method) (( KeyValuePair_2_t40  (*) (Enumerator_t3937 *, const MethodInfo*))Enumerator_get_CurrentValue_m26516_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyState()
extern "C" void Enumerator_VerifyState_m26517_gshared (Enumerator_t3937 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m26517(__this, method) (( void (*) (Enumerator_t3937 *, const MethodInfo*))Enumerator_VerifyState_m26517_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m26518_gshared (Enumerator_t3937 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m26518(__this, method) (( void (*) (Enumerator_t3937 *, const MethodInfo*))Enumerator_VerifyCurrent_m26518_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void Enumerator_Dispose_m26519_gshared (Enumerator_t3937 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m26519(__this, method) (( void (*) (Enumerator_t3937 *, const MethodInfo*))Enumerator_Dispose_m26519_gshared)(__this, method)
