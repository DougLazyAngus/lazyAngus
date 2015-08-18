#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>
struct Enumerator_t6193;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>
struct Dictionary_2_t6190;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_46.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m33332_gshared (Enumerator_t6193 * __this, Dictionary_2_t6190 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m33332(__this, ___dictionary, method) (( void (*) (Enumerator_t6193 *, Dictionary_2_t6190 *, const MethodInfo*))Enumerator__ctor_m33332_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m33333_gshared (Enumerator_t6193 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m33333(__this, method) (( Object_t * (*) (Enumerator_t6193 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m33333_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m33334_gshared (Enumerator_t6193 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m33334(__this, method) (( void (*) (Enumerator_t6193 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m33334_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2139  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m33335_gshared (Enumerator_t6193 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m33335(__this, method) (( DictionaryEntry_t2139  (*) (Enumerator_t6193 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m33335_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m33336_gshared (Enumerator_t6193 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m33336(__this, method) (( Object_t * (*) (Enumerator_t6193 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m33336_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m33337_gshared (Enumerator_t6193 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m33337(__this, method) (( Object_t * (*) (Enumerator_t6193 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m33337_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::MoveNext()
extern "C" bool Enumerator_MoveNext_m33338_gshared (Enumerator_t6193 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m33338(__this, method) (( bool (*) (Enumerator_t6193 *, const MethodInfo*))Enumerator_MoveNext_m33338_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::get_Current()
extern "C" KeyValuePair_2_t6187  Enumerator_get_Current_m33339_gshared (Enumerator_t6193 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m33339(__this, method) (( KeyValuePair_2_t6187  (*) (Enumerator_t6193 *, const MethodInfo*))Enumerator_get_Current_m33339_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::get_CurrentKey()
extern "C" int64_t Enumerator_get_CurrentKey_m33340_gshared (Enumerator_t6193 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m33340(__this, method) (( int64_t (*) (Enumerator_t6193 *, const MethodInfo*))Enumerator_get_CurrentKey_m33340_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::get_CurrentValue()
extern "C" uint8_t Enumerator_get_CurrentValue_m33341_gshared (Enumerator_t6193 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m33341(__this, method) (( uint8_t (*) (Enumerator_t6193 *, const MethodInfo*))Enumerator_get_CurrentValue_m33341_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::Reset()
extern "C" void Enumerator_Reset_m33342_gshared (Enumerator_t6193 * __this, const MethodInfo* method);
#define Enumerator_Reset_m33342(__this, method) (( void (*) (Enumerator_t6193 *, const MethodInfo*))Enumerator_Reset_m33342_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::VerifyState()
extern "C" void Enumerator_VerifyState_m33343_gshared (Enumerator_t6193 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m33343(__this, method) (( void (*) (Enumerator_t6193 *, const MethodInfo*))Enumerator_VerifyState_m33343_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m33344_gshared (Enumerator_t6193 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m33344(__this, method) (( void (*) (Enumerator_t6193 *, const MethodInfo*))Enumerator_VerifyCurrent_m33344_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::Dispose()
extern "C" void Enumerator_Dispose_m33345_gshared (Enumerator_t6193 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m33345(__this, method) (( void (*) (Enumerator_t6193 *, const MethodInfo*))Enumerator_Dispose_m33345_gshared)(__this, method)
