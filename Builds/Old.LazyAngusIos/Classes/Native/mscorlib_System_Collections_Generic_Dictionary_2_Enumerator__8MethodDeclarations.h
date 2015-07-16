#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_t3345;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t3339;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m17172_gshared (Enumerator_t3345 * __this, Dictionary_2_t3339 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m17172(__this, ___dictionary, method) (( void (*) (Enumerator_t3345 *, Dictionary_2_t3339 *, const MethodInfo*))Enumerator__ctor_m17172_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m17173_gshared (Enumerator_t3345 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m17173(__this, method) (( Object_t * (*) (Enumerator_t3345 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m17173_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1710  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m17174_gshared (Enumerator_t3345 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m17174(__this, method) (( DictionaryEntry_t1710  (*) (Enumerator_t3345 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m17174_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m17175_gshared (Enumerator_t3345 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m17175(__this, method) (( Object_t * (*) (Enumerator_t3345 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m17175_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m17176_gshared (Enumerator_t3345 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m17176(__this, method) (( Object_t * (*) (Enumerator_t3345 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m17176_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m17177_gshared (Enumerator_t3345 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m17177(__this, method) (( bool (*) (Enumerator_t3345 *, const MethodInfo*))Enumerator_MoveNext_m17177_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern "C" KeyValuePair_2_t40  Enumerator_get_Current_m17178_gshared (Enumerator_t3345 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m17178(__this, method) (( KeyValuePair_2_t40  (*) (Enumerator_t3345 *, const MethodInfo*))Enumerator_get_Current_m17178_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m17179_gshared (Enumerator_t3345 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m17179(__this, method) (( Object_t * (*) (Enumerator_t3345 *, const MethodInfo*))Enumerator_get_CurrentKey_m17179_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m17180_gshared (Enumerator_t3345 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m17180(__this, method) (( Object_t * (*) (Enumerator_t3345 *, const MethodInfo*))Enumerator_get_CurrentValue_m17180_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m17181_gshared (Enumerator_t3345 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m17181(__this, method) (( void (*) (Enumerator_t3345 *, const MethodInfo*))Enumerator_VerifyState_m17181_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m17182_gshared (Enumerator_t3345 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m17182(__this, method) (( void (*) (Enumerator_t3345 *, const MethodInfo*))Enumerator_VerifyCurrent_m17182_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m17183_gshared (Enumerator_t3345 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m17183(__this, method) (( void (*) (Enumerator_t3345 *, const MethodInfo*))Enumerator_Dispose_m17183_gshared)(__this, method)
