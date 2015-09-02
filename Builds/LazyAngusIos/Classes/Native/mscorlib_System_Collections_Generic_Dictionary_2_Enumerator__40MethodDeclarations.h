#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>
struct Enumerator_t6229;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>
struct Dictionary_2_t6226;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_46.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m33788_gshared (Enumerator_t6229 * __this, Dictionary_2_t6226 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m33788(__this, ___dictionary, method) (( void (*) (Enumerator_t6229 *, Dictionary_2_t6226 *, const MethodInfo*))Enumerator__ctor_m33788_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m33789_gshared (Enumerator_t6229 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m33789(__this, method) (( Object_t * (*) (Enumerator_t6229 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m33789_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m33790_gshared (Enumerator_t6229 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m33790(__this, method) (( void (*) (Enumerator_t6229 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m33790_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2156  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m33791_gshared (Enumerator_t6229 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m33791(__this, method) (( DictionaryEntry_t2156  (*) (Enumerator_t6229 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m33791_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m33792_gshared (Enumerator_t6229 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m33792(__this, method) (( Object_t * (*) (Enumerator_t6229 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m33792_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m33793_gshared (Enumerator_t6229 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m33793(__this, method) (( Object_t * (*) (Enumerator_t6229 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m33793_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::MoveNext()
extern "C" bool Enumerator_MoveNext_m33794_gshared (Enumerator_t6229 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m33794(__this, method) (( bool (*) (Enumerator_t6229 *, const MethodInfo*))Enumerator_MoveNext_m33794_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::get_Current()
extern "C" KeyValuePair_2_t6223  Enumerator_get_Current_m33795_gshared (Enumerator_t6229 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m33795(__this, method) (( KeyValuePair_2_t6223  (*) (Enumerator_t6229 *, const MethodInfo*))Enumerator_get_Current_m33795_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::get_CurrentKey()
extern "C" int64_t Enumerator_get_CurrentKey_m33796_gshared (Enumerator_t6229 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m33796(__this, method) (( int64_t (*) (Enumerator_t6229 *, const MethodInfo*))Enumerator_get_CurrentKey_m33796_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::get_CurrentValue()
extern "C" uint8_t Enumerator_get_CurrentValue_m33797_gshared (Enumerator_t6229 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m33797(__this, method) (( uint8_t (*) (Enumerator_t6229 *, const MethodInfo*))Enumerator_get_CurrentValue_m33797_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::Reset()
extern "C" void Enumerator_Reset_m33798_gshared (Enumerator_t6229 * __this, const MethodInfo* method);
#define Enumerator_Reset_m33798(__this, method) (( void (*) (Enumerator_t6229 *, const MethodInfo*))Enumerator_Reset_m33798_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::VerifyState()
extern "C" void Enumerator_VerifyState_m33799_gshared (Enumerator_t6229 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m33799(__this, method) (( void (*) (Enumerator_t6229 *, const MethodInfo*))Enumerator_VerifyState_m33799_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m33800_gshared (Enumerator_t6229 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m33800(__this, method) (( void (*) (Enumerator_t6229 *, const MethodInfo*))Enumerator_VerifyCurrent_m33800_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::Dispose()
extern "C" void Enumerator_Dispose_m33801_gshared (Enumerator_t6229 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m33801(__this, method) (( void (*) (Enumerator_t6229 *, const MethodInfo*))Enumerator_Dispose_m33801_gshared)(__this, method)
