#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_t5399;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1438;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m21682_gshared (Enumerator_t5399 * __this, Dictionary_2_t1438 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m21682(__this, ___dictionary, method) (( void (*) (Enumerator_t5399 *, Dictionary_2_t1438 *, const MethodInfo*))Enumerator__ctor_m21682_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m21683_gshared (Enumerator_t5399 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m21683(__this, method) (( Object_t * (*) (Enumerator_t5399 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m21683_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m21684_gshared (Enumerator_t5399 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m21684(__this, method) (( void (*) (Enumerator_t5399 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m21684_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2090  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m21685_gshared (Enumerator_t5399 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m21685(__this, method) (( DictionaryEntry_t2090  (*) (Enumerator_t5399 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m21685_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m21686_gshared (Enumerator_t5399 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m21686(__this, method) (( Object_t * (*) (Enumerator_t5399 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m21686_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m21687_gshared (Enumerator_t5399 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m21687(__this, method) (( Object_t * (*) (Enumerator_t5399 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m21687_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m21688_gshared (Enumerator_t5399 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m21688(__this, method) (( bool (*) (Enumerator_t5399 *, const MethodInfo*))Enumerator_MoveNext_m21688_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern "C" KeyValuePair_2_t70  Enumerator_get_Current_m21689_gshared (Enumerator_t5399 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m21689(__this, method) (( KeyValuePair_2_t70  (*) (Enumerator_t5399 *, const MethodInfo*))Enumerator_get_Current_m21689_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m21690_gshared (Enumerator_t5399 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m21690(__this, method) (( Object_t * (*) (Enumerator_t5399 *, const MethodInfo*))Enumerator_get_CurrentKey_m21690_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m21691_gshared (Enumerator_t5399 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m21691(__this, method) (( Object_t * (*) (Enumerator_t5399 *, const MethodInfo*))Enumerator_get_CurrentValue_m21691_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Reset()
extern "C" void Enumerator_Reset_m21692_gshared (Enumerator_t5399 * __this, const MethodInfo* method);
#define Enumerator_Reset_m21692(__this, method) (( void (*) (Enumerator_t5399 *, const MethodInfo*))Enumerator_Reset_m21692_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m21693_gshared (Enumerator_t5399 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m21693(__this, method) (( void (*) (Enumerator_t5399 *, const MethodInfo*))Enumerator_VerifyState_m21693_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m21694_gshared (Enumerator_t5399 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m21694(__this, method) (( void (*) (Enumerator_t5399 *, const MethodInfo*))Enumerator_VerifyCurrent_m21694_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m21695_gshared (Enumerator_t5399 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m21695(__this, method) (( void (*) (Enumerator_t5399 *, const MethodInfo*))Enumerator_Dispose_m21695_gshared)(__this, method)
