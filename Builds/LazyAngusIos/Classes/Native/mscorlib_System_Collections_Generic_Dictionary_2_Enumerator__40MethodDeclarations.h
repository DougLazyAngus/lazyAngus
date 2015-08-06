#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
struct Enumerator_t6136;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t6133;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_44.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m32858_gshared (Enumerator_t6136 * __this, Dictionary_2_t6133 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m32858(__this, ___dictionary, method) (( void (*) (Enumerator_t6136 *, Dictionary_2_t6133 *, const MethodInfo*))Enumerator__ctor_m32858_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m32859_gshared (Enumerator_t6136 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m32859(__this, method) (( Object_t * (*) (Enumerator_t6136 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m32859_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m32860_gshared (Enumerator_t6136 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m32860(__this, method) (( void (*) (Enumerator_t6136 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m32860_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2088  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m32861_gshared (Enumerator_t6136 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m32861(__this, method) (( DictionaryEntry_t2088  (*) (Enumerator_t6136 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m32861_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m32862_gshared (Enumerator_t6136 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m32862(__this, method) (( Object_t * (*) (Enumerator_t6136 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m32862_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m32863_gshared (Enumerator_t6136 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m32863(__this, method) (( Object_t * (*) (Enumerator_t6136 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m32863_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool Enumerator_MoveNext_m32864_gshared (Enumerator_t6136 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m32864(__this, method) (( bool (*) (Enumerator_t6136 *, const MethodInfo*))Enumerator_MoveNext_m32864_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_Current()
extern "C" KeyValuePair_2_t6109  Enumerator_get_Current_m32865_gshared (Enumerator_t6136 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m32865(__this, method) (( KeyValuePair_2_t6109  (*) (Enumerator_t6136 *, const MethodInfo*))Enumerator_get_Current_m32865_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m32866_gshared (Enumerator_t6136 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m32866(__this, method) (( Object_t * (*) (Enumerator_t6136 *, const MethodInfo*))Enumerator_get_CurrentKey_m32866_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentValue()
extern "C" uint8_t Enumerator_get_CurrentValue_m32867_gshared (Enumerator_t6136 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m32867(__this, method) (( uint8_t (*) (Enumerator_t6136 *, const MethodInfo*))Enumerator_get_CurrentValue_m32867_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::Reset()
extern "C" void Enumerator_Reset_m32868_gshared (Enumerator_t6136 * __this, const MethodInfo* method);
#define Enumerator_Reset_m32868(__this, method) (( void (*) (Enumerator_t6136 *, const MethodInfo*))Enumerator_Reset_m32868_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyState()
extern "C" void Enumerator_VerifyState_m32869_gshared (Enumerator_t6136 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m32869(__this, method) (( void (*) (Enumerator_t6136 *, const MethodInfo*))Enumerator_VerifyState_m32869_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m32870_gshared (Enumerator_t6136 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m32870(__this, method) (( void (*) (Enumerator_t6136 *, const MethodInfo*))Enumerator_VerifyCurrent_m32870_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::Dispose()
extern "C" void Enumerator_Dispose_m32871_gshared (Enumerator_t6136 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m32871(__this, method) (( void (*) (Enumerator_t6136 *, const MethodInfo*))Enumerator_Dispose_m32871_gshared)(__this, method)
