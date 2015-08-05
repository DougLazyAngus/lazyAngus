#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>
struct Enumerator_t6123;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>
struct Dictionary_2_t6120;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_45.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m32659_gshared (Enumerator_t6123 * __this, Dictionary_2_t6120 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m32659(__this, ___dictionary, method) (( void (*) (Enumerator_t6123 *, Dictionary_2_t6120 *, const MethodInfo*))Enumerator__ctor_m32659_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m32660_gshared (Enumerator_t6123 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m32660(__this, method) (( Object_t * (*) (Enumerator_t6123 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m32660_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m32661_gshared (Enumerator_t6123 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m32661(__this, method) (( void (*) (Enumerator_t6123 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m32661_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2090  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m32662_gshared (Enumerator_t6123 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m32662(__this, method) (( DictionaryEntry_t2090  (*) (Enumerator_t6123 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m32662_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m32663_gshared (Enumerator_t6123 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m32663(__this, method) (( Object_t * (*) (Enumerator_t6123 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m32663_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m32664_gshared (Enumerator_t6123 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m32664(__this, method) (( Object_t * (*) (Enumerator_t6123 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m32664_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::MoveNext()
extern "C" bool Enumerator_MoveNext_m32665_gshared (Enumerator_t6123 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m32665(__this, method) (( bool (*) (Enumerator_t6123 *, const MethodInfo*))Enumerator_MoveNext_m32665_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::get_Current()
extern "C" KeyValuePair_2_t6117  Enumerator_get_Current_m32666_gshared (Enumerator_t6123 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m32666(__this, method) (( KeyValuePair_2_t6117  (*) (Enumerator_t6123 *, const MethodInfo*))Enumerator_get_Current_m32666_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::get_CurrentKey()
extern "C" int64_t Enumerator_get_CurrentKey_m32667_gshared (Enumerator_t6123 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m32667(__this, method) (( int64_t (*) (Enumerator_t6123 *, const MethodInfo*))Enumerator_get_CurrentKey_m32667_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::get_CurrentValue()
extern "C" uint8_t Enumerator_get_CurrentValue_m32668_gshared (Enumerator_t6123 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m32668(__this, method) (( uint8_t (*) (Enumerator_t6123 *, const MethodInfo*))Enumerator_get_CurrentValue_m32668_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::Reset()
extern "C" void Enumerator_Reset_m32669_gshared (Enumerator_t6123 * __this, const MethodInfo* method);
#define Enumerator_Reset_m32669(__this, method) (( void (*) (Enumerator_t6123 *, const MethodInfo*))Enumerator_Reset_m32669_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::VerifyState()
extern "C" void Enumerator_VerifyState_m32670_gshared (Enumerator_t6123 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m32670(__this, method) (( void (*) (Enumerator_t6123 *, const MethodInfo*))Enumerator_VerifyState_m32670_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m32671_gshared (Enumerator_t6123 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m32671(__this, method) (( void (*) (Enumerator_t6123 *, const MethodInfo*))Enumerator_VerifyCurrent_m32671_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::Dispose()
extern "C" void Enumerator_Dispose_m32672_gshared (Enumerator_t6123 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m32672(__this, method) (( void (*) (Enumerator_t6123 *, const MethodInfo*))Enumerator_Dispose_m32672_gshared)(__this, method)
