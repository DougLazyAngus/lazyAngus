#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>
struct Enumerator_t8269;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>
struct Dictionary_2_t8266;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_130.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m59034_gshared (Enumerator_t8269 * __this, Dictionary_2_t8266 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m59034(__this, ___dictionary, method) (( void (*) (Enumerator_t8269 *, Dictionary_2_t8266 *, const MethodInfo*))Enumerator__ctor_m59034_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m59035_gshared (Enumerator_t8269 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m59035(__this, method) (( Object_t * (*) (Enumerator_t8269 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m59035_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m59036_gshared (Enumerator_t8269 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m59036(__this, method) (( void (*) (Enumerator_t8269 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m59036_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2086  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m59037_gshared (Enumerator_t8269 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m59037(__this, method) (( DictionaryEntry_t2086  (*) (Enumerator_t8269 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m59037_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m59038_gshared (Enumerator_t8269 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m59038(__this, method) (( Object_t * (*) (Enumerator_t8269 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m59038_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m59039_gshared (Enumerator_t8269 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m59039(__this, method) (( Object_t * (*) (Enumerator_t8269 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m59039_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m59040_gshared (Enumerator_t8269 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m59040(__this, method) (( bool (*) (Enumerator_t8269 *, const MethodInfo*))Enumerator_MoveNext_m59040_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t8263  Enumerator_get_Current_m59041_gshared (Enumerator_t8269 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m59041(__this, method) (( KeyValuePair_2_t8263  (*) (Enumerator_t8269 *, const MethodInfo*))Enumerator_get_Current_m59041_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::get_CurrentKey()
extern "C" int64_t Enumerator_get_CurrentKey_m59042_gshared (Enumerator_t8269 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m59042(__this, method) (( int64_t (*) (Enumerator_t8269 *, const MethodInfo*))Enumerator_get_CurrentKey_m59042_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m59043_gshared (Enumerator_t8269 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m59043(__this, method) (( int32_t (*) (Enumerator_t8269 *, const MethodInfo*))Enumerator_get_CurrentValue_m59043_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::Reset()
extern "C" void Enumerator_Reset_m59044_gshared (Enumerator_t8269 * __this, const MethodInfo* method);
#define Enumerator_Reset_m59044(__this, method) (( void (*) (Enumerator_t8269 *, const MethodInfo*))Enumerator_Reset_m59044_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m59045_gshared (Enumerator_t8269 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m59045(__this, method) (( void (*) (Enumerator_t8269 *, const MethodInfo*))Enumerator_VerifyState_m59045_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m59046_gshared (Enumerator_t8269 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m59046(__this, method) (( void (*) (Enumerator_t8269 *, const MethodInfo*))Enumerator_VerifyCurrent_m59046_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m59047_gshared (Enumerator_t8269 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m59047(__this, method) (( void (*) (Enumerator_t8269 *, const MethodInfo*))Enumerator_Dispose_m59047_gshared)(__this, method)
