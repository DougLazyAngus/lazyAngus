#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>
struct Enumerator_t6200;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>
struct Dictionary_2_t6197;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_46.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m33456_gshared (Enumerator_t6200 * __this, Dictionary_2_t6197 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m33456(__this, ___dictionary, method) (( void (*) (Enumerator_t6200 *, Dictionary_2_t6197 *, const MethodInfo*))Enumerator__ctor_m33456_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m33457_gshared (Enumerator_t6200 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m33457(__this, method) (( Object_t * (*) (Enumerator_t6200 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m33457_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m33458_gshared (Enumerator_t6200 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m33458(__this, method) (( void (*) (Enumerator_t6200 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m33458_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2140  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m33459_gshared (Enumerator_t6200 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m33459(__this, method) (( DictionaryEntry_t2140  (*) (Enumerator_t6200 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m33459_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m33460_gshared (Enumerator_t6200 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m33460(__this, method) (( Object_t * (*) (Enumerator_t6200 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m33460_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m33461_gshared (Enumerator_t6200 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m33461(__this, method) (( Object_t * (*) (Enumerator_t6200 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m33461_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::MoveNext()
extern "C" bool Enumerator_MoveNext_m33462_gshared (Enumerator_t6200 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m33462(__this, method) (( bool (*) (Enumerator_t6200 *, const MethodInfo*))Enumerator_MoveNext_m33462_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::get_Current()
extern "C" KeyValuePair_2_t6194  Enumerator_get_Current_m33463_gshared (Enumerator_t6200 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m33463(__this, method) (( KeyValuePair_2_t6194  (*) (Enumerator_t6200 *, const MethodInfo*))Enumerator_get_Current_m33463_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::get_CurrentKey()
extern "C" int64_t Enumerator_get_CurrentKey_m33464_gshared (Enumerator_t6200 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m33464(__this, method) (( int64_t (*) (Enumerator_t6200 *, const MethodInfo*))Enumerator_get_CurrentKey_m33464_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::get_CurrentValue()
extern "C" uint8_t Enumerator_get_CurrentValue_m33465_gshared (Enumerator_t6200 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m33465(__this, method) (( uint8_t (*) (Enumerator_t6200 *, const MethodInfo*))Enumerator_get_CurrentValue_m33465_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::Reset()
extern "C" void Enumerator_Reset_m33466_gshared (Enumerator_t6200 * __this, const MethodInfo* method);
#define Enumerator_Reset_m33466(__this, method) (( void (*) (Enumerator_t6200 *, const MethodInfo*))Enumerator_Reset_m33466_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::VerifyState()
extern "C" void Enumerator_VerifyState_m33467_gshared (Enumerator_t6200 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m33467(__this, method) (( void (*) (Enumerator_t6200 *, const MethodInfo*))Enumerator_VerifyState_m33467_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m33468_gshared (Enumerator_t6200 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m33468(__this, method) (( void (*) (Enumerator_t6200 *, const MethodInfo*))Enumerator_VerifyCurrent_m33468_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::Dispose()
extern "C" void Enumerator_Dispose_m33469_gshared (Enumerator_t6200 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m33469(__this, method) (( void (*) (Enumerator_t6200 *, const MethodInfo*))Enumerator_Dispose_m33469_gshared)(__this, method)
