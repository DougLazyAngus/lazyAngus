#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>
struct Enumerator_t9258;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t4480;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_145.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m69057_gshared (Enumerator_t9258 * __this, Dictionary_2_t4480 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m69057(__this, ___dictionary, method) (( void (*) (Enumerator_t9258 *, Dictionary_2_t4480 *, const MethodInfo*))Enumerator__ctor_m69057_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m69058_gshared (Enumerator_t9258 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m69058(__this, method) (( Object_t * (*) (Enumerator_t9258 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m69058_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m69059_gshared (Enumerator_t9258 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m69059(__this, method) (( void (*) (Enumerator_t9258 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m69059_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2160  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m69060_gshared (Enumerator_t9258 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m69060(__this, method) (( DictionaryEntry_t2160  (*) (Enumerator_t9258 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m69060_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m69061_gshared (Enumerator_t9258 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m69061(__this, method) (( Object_t * (*) (Enumerator_t9258 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m69061_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m69062_gshared (Enumerator_t9258 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m69062(__this, method) (( Object_t * (*) (Enumerator_t9258 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m69062_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m69063_gshared (Enumerator_t9258 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m69063(__this, method) (( bool (*) (Enumerator_t9258 *, const MethodInfo*))Enumerator_MoveNext_m69063_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t9254  Enumerator_get_Current_m69064_gshared (Enumerator_t9258 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m69064(__this, method) (( KeyValuePair_2_t9254  (*) (Enumerator_t9258 *, const MethodInfo*))Enumerator_get_Current_m69064_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m69065_gshared (Enumerator_t9258 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m69065(__this, method) (( int32_t (*) (Enumerator_t9258 *, const MethodInfo*))Enumerator_get_CurrentKey_m69065_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m69066_gshared (Enumerator_t9258 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m69066(__this, method) (( int32_t (*) (Enumerator_t9258 *, const MethodInfo*))Enumerator_get_CurrentValue_m69066_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::Reset()
extern "C" void Enumerator_Reset_m69067_gshared (Enumerator_t9258 * __this, const MethodInfo* method);
#define Enumerator_Reset_m69067(__this, method) (( void (*) (Enumerator_t9258 *, const MethodInfo*))Enumerator_Reset_m69067_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m69068_gshared (Enumerator_t9258 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m69068(__this, method) (( void (*) (Enumerator_t9258 *, const MethodInfo*))Enumerator_VerifyState_m69068_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m69069_gshared (Enumerator_t9258 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m69069(__this, method) (( void (*) (Enumerator_t9258 *, const MethodInfo*))Enumerator_VerifyCurrent_m69069_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m69070_gshared (Enumerator_t9258 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m69070(__this, method) (( void (*) (Enumerator_t9258 *, const MethodInfo*))Enumerator_Dispose_m69070_gshared)(__this, method)
