#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>
struct Enumerator_t9053;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t9048;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_134.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m66325_gshared (Enumerator_t9053 * __this, Dictionary_2_t9048 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m66325(__this, ___dictionary, method) (( void (*) (Enumerator_t9053 *, Dictionary_2_t9048 *, const MethodInfo*))Enumerator__ctor_m66325_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m66326_gshared (Enumerator_t9053 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m66326(__this, method) (( Object_t * (*) (Enumerator_t9053 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m66326_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m66327_gshared (Enumerator_t9053 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m66327(__this, method) (( void (*) (Enumerator_t9053 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m66327_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2156  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m66328_gshared (Enumerator_t9053 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m66328(__this, method) (( DictionaryEntry_t2156  (*) (Enumerator_t9053 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m66328_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m66329_gshared (Enumerator_t9053 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m66329(__this, method) (( Object_t * (*) (Enumerator_t9053 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m66329_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m66330_gshared (Enumerator_t9053 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m66330(__this, method) (( Object_t * (*) (Enumerator_t9053 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m66330_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m66331_gshared (Enumerator_t9053 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m66331(__this, method) (( bool (*) (Enumerator_t9053 *, const MethodInfo*))Enumerator_MoveNext_m66331_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_Current()
extern "C" KeyValuePair_2_t9049  Enumerator_get_Current_m66332_gshared (Enumerator_t9053 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m66332(__this, method) (( KeyValuePair_2_t9049  (*) (Enumerator_t9053 *, const MethodInfo*))Enumerator_get_Current_m66332_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_CurrentKey()
extern "C" uint64_t Enumerator_get_CurrentKey_m66333_gshared (Enumerator_t9053 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m66333(__this, method) (( uint64_t (*) (Enumerator_t9053 *, const MethodInfo*))Enumerator_get_CurrentKey_m66333_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m66334_gshared (Enumerator_t9053 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m66334(__this, method) (( Object_t * (*) (Enumerator_t9053 *, const MethodInfo*))Enumerator_get_CurrentValue_m66334_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::Reset()
extern "C" void Enumerator_Reset_m66335_gshared (Enumerator_t9053 * __this, const MethodInfo* method);
#define Enumerator_Reset_m66335(__this, method) (( void (*) (Enumerator_t9053 *, const MethodInfo*))Enumerator_Reset_m66335_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m66336_gshared (Enumerator_t9053 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m66336(__this, method) (( void (*) (Enumerator_t9053 *, const MethodInfo*))Enumerator_VerifyState_m66336_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m66337_gshared (Enumerator_t9053 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m66337(__this, method) (( void (*) (Enumerator_t9053 *, const MethodInfo*))Enumerator_VerifyCurrent_m66337_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m66338_gshared (Enumerator_t9053 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m66338(__this, method) (( void (*) (Enumerator_t9053 *, const MethodInfo*))Enumerator_Dispose_m66338_gshared)(__this, method)
