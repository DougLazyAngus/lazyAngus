#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>
struct Enumerator_t4156;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t2116;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_48.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m28979_gshared (Enumerator_t4156 * __this, Dictionary_2_t2116 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m28979(__this, ___dictionary, method) (( void (*) (Enumerator_t4156 *, Dictionary_2_t2116 *, const MethodInfo*))Enumerator__ctor_m28979_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m28980_gshared (Enumerator_t4156 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m28980(__this, method) (( Object_t * (*) (Enumerator_t4156 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m28980_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2180  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m28981_gshared (Enumerator_t4156 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m28981(__this, method) (( DictionaryEntry_t2180  (*) (Enumerator_t4156 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m28981_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m28982_gshared (Enumerator_t4156 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m28982(__this, method) (( Object_t * (*) (Enumerator_t4156 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m28982_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m28983_gshared (Enumerator_t4156 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m28983(__this, method) (( Object_t * (*) (Enumerator_t4156 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m28983_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m28984_gshared (Enumerator_t4156 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m28984(__this, method) (( bool (*) (Enumerator_t4156 *, const MethodInfo*))Enumerator_MoveNext_m28984_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t4152  Enumerator_get_Current_m28985_gshared (Enumerator_t4156 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m28985(__this, method) (( KeyValuePair_2_t4152  (*) (Enumerator_t4156 *, const MethodInfo*))Enumerator_get_Current_m28985_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m28986_gshared (Enumerator_t4156 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m28986(__this, method) (( int32_t (*) (Enumerator_t4156 *, const MethodInfo*))Enumerator_get_CurrentKey_m28986_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m28987_gshared (Enumerator_t4156 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m28987(__this, method) (( int32_t (*) (Enumerator_t4156 *, const MethodInfo*))Enumerator_get_CurrentValue_m28987_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m28988_gshared (Enumerator_t4156 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m28988(__this, method) (( void (*) (Enumerator_t4156 *, const MethodInfo*))Enumerator_VerifyState_m28988_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m28989_gshared (Enumerator_t4156 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m28989(__this, method) (( void (*) (Enumerator_t4156 *, const MethodInfo*))Enumerator_VerifyCurrent_m28989_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m28990_gshared (Enumerator_t4156 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m28990(__this, method) (( void (*) (Enumerator_t4156 *, const MethodInfo*))Enumerator_Dispose_m28990_gshared)(__this, method)
