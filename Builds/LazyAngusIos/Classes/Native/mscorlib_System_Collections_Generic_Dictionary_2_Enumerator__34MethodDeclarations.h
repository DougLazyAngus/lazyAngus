#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>
struct Enumerator_t5928;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Object>
struct Dictionary_2_t5925;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_39.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m30407_gshared (Enumerator_t5928 * __this, Dictionary_2_t5925 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m30407(__this, ___dictionary, method) (( void (*) (Enumerator_t5928 *, Dictionary_2_t5925 *, const MethodInfo*))Enumerator__ctor_m30407_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m30408_gshared (Enumerator_t5928 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m30408(__this, method) (( Object_t * (*) (Enumerator_t5928 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m30408_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m30409_gshared (Enumerator_t5928 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m30409(__this, method) (( void (*) (Enumerator_t5928 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m30409_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2079  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m30410_gshared (Enumerator_t5928 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m30410(__this, method) (( DictionaryEntry_t2079  (*) (Enumerator_t5928 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m30410_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m30411_gshared (Enumerator_t5928 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m30411(__this, method) (( Object_t * (*) (Enumerator_t5928 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m30411_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m30412_gshared (Enumerator_t5928 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m30412(__this, method) (( Object_t * (*) (Enumerator_t5928 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m30412_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m30413_gshared (Enumerator_t5928 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m30413(__this, method) (( bool (*) (Enumerator_t5928 *, const MethodInfo*))Enumerator_MoveNext_m30413_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::get_Current()
extern "C" KeyValuePair_2_t5920  Enumerator_get_Current_m30414_gshared (Enumerator_t5928 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m30414(__this, method) (( KeyValuePair_2_t5920  (*) (Enumerator_t5928 *, const MethodInfo*))Enumerator_get_Current_m30414_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::get_CurrentKey()
extern "C" int64_t Enumerator_get_CurrentKey_m30415_gshared (Enumerator_t5928 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m30415(__this, method) (( int64_t (*) (Enumerator_t5928 *, const MethodInfo*))Enumerator_get_CurrentKey_m30415_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m30416_gshared (Enumerator_t5928 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m30416(__this, method) (( Object_t * (*) (Enumerator_t5928 *, const MethodInfo*))Enumerator_get_CurrentValue_m30416_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::Reset()
extern "C" void Enumerator_Reset_m30417_gshared (Enumerator_t5928 * __this, const MethodInfo* method);
#define Enumerator_Reset_m30417(__this, method) (( void (*) (Enumerator_t5928 *, const MethodInfo*))Enumerator_Reset_m30417_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m30418_gshared (Enumerator_t5928 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m30418(__this, method) (( void (*) (Enumerator_t5928 *, const MethodInfo*))Enumerator_VerifyState_m30418_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m30419_gshared (Enumerator_t5928 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m30419(__this, method) (( void (*) (Enumerator_t5928 *, const MethodInfo*))Enumerator_VerifyCurrent_m30419_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m30420_gshared (Enumerator_t5928 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m30420(__this, method) (( void (*) (Enumerator_t5928 *, const MethodInfo*))Enumerator_Dispose_m30420_gshared)(__this, method)
