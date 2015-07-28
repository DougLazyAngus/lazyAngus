#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>
struct Enumerator_t8262;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>
struct Dictionary_2_t8259;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_130.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m58987_gshared (Enumerator_t8262 * __this, Dictionary_2_t8259 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m58987(__this, ___dictionary, method) (( void (*) (Enumerator_t8262 *, Dictionary_2_t8259 *, const MethodInfo*))Enumerator__ctor_m58987_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m58988_gshared (Enumerator_t8262 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m58988(__this, method) (( Object_t * (*) (Enumerator_t8262 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m58988_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m58989_gshared (Enumerator_t8262 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m58989(__this, method) (( void (*) (Enumerator_t8262 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m58989_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2080  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m58990_gshared (Enumerator_t8262 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m58990(__this, method) (( DictionaryEntry_t2080  (*) (Enumerator_t8262 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m58990_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m58991_gshared (Enumerator_t8262 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m58991(__this, method) (( Object_t * (*) (Enumerator_t8262 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m58991_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m58992_gshared (Enumerator_t8262 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m58992(__this, method) (( Object_t * (*) (Enumerator_t8262 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m58992_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m58993_gshared (Enumerator_t8262 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m58993(__this, method) (( bool (*) (Enumerator_t8262 *, const MethodInfo*))Enumerator_MoveNext_m58993_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t8256  Enumerator_get_Current_m58994_gshared (Enumerator_t8262 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m58994(__this, method) (( KeyValuePair_2_t8256  (*) (Enumerator_t8262 *, const MethodInfo*))Enumerator_get_Current_m58994_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::get_CurrentKey()
extern "C" int64_t Enumerator_get_CurrentKey_m58995_gshared (Enumerator_t8262 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m58995(__this, method) (( int64_t (*) (Enumerator_t8262 *, const MethodInfo*))Enumerator_get_CurrentKey_m58995_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m58996_gshared (Enumerator_t8262 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m58996(__this, method) (( int32_t (*) (Enumerator_t8262 *, const MethodInfo*))Enumerator_get_CurrentValue_m58996_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::Reset()
extern "C" void Enumerator_Reset_m58997_gshared (Enumerator_t8262 * __this, const MethodInfo* method);
#define Enumerator_Reset_m58997(__this, method) (( void (*) (Enumerator_t8262 *, const MethodInfo*))Enumerator_Reset_m58997_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m58998_gshared (Enumerator_t8262 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m58998(__this, method) (( void (*) (Enumerator_t8262 *, const MethodInfo*))Enumerator_VerifyState_m58998_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m58999_gshared (Enumerator_t8262 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m58999(__this, method) (( void (*) (Enumerator_t8262 *, const MethodInfo*))Enumerator_VerifyCurrent_m58999_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m59000_gshared (Enumerator_t8262 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m59000(__this, method) (( void (*) (Enumerator_t8262 *, const MethodInfo*))Enumerator_Dispose_m59000_gshared)(__this, method)
