#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
struct Enumerator_t5403;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2853;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_18.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m21249_gshared (Enumerator_t5403 * __this, Dictionary_2_t2853 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m21249(__this, ___dictionary, method) (( void (*) (Enumerator_t5403 *, Dictionary_2_t2853 *, const MethodInfo*))Enumerator__ctor_m21249_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m21250_gshared (Enumerator_t5403 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m21250(__this, method) (( Object_t * (*) (Enumerator_t5403 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m21250_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m21251_gshared (Enumerator_t5403 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m21251(__this, method) (( void (*) (Enumerator_t5403 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m21251_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2139  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m21252_gshared (Enumerator_t5403 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m21252(__this, method) (( DictionaryEntry_t2139  (*) (Enumerator_t5403 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m21252_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m21253_gshared (Enumerator_t5403 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m21253(__this, method) (( Object_t * (*) (Enumerator_t5403 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m21253_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m21254_gshared (Enumerator_t5403 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m21254(__this, method) (( Object_t * (*) (Enumerator_t5403 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m21254_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m21255_gshared (Enumerator_t5403 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m21255(__this, method) (( bool (*) (Enumerator_t5403 *, const MethodInfo*))Enumerator_MoveNext_m21255_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" KeyValuePair_2_t5395  Enumerator_get_Current_m21256_gshared (Enumerator_t5403 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m21256(__this, method) (( KeyValuePair_2_t5395  (*) (Enumerator_t5403 *, const MethodInfo*))Enumerator_get_Current_m21256_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m21257_gshared (Enumerator_t5403 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m21257(__this, method) (( int32_t (*) (Enumerator_t5403 *, const MethodInfo*))Enumerator_get_CurrentKey_m21257_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m21258_gshared (Enumerator_t5403 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m21258(__this, method) (( Object_t * (*) (Enumerator_t5403 *, const MethodInfo*))Enumerator_get_CurrentValue_m21258_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Reset()
extern "C" void Enumerator_Reset_m21259_gshared (Enumerator_t5403 * __this, const MethodInfo* method);
#define Enumerator_Reset_m21259(__this, method) (( void (*) (Enumerator_t5403 *, const MethodInfo*))Enumerator_Reset_m21259_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m21260_gshared (Enumerator_t5403 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m21260(__this, method) (( void (*) (Enumerator_t5403 *, const MethodInfo*))Enumerator_VerifyState_m21260_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m21261_gshared (Enumerator_t5403 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m21261(__this, method) (( void (*) (Enumerator_t5403 *, const MethodInfo*))Enumerator_VerifyCurrent_m21261_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m21262_gshared (Enumerator_t5403 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m21262(__this, method) (( void (*) (Enumerator_t5403 *, const MethodInfo*))Enumerator_Dispose_m21262_gshared)(__this, method)
