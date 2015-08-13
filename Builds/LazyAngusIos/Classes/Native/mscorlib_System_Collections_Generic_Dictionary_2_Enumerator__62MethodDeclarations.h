#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>
struct Enumerator_t8343;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>
struct Dictionary_2_t8340;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_131.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m59734_gshared (Enumerator_t8343 * __this, Dictionary_2_t8340 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m59734(__this, ___dictionary, method) (( void (*) (Enumerator_t8343 *, Dictionary_2_t8340 *, const MethodInfo*))Enumerator__ctor_m59734_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m59735_gshared (Enumerator_t8343 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m59735(__this, method) (( Object_t * (*) (Enumerator_t8343 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m59735_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m59736_gshared (Enumerator_t8343 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m59736(__this, method) (( void (*) (Enumerator_t8343 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m59736_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2139  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m59737_gshared (Enumerator_t8343 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m59737(__this, method) (( DictionaryEntry_t2139  (*) (Enumerator_t8343 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m59737_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m59738_gshared (Enumerator_t8343 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m59738(__this, method) (( Object_t * (*) (Enumerator_t8343 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m59738_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m59739_gshared (Enumerator_t8343 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m59739(__this, method) (( Object_t * (*) (Enumerator_t8343 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m59739_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m59740_gshared (Enumerator_t8343 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m59740(__this, method) (( bool (*) (Enumerator_t8343 *, const MethodInfo*))Enumerator_MoveNext_m59740_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t8337  Enumerator_get_Current_m59741_gshared (Enumerator_t8343 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m59741(__this, method) (( KeyValuePair_2_t8337  (*) (Enumerator_t8343 *, const MethodInfo*))Enumerator_get_Current_m59741_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::get_CurrentKey()
extern "C" int64_t Enumerator_get_CurrentKey_m59742_gshared (Enumerator_t8343 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m59742(__this, method) (( int64_t (*) (Enumerator_t8343 *, const MethodInfo*))Enumerator_get_CurrentKey_m59742_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m59743_gshared (Enumerator_t8343 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m59743(__this, method) (( int32_t (*) (Enumerator_t8343 *, const MethodInfo*))Enumerator_get_CurrentValue_m59743_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::Reset()
extern "C" void Enumerator_Reset_m59744_gshared (Enumerator_t8343 * __this, const MethodInfo* method);
#define Enumerator_Reset_m59744(__this, method) (( void (*) (Enumerator_t8343 *, const MethodInfo*))Enumerator_Reset_m59744_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m59745_gshared (Enumerator_t8343 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m59745(__this, method) (( void (*) (Enumerator_t8343 *, const MethodInfo*))Enumerator_VerifyState_m59745_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m59746_gshared (Enumerator_t8343 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m59746(__this, method) (( void (*) (Enumerator_t8343 *, const MethodInfo*))Enumerator_VerifyCurrent_m59746_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m59747_gshared (Enumerator_t8343 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m59747(__this, method) (( void (*) (Enumerator_t8343 *, const MethodInfo*))Enumerator_Dispose_m59747_gshared)(__this, method)
