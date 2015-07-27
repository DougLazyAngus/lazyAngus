#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>
struct Enumerator_t4157;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t2117;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_48.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m28986_gshared (Enumerator_t4157 * __this, Dictionary_2_t2117 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m28986(__this, ___dictionary, method) (( void (*) (Enumerator_t4157 *, Dictionary_2_t2117 *, const MethodInfo*))Enumerator__ctor_m28986_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m28987_gshared (Enumerator_t4157 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m28987(__this, method) (( Object_t * (*) (Enumerator_t4157 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m28987_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2181  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m28988_gshared (Enumerator_t4157 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m28988(__this, method) (( DictionaryEntry_t2181  (*) (Enumerator_t4157 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m28988_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m28989_gshared (Enumerator_t4157 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m28989(__this, method) (( Object_t * (*) (Enumerator_t4157 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m28989_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m28990_gshared (Enumerator_t4157 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m28990(__this, method) (( Object_t * (*) (Enumerator_t4157 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m28990_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m28991_gshared (Enumerator_t4157 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m28991(__this, method) (( bool (*) (Enumerator_t4157 *, const MethodInfo*))Enumerator_MoveNext_m28991_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t4153  Enumerator_get_Current_m28992_gshared (Enumerator_t4157 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m28992(__this, method) (( KeyValuePair_2_t4153  (*) (Enumerator_t4157 *, const MethodInfo*))Enumerator_get_Current_m28992_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m28993_gshared (Enumerator_t4157 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m28993(__this, method) (( int32_t (*) (Enumerator_t4157 *, const MethodInfo*))Enumerator_get_CurrentKey_m28993_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m28994_gshared (Enumerator_t4157 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m28994(__this, method) (( int32_t (*) (Enumerator_t4157 *, const MethodInfo*))Enumerator_get_CurrentValue_m28994_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m28995_gshared (Enumerator_t4157 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m28995(__this, method) (( void (*) (Enumerator_t4157 *, const MethodInfo*))Enumerator_VerifyState_m28995_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m28996_gshared (Enumerator_t4157 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m28996(__this, method) (( void (*) (Enumerator_t4157 *, const MethodInfo*))Enumerator_VerifyCurrent_m28996_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m28997_gshared (Enumerator_t4157 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m28997(__this, method) (( void (*) (Enumerator_t4157 *, const MethodInfo*))Enumerator_Dispose_m28997_gshared)(__this, method)
