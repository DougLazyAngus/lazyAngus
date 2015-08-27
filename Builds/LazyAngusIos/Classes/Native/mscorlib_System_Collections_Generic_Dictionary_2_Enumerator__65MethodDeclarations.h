#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
struct Enumerator_t8456;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t8453;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_75.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m61282_gshared (Enumerator_t8456 * __this, Dictionary_2_t8453 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m61282(__this, ___dictionary, method) (( void (*) (Enumerator_t8456 *, Dictionary_2_t8453 *, const MethodInfo*))Enumerator__ctor_m61282_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m61283_gshared (Enumerator_t8456 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m61283(__this, method) (( Object_t * (*) (Enumerator_t8456 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m61283_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m61284_gshared (Enumerator_t8456 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m61284(__this, method) (( void (*) (Enumerator_t8456 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m61284_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2140  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m61285_gshared (Enumerator_t8456 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m61285(__this, method) (( DictionaryEntry_t2140  (*) (Enumerator_t8456 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m61285_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m61286_gshared (Enumerator_t8456 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m61286(__this, method) (( Object_t * (*) (Enumerator_t8456 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m61286_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m61287_gshared (Enumerator_t8456 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m61287(__this, method) (( Object_t * (*) (Enumerator_t8456 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m61287_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool Enumerator_MoveNext_m61288_gshared (Enumerator_t8456 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m61288(__this, method) (( bool (*) (Enumerator_t8456 *, const MethodInfo*))Enumerator_MoveNext_m61288_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_Current()
extern "C" KeyValuePair_2_t7250  Enumerator_get_Current_m61289_gshared (Enumerator_t8456 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m61289(__this, method) (( KeyValuePair_2_t7250  (*) (Enumerator_t8456 *, const MethodInfo*))Enumerator_get_Current_m61289_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m61290_gshared (Enumerator_t8456 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m61290(__this, method) (( Object_t * (*) (Enumerator_t8456 *, const MethodInfo*))Enumerator_get_CurrentKey_m61290_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentValue()
extern "C" int64_t Enumerator_get_CurrentValue_m61291_gshared (Enumerator_t8456 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m61291(__this, method) (( int64_t (*) (Enumerator_t8456 *, const MethodInfo*))Enumerator_get_CurrentValue_m61291_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::Reset()
extern "C" void Enumerator_Reset_m61292_gshared (Enumerator_t8456 * __this, const MethodInfo* method);
#define Enumerator_Reset_m61292(__this, method) (( void (*) (Enumerator_t8456 *, const MethodInfo*))Enumerator_Reset_m61292_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyState()
extern "C" void Enumerator_VerifyState_m61293_gshared (Enumerator_t8456 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m61293(__this, method) (( void (*) (Enumerator_t8456 *, const MethodInfo*))Enumerator_VerifyState_m61293_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m61294_gshared (Enumerator_t8456 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m61294(__this, method) (( void (*) (Enumerator_t8456 *, const MethodInfo*))Enumerator_VerifyCurrent_m61294_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::Dispose()
extern "C" void Enumerator_Dispose_m61295_gshared (Enumerator_t8456 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m61295(__this, method) (( void (*) (Enumerator_t8456 *, const MethodInfo*))Enumerator_Dispose_m61295_gshared)(__this, method)
