#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>
struct Enumerator_t8408;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t8403;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_133.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m60903_gshared (Enumerator_t8408 * __this, Dictionary_2_t8403 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m60903(__this, ___dictionary, method) (( void (*) (Enumerator_t8408 *, Dictionary_2_t8403 *, const MethodInfo*))Enumerator__ctor_m60903_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m60904_gshared (Enumerator_t8408 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m60904(__this, method) (( Object_t * (*) (Enumerator_t8408 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m60904_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m60905_gshared (Enumerator_t8408 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m60905(__this, method) (( void (*) (Enumerator_t8408 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m60905_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2086  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m60906_gshared (Enumerator_t8408 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m60906(__this, method) (( DictionaryEntry_t2086  (*) (Enumerator_t8408 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m60906_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m60907_gshared (Enumerator_t8408 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m60907(__this, method) (( Object_t * (*) (Enumerator_t8408 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m60907_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m60908_gshared (Enumerator_t8408 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m60908(__this, method) (( Object_t * (*) (Enumerator_t8408 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m60908_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m60909_gshared (Enumerator_t8408 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m60909(__this, method) (( bool (*) (Enumerator_t8408 *, const MethodInfo*))Enumerator_MoveNext_m60909_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_Current()
extern "C" KeyValuePair_2_t8404  Enumerator_get_Current_m60910_gshared (Enumerator_t8408 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m60910(__this, method) (( KeyValuePair_2_t8404  (*) (Enumerator_t8408 *, const MethodInfo*))Enumerator_get_Current_m60910_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_CurrentKey()
extern "C" uint64_t Enumerator_get_CurrentKey_m60911_gshared (Enumerator_t8408 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m60911(__this, method) (( uint64_t (*) (Enumerator_t8408 *, const MethodInfo*))Enumerator_get_CurrentKey_m60911_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m60912_gshared (Enumerator_t8408 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m60912(__this, method) (( Object_t * (*) (Enumerator_t8408 *, const MethodInfo*))Enumerator_get_CurrentValue_m60912_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::Reset()
extern "C" void Enumerator_Reset_m60913_gshared (Enumerator_t8408 * __this, const MethodInfo* method);
#define Enumerator_Reset_m60913(__this, method) (( void (*) (Enumerator_t8408 *, const MethodInfo*))Enumerator_Reset_m60913_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m60914_gshared (Enumerator_t8408 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m60914(__this, method) (( void (*) (Enumerator_t8408 *, const MethodInfo*))Enumerator_VerifyState_m60914_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m60915_gshared (Enumerator_t8408 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m60915(__this, method) (( void (*) (Enumerator_t8408 *, const MethodInfo*))Enumerator_VerifyCurrent_m60915_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m60916_gshared (Enumerator_t8408 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m60916(__this, method) (( void (*) (Enumerator_t8408 *, const MethodInfo*))Enumerator_Dispose_m60916_gshared)(__this, method)
