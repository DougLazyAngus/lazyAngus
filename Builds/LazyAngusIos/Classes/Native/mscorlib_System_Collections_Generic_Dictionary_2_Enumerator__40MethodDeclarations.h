#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>
struct Enumerator_t6197;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>
struct Dictionary_2_t6194;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_46.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m33424_gshared (Enumerator_t6197 * __this, Dictionary_2_t6194 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m33424(__this, ___dictionary, method) (( void (*) (Enumerator_t6197 *, Dictionary_2_t6194 *, const MethodInfo*))Enumerator__ctor_m33424_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m33425_gshared (Enumerator_t6197 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m33425(__this, method) (( Object_t * (*) (Enumerator_t6197 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m33425_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m33426_gshared (Enumerator_t6197 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m33426(__this, method) (( void (*) (Enumerator_t6197 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m33426_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2137  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m33427_gshared (Enumerator_t6197 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m33427(__this, method) (( DictionaryEntry_t2137  (*) (Enumerator_t6197 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m33427_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m33428_gshared (Enumerator_t6197 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m33428(__this, method) (( Object_t * (*) (Enumerator_t6197 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m33428_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m33429_gshared (Enumerator_t6197 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m33429(__this, method) (( Object_t * (*) (Enumerator_t6197 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m33429_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::MoveNext()
extern "C" bool Enumerator_MoveNext_m33430_gshared (Enumerator_t6197 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m33430(__this, method) (( bool (*) (Enumerator_t6197 *, const MethodInfo*))Enumerator_MoveNext_m33430_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::get_Current()
extern "C" KeyValuePair_2_t6191  Enumerator_get_Current_m33431_gshared (Enumerator_t6197 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m33431(__this, method) (( KeyValuePair_2_t6191  (*) (Enumerator_t6197 *, const MethodInfo*))Enumerator_get_Current_m33431_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::get_CurrentKey()
extern "C" int64_t Enumerator_get_CurrentKey_m33432_gshared (Enumerator_t6197 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m33432(__this, method) (( int64_t (*) (Enumerator_t6197 *, const MethodInfo*))Enumerator_get_CurrentKey_m33432_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::get_CurrentValue()
extern "C" uint8_t Enumerator_get_CurrentValue_m33433_gshared (Enumerator_t6197 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m33433(__this, method) (( uint8_t (*) (Enumerator_t6197 *, const MethodInfo*))Enumerator_get_CurrentValue_m33433_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::Reset()
extern "C" void Enumerator_Reset_m33434_gshared (Enumerator_t6197 * __this, const MethodInfo* method);
#define Enumerator_Reset_m33434(__this, method) (( void (*) (Enumerator_t6197 *, const MethodInfo*))Enumerator_Reset_m33434_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::VerifyState()
extern "C" void Enumerator_VerifyState_m33435_gshared (Enumerator_t6197 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m33435(__this, method) (( void (*) (Enumerator_t6197 *, const MethodInfo*))Enumerator_VerifyState_m33435_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m33436_gshared (Enumerator_t6197 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m33436(__this, method) (( void (*) (Enumerator_t6197 *, const MethodInfo*))Enumerator_VerifyCurrent_m33436_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::Dispose()
extern "C" void Enumerator_Dispose_m33437_gshared (Enumerator_t6197 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m33437(__this, method) (( void (*) (Enumerator_t6197 *, const MethodInfo*))Enumerator_Dispose_m33437_gshared)(__this, method)
