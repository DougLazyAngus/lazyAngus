#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
struct Enumerator_t9026;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t9023;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_75.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m65906_gshared (Enumerator_t9026 * __this, Dictionary_2_t9023 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m65906(__this, ___dictionary, method) (( void (*) (Enumerator_t9026 *, Dictionary_2_t9023 *, const MethodInfo*))Enumerator__ctor_m65906_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m65907_gshared (Enumerator_t9026 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m65907(__this, method) (( Object_t * (*) (Enumerator_t9026 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m65907_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m65908_gshared (Enumerator_t9026 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m65908(__this, method) (( void (*) (Enumerator_t9026 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m65908_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2160  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m65909_gshared (Enumerator_t9026 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m65909(__this, method) (( DictionaryEntry_t2160  (*) (Enumerator_t9026 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m65909_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m65910_gshared (Enumerator_t9026 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m65910(__this, method) (( Object_t * (*) (Enumerator_t9026 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m65910_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m65911_gshared (Enumerator_t9026 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m65911(__this, method) (( Object_t * (*) (Enumerator_t9026 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m65911_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool Enumerator_MoveNext_m65912_gshared (Enumerator_t9026 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m65912(__this, method) (( bool (*) (Enumerator_t9026 *, const MethodInfo*))Enumerator_MoveNext_m65912_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_Current()
extern "C" KeyValuePair_2_t7820  Enumerator_get_Current_m65913_gshared (Enumerator_t9026 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m65913(__this, method) (( KeyValuePair_2_t7820  (*) (Enumerator_t9026 *, const MethodInfo*))Enumerator_get_Current_m65913_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m65914_gshared (Enumerator_t9026 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m65914(__this, method) (( Object_t * (*) (Enumerator_t9026 *, const MethodInfo*))Enumerator_get_CurrentKey_m65914_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentValue()
extern "C" int64_t Enumerator_get_CurrentValue_m65915_gshared (Enumerator_t9026 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m65915(__this, method) (( int64_t (*) (Enumerator_t9026 *, const MethodInfo*))Enumerator_get_CurrentValue_m65915_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::Reset()
extern "C" void Enumerator_Reset_m65916_gshared (Enumerator_t9026 * __this, const MethodInfo* method);
#define Enumerator_Reset_m65916(__this, method) (( void (*) (Enumerator_t9026 *, const MethodInfo*))Enumerator_Reset_m65916_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyState()
extern "C" void Enumerator_VerifyState_m65917_gshared (Enumerator_t9026 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m65917(__this, method) (( void (*) (Enumerator_t9026 *, const MethodInfo*))Enumerator_VerifyState_m65917_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m65918_gshared (Enumerator_t9026 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m65918(__this, method) (( void (*) (Enumerator_t9026 *, const MethodInfo*))Enumerator_VerifyCurrent_m65918_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::Dispose()
extern "C" void Enumerator_Dispose_m65919_gshared (Enumerator_t9026 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m65919(__this, method) (( void (*) (Enumerator_t9026 *, const MethodInfo*))Enumerator_Dispose_m65919_gshared)(__this, method)
