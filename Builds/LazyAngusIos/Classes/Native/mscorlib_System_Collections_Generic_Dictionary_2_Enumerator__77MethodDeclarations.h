#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>
struct Enumerator_t9265;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>
struct Dictionary_2_t4477;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Reflection.Emit.Label>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_146.h"
// System.Reflection.Emit.Label
#include "mscorlib_System_Reflection_Emit_Label.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m69174_gshared (Enumerator_t9265 * __this, Dictionary_2_t4477 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m69174(__this, ___dictionary, method) (( void (*) (Enumerator_t9265 *, Dictionary_2_t4477 *, const MethodInfo*))Enumerator__ctor_m69174_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m69175_gshared (Enumerator_t9265 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m69175(__this, method) (( Object_t * (*) (Enumerator_t9265 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m69175_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m69176_gshared (Enumerator_t9265 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m69176(__this, method) (( void (*) (Enumerator_t9265 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m69176_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2156  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m69177_gshared (Enumerator_t9265 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m69177(__this, method) (( DictionaryEntry_t2156  (*) (Enumerator_t9265 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m69177_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m69178_gshared (Enumerator_t9265 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m69178(__this, method) (( Object_t * (*) (Enumerator_t9265 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m69178_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m69179_gshared (Enumerator_t9265 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m69179(__this, method) (( Object_t * (*) (Enumerator_t9265 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m69179_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::MoveNext()
extern "C" bool Enumerator_MoveNext_m69180_gshared (Enumerator_t9265 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m69180(__this, method) (( bool (*) (Enumerator_t9265 *, const MethodInfo*))Enumerator_MoveNext_m69180_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::get_Current()
extern "C" KeyValuePair_2_t9260  Enumerator_get_Current_m69181_gshared (Enumerator_t9265 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m69181(__this, method) (( KeyValuePair_2_t9260  (*) (Enumerator_t9265 *, const MethodInfo*))Enumerator_get_Current_m69181_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m69182_gshared (Enumerator_t9265 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m69182(__this, method) (( int32_t (*) (Enumerator_t9265 *, const MethodInfo*))Enumerator_get_CurrentKey_m69182_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::get_CurrentValue()
extern "C" Label_t4474  Enumerator_get_CurrentValue_m69183_gshared (Enumerator_t9265 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m69183(__this, method) (( Label_t4474  (*) (Enumerator_t9265 *, const MethodInfo*))Enumerator_get_CurrentValue_m69183_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::Reset()
extern "C" void Enumerator_Reset_m69184_gshared (Enumerator_t9265 * __this, const MethodInfo* method);
#define Enumerator_Reset_m69184(__this, method) (( void (*) (Enumerator_t9265 *, const MethodInfo*))Enumerator_Reset_m69184_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::VerifyState()
extern "C" void Enumerator_VerifyState_m69185_gshared (Enumerator_t9265 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m69185(__this, method) (( void (*) (Enumerator_t9265 *, const MethodInfo*))Enumerator_VerifyState_m69185_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m69186_gshared (Enumerator_t9265 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m69186(__this, method) (( void (*) (Enumerator_t9265 *, const MethodInfo*))Enumerator_VerifyCurrent_m69186_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::Dispose()
extern "C" void Enumerator_Dispose_m69187_gshared (Enumerator_t9265 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m69187(__this, method) (( void (*) (Enumerator_t9265 *, const MethodInfo*))Enumerator_Dispose_m69187_gshared)(__this, method)
