#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>
struct Enumerator_t7655;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Double>
struct Dictionary_2_t7652;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_54.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m49544_gshared (Enumerator_t7655 * __this, Dictionary_2_t7652 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m49544(__this, ___dictionary, method) (( void (*) (Enumerator_t7655 *, Dictionary_2_t7652 *, const MethodInfo*))Enumerator__ctor_m49544_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m49546_gshared (Enumerator_t7655 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m49546(__this, method) (( Object_t * (*) (Enumerator_t7655 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m49546_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m49548_gshared (Enumerator_t7655 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m49548(__this, method) (( void (*) (Enumerator_t7655 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m49548_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2157  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m49550_gshared (Enumerator_t7655 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m49550(__this, method) (( DictionaryEntry_t2157  (*) (Enumerator_t7655 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m49550_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m49552_gshared (Enumerator_t7655 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m49552(__this, method) (( Object_t * (*) (Enumerator_t7655 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m49552_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m49554_gshared (Enumerator_t7655 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m49554(__this, method) (( Object_t * (*) (Enumerator_t7655 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m49554_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::MoveNext()
extern "C" bool Enumerator_MoveNext_m49556_gshared (Enumerator_t7655 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m49556(__this, method) (( bool (*) (Enumerator_t7655 *, const MethodInfo*))Enumerator_MoveNext_m49556_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::get_Current()
extern "C" KeyValuePair_2_t7578  Enumerator_get_Current_m49558_gshared (Enumerator_t7655 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m49558(__this, method) (( KeyValuePair_2_t7578  (*) (Enumerator_t7655 *, const MethodInfo*))Enumerator_get_Current_m49558_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m49560_gshared (Enumerator_t7655 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m49560(__this, method) (( Object_t * (*) (Enumerator_t7655 *, const MethodInfo*))Enumerator_get_CurrentKey_m49560_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::get_CurrentValue()
extern "C" double Enumerator_get_CurrentValue_m49562_gshared (Enumerator_t7655 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m49562(__this, method) (( double (*) (Enumerator_t7655 *, const MethodInfo*))Enumerator_get_CurrentValue_m49562_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::Reset()
extern "C" void Enumerator_Reset_m49564_gshared (Enumerator_t7655 * __this, const MethodInfo* method);
#define Enumerator_Reset_m49564(__this, method) (( void (*) (Enumerator_t7655 *, const MethodInfo*))Enumerator_Reset_m49564_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::VerifyState()
extern "C" void Enumerator_VerifyState_m49566_gshared (Enumerator_t7655 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m49566(__this, method) (( void (*) (Enumerator_t7655 *, const MethodInfo*))Enumerator_VerifyState_m49566_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m49568_gshared (Enumerator_t7655 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m49568(__this, method) (( void (*) (Enumerator_t7655 *, const MethodInfo*))Enumerator_VerifyCurrent_m49568_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::Dispose()
extern "C" void Enumerator_Dispose_m49570_gshared (Enumerator_t7655 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m49570(__this, method) (( void (*) (Enumerator_t7655 *, const MethodInfo*))Enumerator_Dispose_m49570_gshared)(__this, method)
