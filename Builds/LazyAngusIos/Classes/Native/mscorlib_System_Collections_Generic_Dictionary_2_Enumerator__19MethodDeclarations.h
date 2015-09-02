#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
struct Enumerator_t5553;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t5548;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_24.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m24035_gshared (Enumerator_t5553 * __this, Dictionary_2_t5548 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m24035(__this, ___dictionary, method) (( void (*) (Enumerator_t5553 *, Dictionary_2_t5548 *, const MethodInfo*))Enumerator__ctor_m24035_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m24036_gshared (Enumerator_t5553 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m24036(__this, method) (( Object_t * (*) (Enumerator_t5553 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m24036_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m24037_gshared (Enumerator_t5553 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m24037(__this, method) (( void (*) (Enumerator_t5553 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m24037_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2156  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m24038_gshared (Enumerator_t5553 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m24038(__this, method) (( DictionaryEntry_t2156  (*) (Enumerator_t5553 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m24038_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m24039_gshared (Enumerator_t5553 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m24039(__this, method) (( Object_t * (*) (Enumerator_t5553 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m24039_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m24040_gshared (Enumerator_t5553 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m24040(__this, method) (( Object_t * (*) (Enumerator_t5553 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m24040_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m24041_gshared (Enumerator_t5553 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m24041(__this, method) (( bool (*) (Enumerator_t5553 *, const MethodInfo*))Enumerator_MoveNext_m24041_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t5549  Enumerator_get_Current_m24042_gshared (Enumerator_t5553 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m24042(__this, method) (( KeyValuePair_2_t5549  (*) (Enumerator_t5553 *, const MethodInfo*))Enumerator_get_Current_m24042_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m24043_gshared (Enumerator_t5553 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m24043(__this, method) (( Object_t * (*) (Enumerator_t5553 *, const MethodInfo*))Enumerator_get_CurrentKey_m24043_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m24044_gshared (Enumerator_t5553 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m24044(__this, method) (( int32_t (*) (Enumerator_t5553 *, const MethodInfo*))Enumerator_get_CurrentValue_m24044_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Reset()
extern "C" void Enumerator_Reset_m24045_gshared (Enumerator_t5553 * __this, const MethodInfo* method);
#define Enumerator_Reset_m24045(__this, method) (( void (*) (Enumerator_t5553 *, const MethodInfo*))Enumerator_Reset_m24045_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m24046_gshared (Enumerator_t5553 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m24046(__this, method) (( void (*) (Enumerator_t5553 *, const MethodInfo*))Enumerator_VerifyState_m24046_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m24047_gshared (Enumerator_t5553 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m24047(__this, method) (( void (*) (Enumerator_t5553 *, const MethodInfo*))Enumerator_VerifyCurrent_m24047_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m24048_gshared (Enumerator_t5553 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m24048(__this, method) (( void (*) (Enumerator_t5553 *, const MethodInfo*))Enumerator_Dispose_m24048_gshared)(__this, method)
