#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>
struct Enumerator_t8350;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>
struct Dictionary_2_t8347;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_131.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m59855_gshared (Enumerator_t8350 * __this, Dictionary_2_t8347 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m59855(__this, ___dictionary, method) (( void (*) (Enumerator_t8350 *, Dictionary_2_t8347 *, const MethodInfo*))Enumerator__ctor_m59855_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m59856_gshared (Enumerator_t8350 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m59856(__this, method) (( Object_t * (*) (Enumerator_t8350 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m59856_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m59857_gshared (Enumerator_t8350 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m59857(__this, method) (( void (*) (Enumerator_t8350 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m59857_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2140  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m59858_gshared (Enumerator_t8350 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m59858(__this, method) (( DictionaryEntry_t2140  (*) (Enumerator_t8350 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m59858_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m59859_gshared (Enumerator_t8350 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m59859(__this, method) (( Object_t * (*) (Enumerator_t8350 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m59859_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m59860_gshared (Enumerator_t8350 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m59860(__this, method) (( Object_t * (*) (Enumerator_t8350 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m59860_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m59861_gshared (Enumerator_t8350 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m59861(__this, method) (( bool (*) (Enumerator_t8350 *, const MethodInfo*))Enumerator_MoveNext_m59861_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t8344  Enumerator_get_Current_m59862_gshared (Enumerator_t8350 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m59862(__this, method) (( KeyValuePair_2_t8344  (*) (Enumerator_t8350 *, const MethodInfo*))Enumerator_get_Current_m59862_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::get_CurrentKey()
extern "C" int64_t Enumerator_get_CurrentKey_m59863_gshared (Enumerator_t8350 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m59863(__this, method) (( int64_t (*) (Enumerator_t8350 *, const MethodInfo*))Enumerator_get_CurrentKey_m59863_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m59864_gshared (Enumerator_t8350 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m59864(__this, method) (( int32_t (*) (Enumerator_t8350 *, const MethodInfo*))Enumerator_get_CurrentValue_m59864_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::Reset()
extern "C" void Enumerator_Reset_m59865_gshared (Enumerator_t8350 * __this, const MethodInfo* method);
#define Enumerator_Reset_m59865(__this, method) (( void (*) (Enumerator_t8350 *, const MethodInfo*))Enumerator_Reset_m59865_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m59866_gshared (Enumerator_t8350 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m59866(__this, method) (( void (*) (Enumerator_t8350 *, const MethodInfo*))Enumerator_VerifyState_m59866_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m59867_gshared (Enumerator_t8350 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m59867(__this, method) (( void (*) (Enumerator_t8350 *, const MethodInfo*))Enumerator_VerifyCurrent_m59867_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m59868_gshared (Enumerator_t8350 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m59868(__this, method) (( void (*) (Enumerator_t8350 *, const MethodInfo*))Enumerator_Dispose_m59868_gshared)(__this, method)
