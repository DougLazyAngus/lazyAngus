#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>
struct Enumerator_t4155;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t2115;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_48.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m28971_gshared (Enumerator_t4155 * __this, Dictionary_2_t2115 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m28971(__this, ___dictionary, method) (( void (*) (Enumerator_t4155 *, Dictionary_2_t2115 *, const MethodInfo*))Enumerator__ctor_m28971_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m28972_gshared (Enumerator_t4155 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m28972(__this, method) (( Object_t * (*) (Enumerator_t4155 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m28972_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2179  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m28973_gshared (Enumerator_t4155 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m28973(__this, method) (( DictionaryEntry_t2179  (*) (Enumerator_t4155 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m28973_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m28974_gshared (Enumerator_t4155 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m28974(__this, method) (( Object_t * (*) (Enumerator_t4155 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m28974_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m28975_gshared (Enumerator_t4155 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m28975(__this, method) (( Object_t * (*) (Enumerator_t4155 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m28975_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m28976_gshared (Enumerator_t4155 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m28976(__this, method) (( bool (*) (Enumerator_t4155 *, const MethodInfo*))Enumerator_MoveNext_m28976_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t4151  Enumerator_get_Current_m28977_gshared (Enumerator_t4155 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m28977(__this, method) (( KeyValuePair_2_t4151  (*) (Enumerator_t4155 *, const MethodInfo*))Enumerator_get_Current_m28977_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m28978_gshared (Enumerator_t4155 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m28978(__this, method) (( int32_t (*) (Enumerator_t4155 *, const MethodInfo*))Enumerator_get_CurrentKey_m28978_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m28979_gshared (Enumerator_t4155 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m28979(__this, method) (( int32_t (*) (Enumerator_t4155 *, const MethodInfo*))Enumerator_get_CurrentValue_m28979_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m28980_gshared (Enumerator_t4155 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m28980(__this, method) (( void (*) (Enumerator_t4155 *, const MethodInfo*))Enumerator_VerifyState_m28980_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m28981_gshared (Enumerator_t4155 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m28981(__this, method) (( void (*) (Enumerator_t4155 *, const MethodInfo*))Enumerator_VerifyCurrent_m28981_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m28982_gshared (Enumerator_t4155 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m28982(__this, method) (( void (*) (Enumerator_t4155 *, const MethodInfo*))Enumerator_Dispose_m28982_gshared)(__this, method)
