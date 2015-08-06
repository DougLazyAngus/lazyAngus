#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>
struct Enumerator_t8576;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t4078;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_142.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m63191_gshared (Enumerator_t8576 * __this, Dictionary_2_t4078 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m63191(__this, ___dictionary, method) (( void (*) (Enumerator_t8576 *, Dictionary_2_t4078 *, const MethodInfo*))Enumerator__ctor_m63191_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m63192_gshared (Enumerator_t8576 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m63192(__this, method) (( Object_t * (*) (Enumerator_t8576 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m63192_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m63193_gshared (Enumerator_t8576 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m63193(__this, method) (( void (*) (Enumerator_t8576 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m63193_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2088  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m63194_gshared (Enumerator_t8576 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m63194(__this, method) (( DictionaryEntry_t2088  (*) (Enumerator_t8576 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m63194_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m63195_gshared (Enumerator_t8576 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m63195(__this, method) (( Object_t * (*) (Enumerator_t8576 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m63195_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m63196_gshared (Enumerator_t8576 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m63196(__this, method) (( Object_t * (*) (Enumerator_t8576 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m63196_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m63197_gshared (Enumerator_t8576 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m63197(__this, method) (( bool (*) (Enumerator_t8576 *, const MethodInfo*))Enumerator_MoveNext_m63197_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t8572  Enumerator_get_Current_m63198_gshared (Enumerator_t8576 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m63198(__this, method) (( KeyValuePair_2_t8572  (*) (Enumerator_t8576 *, const MethodInfo*))Enumerator_get_Current_m63198_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m63199_gshared (Enumerator_t8576 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m63199(__this, method) (( int32_t (*) (Enumerator_t8576 *, const MethodInfo*))Enumerator_get_CurrentKey_m63199_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m63200_gshared (Enumerator_t8576 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m63200(__this, method) (( int32_t (*) (Enumerator_t8576 *, const MethodInfo*))Enumerator_get_CurrentValue_m63200_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::Reset()
extern "C" void Enumerator_Reset_m63201_gshared (Enumerator_t8576 * __this, const MethodInfo* method);
#define Enumerator_Reset_m63201(__this, method) (( void (*) (Enumerator_t8576 *, const MethodInfo*))Enumerator_Reset_m63201_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m63202_gshared (Enumerator_t8576 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m63202(__this, method) (( void (*) (Enumerator_t8576 *, const MethodInfo*))Enumerator_VerifyState_m63202_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m63203_gshared (Enumerator_t8576 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m63203(__this, method) (( void (*) (Enumerator_t8576 *, const MethodInfo*))Enumerator_VerifyCurrent_m63203_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m63204_gshared (Enumerator_t8576 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m63204(__this, method) (( void (*) (Enumerator_t8576 *, const MethodInfo*))Enumerator_Dispose_m63204_gshared)(__this, method)
