#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
struct Enumerator_t6778;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t6775;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_45.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m38248_gshared (Enumerator_t6778 * __this, Dictionary_2_t6775 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m38248(__this, ___dictionary, method) (( void (*) (Enumerator_t6778 *, Dictionary_2_t6775 *, const MethodInfo*))Enumerator__ctor_m38248_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m38249_gshared (Enumerator_t6778 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m38249(__this, method) (( Object_t * (*) (Enumerator_t6778 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m38249_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m38250_gshared (Enumerator_t6778 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m38250(__this, method) (( void (*) (Enumerator_t6778 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m38250_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2157  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m38251_gshared (Enumerator_t6778 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m38251(__this, method) (( DictionaryEntry_t2157  (*) (Enumerator_t6778 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m38251_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m38252_gshared (Enumerator_t6778 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m38252(__this, method) (( Object_t * (*) (Enumerator_t6778 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m38252_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m38253_gshared (Enumerator_t6778 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m38253(__this, method) (( Object_t * (*) (Enumerator_t6778 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m38253_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool Enumerator_MoveNext_m38254_gshared (Enumerator_t6778 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m38254(__this, method) (( bool (*) (Enumerator_t6778 *, const MethodInfo*))Enumerator_MoveNext_m38254_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_Current()
extern "C" KeyValuePair_2_t6752  Enumerator_get_Current_m38255_gshared (Enumerator_t6778 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m38255(__this, method) (( KeyValuePair_2_t6752  (*) (Enumerator_t6778 *, const MethodInfo*))Enumerator_get_Current_m38255_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m38256_gshared (Enumerator_t6778 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m38256(__this, method) (( Object_t * (*) (Enumerator_t6778 *, const MethodInfo*))Enumerator_get_CurrentKey_m38256_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentValue()
extern "C" uint8_t Enumerator_get_CurrentValue_m38257_gshared (Enumerator_t6778 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m38257(__this, method) (( uint8_t (*) (Enumerator_t6778 *, const MethodInfo*))Enumerator_get_CurrentValue_m38257_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::Reset()
extern "C" void Enumerator_Reset_m38258_gshared (Enumerator_t6778 * __this, const MethodInfo* method);
#define Enumerator_Reset_m38258(__this, method) (( void (*) (Enumerator_t6778 *, const MethodInfo*))Enumerator_Reset_m38258_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyState()
extern "C" void Enumerator_VerifyState_m38259_gshared (Enumerator_t6778 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m38259(__this, method) (( void (*) (Enumerator_t6778 *, const MethodInfo*))Enumerator_VerifyState_m38259_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m38260_gshared (Enumerator_t6778 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m38260(__this, method) (( void (*) (Enumerator_t6778 *, const MethodInfo*))Enumerator_VerifyCurrent_m38260_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::Dispose()
extern "C" void Enumerator_Dispose_m38261_gshared (Enumerator_t6778 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m38261(__this, method) (( void (*) (Enumerator_t6778 *, const MethodInfo*))Enumerator_Dispose_m38261_gshared)(__this, method)
