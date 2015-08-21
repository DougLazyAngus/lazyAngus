#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>
struct Enumerator_t6015;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Object>
struct Dictionary_2_t6012;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_40.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m31250_gshared (Enumerator_t6015 * __this, Dictionary_2_t6012 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m31250(__this, ___dictionary, method) (( void (*) (Enumerator_t6015 *, Dictionary_2_t6012 *, const MethodInfo*))Enumerator__ctor_m31250_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m31251_gshared (Enumerator_t6015 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m31251(__this, method) (( Object_t * (*) (Enumerator_t6015 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m31251_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m31252_gshared (Enumerator_t6015 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m31252(__this, method) (( void (*) (Enumerator_t6015 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m31252_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2137  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m31253_gshared (Enumerator_t6015 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m31253(__this, method) (( DictionaryEntry_t2137  (*) (Enumerator_t6015 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m31253_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m31254_gshared (Enumerator_t6015 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m31254(__this, method) (( Object_t * (*) (Enumerator_t6015 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m31254_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m31255_gshared (Enumerator_t6015 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m31255(__this, method) (( Object_t * (*) (Enumerator_t6015 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m31255_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m31256_gshared (Enumerator_t6015 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m31256(__this, method) (( bool (*) (Enumerator_t6015 *, const MethodInfo*))Enumerator_MoveNext_m31256_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::get_Current()
extern "C" KeyValuePair_2_t6007  Enumerator_get_Current_m31257_gshared (Enumerator_t6015 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m31257(__this, method) (( KeyValuePair_2_t6007  (*) (Enumerator_t6015 *, const MethodInfo*))Enumerator_get_Current_m31257_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::get_CurrentKey()
extern "C" int64_t Enumerator_get_CurrentKey_m31258_gshared (Enumerator_t6015 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m31258(__this, method) (( int64_t (*) (Enumerator_t6015 *, const MethodInfo*))Enumerator_get_CurrentKey_m31258_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m31259_gshared (Enumerator_t6015 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m31259(__this, method) (( Object_t * (*) (Enumerator_t6015 *, const MethodInfo*))Enumerator_get_CurrentValue_m31259_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::Reset()
extern "C" void Enumerator_Reset_m31260_gshared (Enumerator_t6015 * __this, const MethodInfo* method);
#define Enumerator_Reset_m31260(__this, method) (( void (*) (Enumerator_t6015 *, const MethodInfo*))Enumerator_Reset_m31260_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m31261_gshared (Enumerator_t6015 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m31261(__this, method) (( void (*) (Enumerator_t6015 *, const MethodInfo*))Enumerator_VerifyState_m31261_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m31262_gshared (Enumerator_t6015 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m31262(__this, method) (( void (*) (Enumerator_t6015 *, const MethodInfo*))Enumerator_VerifyCurrent_m31262_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m31263_gshared (Enumerator_t6015 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m31263(__this, method) (( void (*) (Enumerator_t6015 *, const MethodInfo*))Enumerator_Dispose_m31263_gshared)(__this, method)
