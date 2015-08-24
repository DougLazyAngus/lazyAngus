#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>
struct Enumerator_t6018;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Object>
struct Dictionary_2_t6015;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_40.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m31282_gshared (Enumerator_t6018 * __this, Dictionary_2_t6015 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m31282(__this, ___dictionary, method) (( void (*) (Enumerator_t6018 *, Dictionary_2_t6015 *, const MethodInfo*))Enumerator__ctor_m31282_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m31283_gshared (Enumerator_t6018 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m31283(__this, method) (( Object_t * (*) (Enumerator_t6018 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m31283_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m31284_gshared (Enumerator_t6018 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m31284(__this, method) (( void (*) (Enumerator_t6018 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m31284_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2140  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m31285_gshared (Enumerator_t6018 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m31285(__this, method) (( DictionaryEntry_t2140  (*) (Enumerator_t6018 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m31285_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m31286_gshared (Enumerator_t6018 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m31286(__this, method) (( Object_t * (*) (Enumerator_t6018 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m31286_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m31287_gshared (Enumerator_t6018 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m31287(__this, method) (( Object_t * (*) (Enumerator_t6018 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m31287_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m31288_gshared (Enumerator_t6018 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m31288(__this, method) (( bool (*) (Enumerator_t6018 *, const MethodInfo*))Enumerator_MoveNext_m31288_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::get_Current()
extern "C" KeyValuePair_2_t6010  Enumerator_get_Current_m31289_gshared (Enumerator_t6018 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m31289(__this, method) (( KeyValuePair_2_t6010  (*) (Enumerator_t6018 *, const MethodInfo*))Enumerator_get_Current_m31289_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::get_CurrentKey()
extern "C" int64_t Enumerator_get_CurrentKey_m31290_gshared (Enumerator_t6018 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m31290(__this, method) (( int64_t (*) (Enumerator_t6018 *, const MethodInfo*))Enumerator_get_CurrentKey_m31290_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m31291_gshared (Enumerator_t6018 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m31291(__this, method) (( Object_t * (*) (Enumerator_t6018 *, const MethodInfo*))Enumerator_get_CurrentValue_m31291_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::Reset()
extern "C" void Enumerator_Reset_m31292_gshared (Enumerator_t6018 * __this, const MethodInfo* method);
#define Enumerator_Reset_m31292(__this, method) (( void (*) (Enumerator_t6018 *, const MethodInfo*))Enumerator_Reset_m31292_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m31293_gshared (Enumerator_t6018 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m31293(__this, method) (( void (*) (Enumerator_t6018 *, const MethodInfo*))Enumerator_VerifyState_m31293_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m31294_gshared (Enumerator_t6018 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m31294(__this, method) (( void (*) (Enumerator_t6018 *, const MethodInfo*))Enumerator_VerifyCurrent_m31294_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m31295_gshared (Enumerator_t6018 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m31295(__this, method) (( void (*) (Enumerator_t6018 *, const MethodInfo*))Enumerator_Dispose_m31295_gshared)(__this, method)
