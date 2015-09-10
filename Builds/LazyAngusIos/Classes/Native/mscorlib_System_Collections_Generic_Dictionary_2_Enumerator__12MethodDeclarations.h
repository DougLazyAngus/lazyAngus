#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
struct Enumerator_t5964;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2881;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_18.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m25657_gshared (Enumerator_t5964 * __this, Dictionary_2_t2881 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m25657(__this, ___dictionary, method) (( void (*) (Enumerator_t5964 *, Dictionary_2_t2881 *, const MethodInfo*))Enumerator__ctor_m25657_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m25658_gshared (Enumerator_t5964 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m25658(__this, method) (( Object_t * (*) (Enumerator_t5964 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m25658_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m25659_gshared (Enumerator_t5964 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m25659(__this, method) (( void (*) (Enumerator_t5964 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m25659_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2167  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m25660_gshared (Enumerator_t5964 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m25660(__this, method) (( DictionaryEntry_t2167  (*) (Enumerator_t5964 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m25660_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m25661_gshared (Enumerator_t5964 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m25661(__this, method) (( Object_t * (*) (Enumerator_t5964 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m25661_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m25662_gshared (Enumerator_t5964 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m25662(__this, method) (( Object_t * (*) (Enumerator_t5964 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m25662_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m25663_gshared (Enumerator_t5964 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m25663(__this, method) (( bool (*) (Enumerator_t5964 *, const MethodInfo*))Enumerator_MoveNext_m25663_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" KeyValuePair_2_t5956  Enumerator_get_Current_m25664_gshared (Enumerator_t5964 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m25664(__this, method) (( KeyValuePair_2_t5956  (*) (Enumerator_t5964 *, const MethodInfo*))Enumerator_get_Current_m25664_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m25665_gshared (Enumerator_t5964 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m25665(__this, method) (( int32_t (*) (Enumerator_t5964 *, const MethodInfo*))Enumerator_get_CurrentKey_m25665_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m25666_gshared (Enumerator_t5964 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m25666(__this, method) (( Object_t * (*) (Enumerator_t5964 *, const MethodInfo*))Enumerator_get_CurrentValue_m25666_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Reset()
extern "C" void Enumerator_Reset_m25667_gshared (Enumerator_t5964 * __this, const MethodInfo* method);
#define Enumerator_Reset_m25667(__this, method) (( void (*) (Enumerator_t5964 *, const MethodInfo*))Enumerator_Reset_m25667_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m25668_gshared (Enumerator_t5964 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m25668(__this, method) (( void (*) (Enumerator_t5964 *, const MethodInfo*))Enumerator_VerifyState_m25668_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m25669_gshared (Enumerator_t5964 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m25669(__this, method) (( void (*) (Enumerator_t5964 *, const MethodInfo*))Enumerator_VerifyCurrent_m25669_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m25670_gshared (Enumerator_t5964 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m25670(__this, method) (( void (*) (Enumerator_t5964 *, const MethodInfo*))Enumerator_Dispose_m25670_gshared)(__this, method)
