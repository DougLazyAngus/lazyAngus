#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
struct Enumerator_t6127;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t6124;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_44.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m32795_gshared (Enumerator_t6127 * __this, Dictionary_2_t6124 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m32795(__this, ___dictionary, method) (( void (*) (Enumerator_t6127 *, Dictionary_2_t6124 *, const MethodInfo*))Enumerator__ctor_m32795_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m32796_gshared (Enumerator_t6127 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m32796(__this, method) (( Object_t * (*) (Enumerator_t6127 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m32796_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m32797_gshared (Enumerator_t6127 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m32797(__this, method) (( void (*) (Enumerator_t6127 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m32797_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2080  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m32798_gshared (Enumerator_t6127 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m32798(__this, method) (( DictionaryEntry_t2080  (*) (Enumerator_t6127 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m32798_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m32799_gshared (Enumerator_t6127 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m32799(__this, method) (( Object_t * (*) (Enumerator_t6127 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m32799_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m32800_gshared (Enumerator_t6127 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m32800(__this, method) (( Object_t * (*) (Enumerator_t6127 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m32800_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool Enumerator_MoveNext_m32801_gshared (Enumerator_t6127 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m32801(__this, method) (( bool (*) (Enumerator_t6127 *, const MethodInfo*))Enumerator_MoveNext_m32801_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_Current()
extern "C" KeyValuePair_2_t6100  Enumerator_get_Current_m32802_gshared (Enumerator_t6127 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m32802(__this, method) (( KeyValuePair_2_t6100  (*) (Enumerator_t6127 *, const MethodInfo*))Enumerator_get_Current_m32802_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m32803_gshared (Enumerator_t6127 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m32803(__this, method) (( Object_t * (*) (Enumerator_t6127 *, const MethodInfo*))Enumerator_get_CurrentKey_m32803_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentValue()
extern "C" uint8_t Enumerator_get_CurrentValue_m32804_gshared (Enumerator_t6127 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m32804(__this, method) (( uint8_t (*) (Enumerator_t6127 *, const MethodInfo*))Enumerator_get_CurrentValue_m32804_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::Reset()
extern "C" void Enumerator_Reset_m32805_gshared (Enumerator_t6127 * __this, const MethodInfo* method);
#define Enumerator_Reset_m32805(__this, method) (( void (*) (Enumerator_t6127 *, const MethodInfo*))Enumerator_Reset_m32805_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyState()
extern "C" void Enumerator_VerifyState_m32806_gshared (Enumerator_t6127 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m32806(__this, method) (( void (*) (Enumerator_t6127 *, const MethodInfo*))Enumerator_VerifyState_m32806_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m32807_gshared (Enumerator_t6127 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m32807(__this, method) (( void (*) (Enumerator_t6127 *, const MethodInfo*))Enumerator_VerifyCurrent_m32807_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::Dispose()
extern "C" void Enumerator_Dispose_m32808_gshared (Enumerator_t6127 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m32808(__this, method) (( void (*) (Enumerator_t6127 *, const MethodInfo*))Enumerator_Dispose_m32808_gshared)(__this, method)
