#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
struct Enumerator_t6134;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t6131;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_44.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m32842_gshared (Enumerator_t6134 * __this, Dictionary_2_t6131 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m32842(__this, ___dictionary, method) (( void (*) (Enumerator_t6134 *, Dictionary_2_t6131 *, const MethodInfo*))Enumerator__ctor_m32842_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m32843_gshared (Enumerator_t6134 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m32843(__this, method) (( Object_t * (*) (Enumerator_t6134 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m32843_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m32844_gshared (Enumerator_t6134 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m32844(__this, method) (( void (*) (Enumerator_t6134 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m32844_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2086  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m32845_gshared (Enumerator_t6134 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m32845(__this, method) (( DictionaryEntry_t2086  (*) (Enumerator_t6134 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m32845_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m32846_gshared (Enumerator_t6134 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m32846(__this, method) (( Object_t * (*) (Enumerator_t6134 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m32846_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m32847_gshared (Enumerator_t6134 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m32847(__this, method) (( Object_t * (*) (Enumerator_t6134 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m32847_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool Enumerator_MoveNext_m32848_gshared (Enumerator_t6134 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m32848(__this, method) (( bool (*) (Enumerator_t6134 *, const MethodInfo*))Enumerator_MoveNext_m32848_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_Current()
extern "C" KeyValuePair_2_t6107  Enumerator_get_Current_m32849_gshared (Enumerator_t6134 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m32849(__this, method) (( KeyValuePair_2_t6107  (*) (Enumerator_t6134 *, const MethodInfo*))Enumerator_get_Current_m32849_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m32850_gshared (Enumerator_t6134 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m32850(__this, method) (( Object_t * (*) (Enumerator_t6134 *, const MethodInfo*))Enumerator_get_CurrentKey_m32850_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentValue()
extern "C" uint8_t Enumerator_get_CurrentValue_m32851_gshared (Enumerator_t6134 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m32851(__this, method) (( uint8_t (*) (Enumerator_t6134 *, const MethodInfo*))Enumerator_get_CurrentValue_m32851_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::Reset()
extern "C" void Enumerator_Reset_m32852_gshared (Enumerator_t6134 * __this, const MethodInfo* method);
#define Enumerator_Reset_m32852(__this, method) (( void (*) (Enumerator_t6134 *, const MethodInfo*))Enumerator_Reset_m32852_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyState()
extern "C" void Enumerator_VerifyState_m32853_gshared (Enumerator_t6134 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m32853(__this, method) (( void (*) (Enumerator_t6134 *, const MethodInfo*))Enumerator_VerifyState_m32853_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m32854_gshared (Enumerator_t6134 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m32854(__this, method) (( void (*) (Enumerator_t6134 *, const MethodInfo*))Enumerator_VerifyCurrent_m32854_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::Dispose()
extern "C" void Enumerator_Dispose_m32855_gshared (Enumerator_t6134 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m32855(__this, method) (( void (*) (Enumerator_t6134 *, const MethodInfo*))Enumerator_Dispose_m32855_gshared)(__this, method)
