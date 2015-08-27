#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
struct Enumerator_t5537;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t5532;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_24.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m23906_gshared (Enumerator_t5537 * __this, Dictionary_2_t5532 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m23906(__this, ___dictionary, method) (( void (*) (Enumerator_t5537 *, Dictionary_2_t5532 *, const MethodInfo*))Enumerator__ctor_m23906_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m23907_gshared (Enumerator_t5537 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m23907(__this, method) (( Object_t * (*) (Enumerator_t5537 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m23907_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m23908_gshared (Enumerator_t5537 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m23908(__this, method) (( void (*) (Enumerator_t5537 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m23908_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2140  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m23909_gshared (Enumerator_t5537 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m23909(__this, method) (( DictionaryEntry_t2140  (*) (Enumerator_t5537 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m23909_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m23910_gshared (Enumerator_t5537 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m23910(__this, method) (( Object_t * (*) (Enumerator_t5537 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m23910_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m23911_gshared (Enumerator_t5537 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m23911(__this, method) (( Object_t * (*) (Enumerator_t5537 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m23911_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m23912_gshared (Enumerator_t5537 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m23912(__this, method) (( bool (*) (Enumerator_t5537 *, const MethodInfo*))Enumerator_MoveNext_m23912_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t5533  Enumerator_get_Current_m23913_gshared (Enumerator_t5537 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m23913(__this, method) (( KeyValuePair_2_t5533  (*) (Enumerator_t5537 *, const MethodInfo*))Enumerator_get_Current_m23913_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m23914_gshared (Enumerator_t5537 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m23914(__this, method) (( Object_t * (*) (Enumerator_t5537 *, const MethodInfo*))Enumerator_get_CurrentKey_m23914_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m23915_gshared (Enumerator_t5537 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m23915(__this, method) (( int32_t (*) (Enumerator_t5537 *, const MethodInfo*))Enumerator_get_CurrentValue_m23915_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Reset()
extern "C" void Enumerator_Reset_m23916_gshared (Enumerator_t5537 * __this, const MethodInfo* method);
#define Enumerator_Reset_m23916(__this, method) (( void (*) (Enumerator_t5537 *, const MethodInfo*))Enumerator_Reset_m23916_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m23917_gshared (Enumerator_t5537 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m23917(__this, method) (( void (*) (Enumerator_t5537 *, const MethodInfo*))Enumerator_VerifyState_m23917_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m23918_gshared (Enumerator_t5537 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m23918(__this, method) (( void (*) (Enumerator_t5537 *, const MethodInfo*))Enumerator_VerifyCurrent_m23918_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m23919_gshared (Enumerator_t5537 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m23919(__this, method) (( void (*) (Enumerator_t5537 *, const MethodInfo*))Enumerator_Dispose_m23919_gshared)(__this, method)
