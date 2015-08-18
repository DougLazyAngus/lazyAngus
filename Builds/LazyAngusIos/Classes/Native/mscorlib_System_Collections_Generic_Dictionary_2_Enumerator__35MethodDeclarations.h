#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>
struct Enumerator_t6011;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Object>
struct Dictionary_2_t6008;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_40.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m31158_gshared (Enumerator_t6011 * __this, Dictionary_2_t6008 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m31158(__this, ___dictionary, method) (( void (*) (Enumerator_t6011 *, Dictionary_2_t6008 *, const MethodInfo*))Enumerator__ctor_m31158_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m31159_gshared (Enumerator_t6011 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m31159(__this, method) (( Object_t * (*) (Enumerator_t6011 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m31159_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m31160_gshared (Enumerator_t6011 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m31160(__this, method) (( void (*) (Enumerator_t6011 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m31160_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2139  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m31161_gshared (Enumerator_t6011 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m31161(__this, method) (( DictionaryEntry_t2139  (*) (Enumerator_t6011 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m31161_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m31162_gshared (Enumerator_t6011 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m31162(__this, method) (( Object_t * (*) (Enumerator_t6011 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m31162_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m31163_gshared (Enumerator_t6011 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m31163(__this, method) (( Object_t * (*) (Enumerator_t6011 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m31163_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m31164_gshared (Enumerator_t6011 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m31164(__this, method) (( bool (*) (Enumerator_t6011 *, const MethodInfo*))Enumerator_MoveNext_m31164_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::get_Current()
extern "C" KeyValuePair_2_t6003  Enumerator_get_Current_m31165_gshared (Enumerator_t6011 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m31165(__this, method) (( KeyValuePair_2_t6003  (*) (Enumerator_t6011 *, const MethodInfo*))Enumerator_get_Current_m31165_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::get_CurrentKey()
extern "C" int64_t Enumerator_get_CurrentKey_m31166_gshared (Enumerator_t6011 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m31166(__this, method) (( int64_t (*) (Enumerator_t6011 *, const MethodInfo*))Enumerator_get_CurrentKey_m31166_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m31167_gshared (Enumerator_t6011 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m31167(__this, method) (( Object_t * (*) (Enumerator_t6011 *, const MethodInfo*))Enumerator_get_CurrentValue_m31167_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::Reset()
extern "C" void Enumerator_Reset_m31168_gshared (Enumerator_t6011 * __this, const MethodInfo* method);
#define Enumerator_Reset_m31168(__this, method) (( void (*) (Enumerator_t6011 *, const MethodInfo*))Enumerator_Reset_m31168_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m31169_gshared (Enumerator_t6011 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m31169(__this, method) (( void (*) (Enumerator_t6011 *, const MethodInfo*))Enumerator_VerifyState_m31169_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m31170_gshared (Enumerator_t6011 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m31170(__this, method) (( void (*) (Enumerator_t6011 *, const MethodInfo*))Enumerator_VerifyCurrent_m31170_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m31171_gshared (Enumerator_t6011 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m31171(__this, method) (( void (*) (Enumerator_t6011 *, const MethodInfo*))Enumerator_Dispose_m31171_gshared)(__this, method)
