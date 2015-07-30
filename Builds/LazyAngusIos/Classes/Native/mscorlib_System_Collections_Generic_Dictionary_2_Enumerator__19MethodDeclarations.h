#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
struct Enumerator_t5488;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t5483;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_24.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m23612_gshared (Enumerator_t5488 * __this, Dictionary_2_t5483 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m23612(__this, ___dictionary, method) (( void (*) (Enumerator_t5488 *, Dictionary_2_t5483 *, const MethodInfo*))Enumerator__ctor_m23612_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m23613_gshared (Enumerator_t5488 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m23613(__this, method) (( Object_t * (*) (Enumerator_t5488 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m23613_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m23614_gshared (Enumerator_t5488 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m23614(__this, method) (( void (*) (Enumerator_t5488 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m23614_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2086  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m23615_gshared (Enumerator_t5488 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m23615(__this, method) (( DictionaryEntry_t2086  (*) (Enumerator_t5488 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m23615_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m23616_gshared (Enumerator_t5488 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m23616(__this, method) (( Object_t * (*) (Enumerator_t5488 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m23616_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m23617_gshared (Enumerator_t5488 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m23617(__this, method) (( Object_t * (*) (Enumerator_t5488 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m23617_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m23618_gshared (Enumerator_t5488 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m23618(__this, method) (( bool (*) (Enumerator_t5488 *, const MethodInfo*))Enumerator_MoveNext_m23618_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t5484  Enumerator_get_Current_m23619_gshared (Enumerator_t5488 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m23619(__this, method) (( KeyValuePair_2_t5484  (*) (Enumerator_t5488 *, const MethodInfo*))Enumerator_get_Current_m23619_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m23620_gshared (Enumerator_t5488 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m23620(__this, method) (( Object_t * (*) (Enumerator_t5488 *, const MethodInfo*))Enumerator_get_CurrentKey_m23620_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m23621_gshared (Enumerator_t5488 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m23621(__this, method) (( int32_t (*) (Enumerator_t5488 *, const MethodInfo*))Enumerator_get_CurrentValue_m23621_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Reset()
extern "C" void Enumerator_Reset_m23622_gshared (Enumerator_t5488 * __this, const MethodInfo* method);
#define Enumerator_Reset_m23622(__this, method) (( void (*) (Enumerator_t5488 *, const MethodInfo*))Enumerator_Reset_m23622_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m23623_gshared (Enumerator_t5488 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m23623(__this, method) (( void (*) (Enumerator_t5488 *, const MethodInfo*))Enumerator_VerifyState_m23623_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m23624_gshared (Enumerator_t5488 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m23624(__this, method) (( void (*) (Enumerator_t5488 *, const MethodInfo*))Enumerator_VerifyCurrent_m23624_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m23625_gshared (Enumerator_t5488 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m23625(__this, method) (( void (*) (Enumerator_t5488 *, const MethodInfo*))Enumerator_Dispose_m23625_gshared)(__this, method)
