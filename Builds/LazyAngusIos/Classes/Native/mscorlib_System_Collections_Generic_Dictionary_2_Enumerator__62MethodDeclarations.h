#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>
struct Enumerator_t8920;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>
struct Dictionary_2_t8917;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_131.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m64475_gshared (Enumerator_t8920 * __this, Dictionary_2_t8917 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m64475(__this, ___dictionary, method) (( void (*) (Enumerator_t8920 *, Dictionary_2_t8917 *, const MethodInfo*))Enumerator__ctor_m64475_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m64476_gshared (Enumerator_t8920 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m64476(__this, method) (( Object_t * (*) (Enumerator_t8920 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m64476_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m64477_gshared (Enumerator_t8920 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m64477(__this, method) (( void (*) (Enumerator_t8920 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m64477_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2160  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m64478_gshared (Enumerator_t8920 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m64478(__this, method) (( DictionaryEntry_t2160  (*) (Enumerator_t8920 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m64478_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m64479_gshared (Enumerator_t8920 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m64479(__this, method) (( Object_t * (*) (Enumerator_t8920 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m64479_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m64480_gshared (Enumerator_t8920 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m64480(__this, method) (( Object_t * (*) (Enumerator_t8920 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m64480_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m64481_gshared (Enumerator_t8920 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m64481(__this, method) (( bool (*) (Enumerator_t8920 *, const MethodInfo*))Enumerator_MoveNext_m64481_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t8914  Enumerator_get_Current_m64482_gshared (Enumerator_t8920 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m64482(__this, method) (( KeyValuePair_2_t8914  (*) (Enumerator_t8920 *, const MethodInfo*))Enumerator_get_Current_m64482_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::get_CurrentKey()
extern "C" int64_t Enumerator_get_CurrentKey_m64483_gshared (Enumerator_t8920 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m64483(__this, method) (( int64_t (*) (Enumerator_t8920 *, const MethodInfo*))Enumerator_get_CurrentKey_m64483_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m64484_gshared (Enumerator_t8920 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m64484(__this, method) (( int32_t (*) (Enumerator_t8920 *, const MethodInfo*))Enumerator_get_CurrentValue_m64484_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::Reset()
extern "C" void Enumerator_Reset_m64485_gshared (Enumerator_t8920 * __this, const MethodInfo* method);
#define Enumerator_Reset_m64485(__this, method) (( void (*) (Enumerator_t8920 *, const MethodInfo*))Enumerator_Reset_m64485_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m64486_gshared (Enumerator_t8920 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m64486(__this, method) (( void (*) (Enumerator_t8920 *, const MethodInfo*))Enumerator_VerifyState_m64486_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m64487_gshared (Enumerator_t8920 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m64487(__this, method) (( void (*) (Enumerator_t8920 *, const MethodInfo*))Enumerator_VerifyCurrent_m64487_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m64488_gshared (Enumerator_t8920 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m64488(__this, method) (( void (*) (Enumerator_t8920 *, const MethodInfo*))Enumerator_Dispose_m64488_gshared)(__this, method)
