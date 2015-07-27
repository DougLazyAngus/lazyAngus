#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_t3399;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t3393;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m17760_gshared (Enumerator_t3399 * __this, Dictionary_2_t3393 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m17760(__this, ___dictionary, method) (( void (*) (Enumerator_t3399 *, Dictionary_2_t3393 *, const MethodInfo*))Enumerator__ctor_m17760_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m17761_gshared (Enumerator_t3399 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m17761(__this, method) (( Object_t * (*) (Enumerator_t3399 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m17761_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2181  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m17762_gshared (Enumerator_t3399 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m17762(__this, method) (( DictionaryEntry_t2181  (*) (Enumerator_t3399 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m17762_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m17763_gshared (Enumerator_t3399 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m17763(__this, method) (( Object_t * (*) (Enumerator_t3399 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m17763_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m17764_gshared (Enumerator_t3399 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m17764(__this, method) (( Object_t * (*) (Enumerator_t3399 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m17764_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m17765_gshared (Enumerator_t3399 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m17765(__this, method) (( bool (*) (Enumerator_t3399 *, const MethodInfo*))Enumerator_MoveNext_m17765_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern "C" KeyValuePair_2_t40  Enumerator_get_Current_m17766_gshared (Enumerator_t3399 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m17766(__this, method) (( KeyValuePair_2_t40  (*) (Enumerator_t3399 *, const MethodInfo*))Enumerator_get_Current_m17766_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m17767_gshared (Enumerator_t3399 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m17767(__this, method) (( Object_t * (*) (Enumerator_t3399 *, const MethodInfo*))Enumerator_get_CurrentKey_m17767_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m17768_gshared (Enumerator_t3399 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m17768(__this, method) (( Object_t * (*) (Enumerator_t3399 *, const MethodInfo*))Enumerator_get_CurrentValue_m17768_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m17769_gshared (Enumerator_t3399 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m17769(__this, method) (( void (*) (Enumerator_t3399 *, const MethodInfo*))Enumerator_VerifyState_m17769_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m17770_gshared (Enumerator_t3399 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m17770(__this, method) (( void (*) (Enumerator_t3399 *, const MethodInfo*))Enumerator_VerifyCurrent_m17770_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m17771_gshared (Enumerator_t3399 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m17771(__this, method) (( void (*) (Enumerator_t3399 *, const MethodInfo*))Enumerator_Dispose_m17771_gshared)(__this, method)
