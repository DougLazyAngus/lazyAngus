#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>
struct Enumerator_t9278;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>
struct Dictionary_2_t4488;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Reflection.Emit.Label>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_146.h"
// System.Reflection.Emit.Label
#include "mscorlib_System_Reflection_Emit_Label.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m69256_gshared (Enumerator_t9278 * __this, Dictionary_2_t4488 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m69256(__this, ___dictionary, method) (( void (*) (Enumerator_t9278 *, Dictionary_2_t4488 *, const MethodInfo*))Enumerator__ctor_m69256_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m69257_gshared (Enumerator_t9278 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m69257(__this, method) (( Object_t * (*) (Enumerator_t9278 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m69257_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m69258_gshared (Enumerator_t9278 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m69258(__this, method) (( void (*) (Enumerator_t9278 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m69258_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2167  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m69259_gshared (Enumerator_t9278 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m69259(__this, method) (( DictionaryEntry_t2167  (*) (Enumerator_t9278 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m69259_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m69260_gshared (Enumerator_t9278 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m69260(__this, method) (( Object_t * (*) (Enumerator_t9278 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m69260_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m69261_gshared (Enumerator_t9278 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m69261(__this, method) (( Object_t * (*) (Enumerator_t9278 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m69261_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::MoveNext()
extern "C" bool Enumerator_MoveNext_m69262_gshared (Enumerator_t9278 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m69262(__this, method) (( bool (*) (Enumerator_t9278 *, const MethodInfo*))Enumerator_MoveNext_m69262_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::get_Current()
extern "C" KeyValuePair_2_t9273  Enumerator_get_Current_m69263_gshared (Enumerator_t9278 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m69263(__this, method) (( KeyValuePair_2_t9273  (*) (Enumerator_t9278 *, const MethodInfo*))Enumerator_get_Current_m69263_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m69264_gshared (Enumerator_t9278 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m69264(__this, method) (( int32_t (*) (Enumerator_t9278 *, const MethodInfo*))Enumerator_get_CurrentKey_m69264_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::get_CurrentValue()
extern "C" Label_t4485  Enumerator_get_CurrentValue_m69265_gshared (Enumerator_t9278 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m69265(__this, method) (( Label_t4485  (*) (Enumerator_t9278 *, const MethodInfo*))Enumerator_get_CurrentValue_m69265_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::Reset()
extern "C" void Enumerator_Reset_m69266_gshared (Enumerator_t9278 * __this, const MethodInfo* method);
#define Enumerator_Reset_m69266(__this, method) (( void (*) (Enumerator_t9278 *, const MethodInfo*))Enumerator_Reset_m69266_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::VerifyState()
extern "C" void Enumerator_VerifyState_m69267_gshared (Enumerator_t9278 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m69267(__this, method) (( void (*) (Enumerator_t9278 *, const MethodInfo*))Enumerator_VerifyState_m69267_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m69268_gshared (Enumerator_t9278 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m69268(__this, method) (( void (*) (Enumerator_t9278 *, const MethodInfo*))Enumerator_VerifyCurrent_m69268_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::Dispose()
extern "C" void Enumerator_Dispose_m69269_gshared (Enumerator_t9278 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m69269(__this, method) (( void (*) (Enumerator_t9278 *, const MethodInfo*))Enumerator_Dispose_m69269_gshared)(__this, method)
