#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>
struct Enumerator_t9266;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>
struct Dictionary_2_t4478;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Reflection.Emit.Label>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_146.h"
// System.Reflection.Emit.Label
#include "mscorlib_System_Reflection_Emit_Label.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m69187_gshared (Enumerator_t9266 * __this, Dictionary_2_t4478 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m69187(__this, ___dictionary, method) (( void (*) (Enumerator_t9266 *, Dictionary_2_t4478 *, const MethodInfo*))Enumerator__ctor_m69187_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m69188_gshared (Enumerator_t9266 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m69188(__this, method) (( Object_t * (*) (Enumerator_t9266 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m69188_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m69189_gshared (Enumerator_t9266 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m69189(__this, method) (( void (*) (Enumerator_t9266 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m69189_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2157  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m69190_gshared (Enumerator_t9266 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m69190(__this, method) (( DictionaryEntry_t2157  (*) (Enumerator_t9266 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m69190_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m69191_gshared (Enumerator_t9266 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m69191(__this, method) (( Object_t * (*) (Enumerator_t9266 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m69191_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m69192_gshared (Enumerator_t9266 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m69192(__this, method) (( Object_t * (*) (Enumerator_t9266 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m69192_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::MoveNext()
extern "C" bool Enumerator_MoveNext_m69193_gshared (Enumerator_t9266 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m69193(__this, method) (( bool (*) (Enumerator_t9266 *, const MethodInfo*))Enumerator_MoveNext_m69193_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::get_Current()
extern "C" KeyValuePair_2_t9261  Enumerator_get_Current_m69194_gshared (Enumerator_t9266 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m69194(__this, method) (( KeyValuePair_2_t9261  (*) (Enumerator_t9266 *, const MethodInfo*))Enumerator_get_Current_m69194_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m69195_gshared (Enumerator_t9266 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m69195(__this, method) (( int32_t (*) (Enumerator_t9266 *, const MethodInfo*))Enumerator_get_CurrentKey_m69195_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::get_CurrentValue()
extern "C" Label_t4475  Enumerator_get_CurrentValue_m69196_gshared (Enumerator_t9266 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m69196(__this, method) (( Label_t4475  (*) (Enumerator_t9266 *, const MethodInfo*))Enumerator_get_CurrentValue_m69196_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::Reset()
extern "C" void Enumerator_Reset_m69197_gshared (Enumerator_t9266 * __this, const MethodInfo* method);
#define Enumerator_Reset_m69197(__this, method) (( void (*) (Enumerator_t9266 *, const MethodInfo*))Enumerator_Reset_m69197_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::VerifyState()
extern "C" void Enumerator_VerifyState_m69198_gshared (Enumerator_t9266 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m69198(__this, method) (( void (*) (Enumerator_t9266 *, const MethodInfo*))Enumerator_VerifyState_m69198_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m69199_gshared (Enumerator_t9266 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m69199(__this, method) (( void (*) (Enumerator_t9266 *, const MethodInfo*))Enumerator_VerifyCurrent_m69199_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::Dispose()
extern "C" void Enumerator_Dispose_m69200_gshared (Enumerator_t9266 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m69200(__this, method) (( void (*) (Enumerator_t9266 *, const MethodInfo*))Enumerator_Dispose_m69200_gshared)(__this, method)
