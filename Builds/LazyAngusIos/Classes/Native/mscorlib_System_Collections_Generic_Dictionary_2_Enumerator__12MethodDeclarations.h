#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
struct Enumerator_t5359;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2805;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_18.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m21006_gshared (Enumerator_t5359 * __this, Dictionary_2_t2805 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m21006(__this, ___dictionary, method) (( void (*) (Enumerator_t5359 *, Dictionary_2_t2805 *, const MethodInfo*))Enumerator__ctor_m21006_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m21007_gshared (Enumerator_t5359 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m21007(__this, method) (( Object_t * (*) (Enumerator_t5359 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m21007_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m21008_gshared (Enumerator_t5359 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m21008(__this, method) (( void (*) (Enumerator_t5359 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m21008_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2090  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m21009_gshared (Enumerator_t5359 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m21009(__this, method) (( DictionaryEntry_t2090  (*) (Enumerator_t5359 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m21009_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m21010_gshared (Enumerator_t5359 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m21010(__this, method) (( Object_t * (*) (Enumerator_t5359 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m21010_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m21011_gshared (Enumerator_t5359 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m21011(__this, method) (( Object_t * (*) (Enumerator_t5359 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m21011_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m21012_gshared (Enumerator_t5359 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m21012(__this, method) (( bool (*) (Enumerator_t5359 *, const MethodInfo*))Enumerator_MoveNext_m21012_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" KeyValuePair_2_t5351  Enumerator_get_Current_m21013_gshared (Enumerator_t5359 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m21013(__this, method) (( KeyValuePair_2_t5351  (*) (Enumerator_t5359 *, const MethodInfo*))Enumerator_get_Current_m21013_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m21014_gshared (Enumerator_t5359 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m21014(__this, method) (( int32_t (*) (Enumerator_t5359 *, const MethodInfo*))Enumerator_get_CurrentKey_m21014_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m21015_gshared (Enumerator_t5359 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m21015(__this, method) (( Object_t * (*) (Enumerator_t5359 *, const MethodInfo*))Enumerator_get_CurrentValue_m21015_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Reset()
extern "C" void Enumerator_Reset_m21016_gshared (Enumerator_t5359 * __this, const MethodInfo* method);
#define Enumerator_Reset_m21016(__this, method) (( void (*) (Enumerator_t5359 *, const MethodInfo*))Enumerator_Reset_m21016_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m21017_gshared (Enumerator_t5359 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m21017(__this, method) (( void (*) (Enumerator_t5359 *, const MethodInfo*))Enumerator_VerifyState_m21017_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m21018_gshared (Enumerator_t5359 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m21018(__this, method) (( void (*) (Enumerator_t5359 *, const MethodInfo*))Enumerator_VerifyCurrent_m21018_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m21019_gshared (Enumerator_t5359 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m21019(__this, method) (( void (*) (Enumerator_t5359 *, const MethodInfo*))Enumerator_Dispose_m21019_gshared)(__this, method)
