#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
struct Enumerator_t6212;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t6209;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_45.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m33631_gshared (Enumerator_t6212 * __this, Dictionary_2_t6209 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m33631(__this, ___dictionary, method) (( void (*) (Enumerator_t6212 *, Dictionary_2_t6209 *, const MethodInfo*))Enumerator__ctor_m33631_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m33632_gshared (Enumerator_t6212 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m33632(__this, method) (( Object_t * (*) (Enumerator_t6212 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m33632_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m33633_gshared (Enumerator_t6212 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m33633(__this, method) (( void (*) (Enumerator_t6212 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m33633_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2137  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m33634_gshared (Enumerator_t6212 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m33634(__this, method) (( DictionaryEntry_t2137  (*) (Enumerator_t6212 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m33634_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m33635_gshared (Enumerator_t6212 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m33635(__this, method) (( Object_t * (*) (Enumerator_t6212 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m33635_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m33636_gshared (Enumerator_t6212 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m33636(__this, method) (( Object_t * (*) (Enumerator_t6212 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m33636_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool Enumerator_MoveNext_m33637_gshared (Enumerator_t6212 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m33637(__this, method) (( bool (*) (Enumerator_t6212 *, const MethodInfo*))Enumerator_MoveNext_m33637_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_Current()
extern "C" KeyValuePair_2_t6186  Enumerator_get_Current_m33638_gshared (Enumerator_t6212 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m33638(__this, method) (( KeyValuePair_2_t6186  (*) (Enumerator_t6212 *, const MethodInfo*))Enumerator_get_Current_m33638_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m33639_gshared (Enumerator_t6212 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m33639(__this, method) (( Object_t * (*) (Enumerator_t6212 *, const MethodInfo*))Enumerator_get_CurrentKey_m33639_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentValue()
extern "C" uint8_t Enumerator_get_CurrentValue_m33640_gshared (Enumerator_t6212 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m33640(__this, method) (( uint8_t (*) (Enumerator_t6212 *, const MethodInfo*))Enumerator_get_CurrentValue_m33640_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::Reset()
extern "C" void Enumerator_Reset_m33641_gshared (Enumerator_t6212 * __this, const MethodInfo* method);
#define Enumerator_Reset_m33641(__this, method) (( void (*) (Enumerator_t6212 *, const MethodInfo*))Enumerator_Reset_m33641_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyState()
extern "C" void Enumerator_VerifyState_m33642_gshared (Enumerator_t6212 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m33642(__this, method) (( void (*) (Enumerator_t6212 *, const MethodInfo*))Enumerator_VerifyState_m33642_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m33643_gshared (Enumerator_t6212 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m33643(__this, method) (( void (*) (Enumerator_t6212 *, const MethodInfo*))Enumerator_VerifyCurrent_m33643_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::Dispose()
extern "C" void Enumerator_Dispose_m33644_gshared (Enumerator_t6212 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m33644(__this, method) (( void (*) (Enumerator_t6212 *, const MethodInfo*))Enumerator_Dispose_m33644_gshared)(__this, method)
