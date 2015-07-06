#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
struct Enumerator_t3361;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1150;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_13.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m17779_gshared (Enumerator_t3361 * __this, Dictionary_2_t1150 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m17779(__this, ___dictionary, method) (( void (*) (Enumerator_t3361 *, Dictionary_2_t1150 *, const MethodInfo*))Enumerator__ctor_m17779_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m17780_gshared (Enumerator_t3361 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m17780(__this, method) (( Object_t * (*) (Enumerator_t3361 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m17780_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1685  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m17781_gshared (Enumerator_t3361 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m17781(__this, method) (( DictionaryEntry_t1685  (*) (Enumerator_t3361 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m17781_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m17782_gshared (Enumerator_t3361 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m17782(__this, method) (( Object_t * (*) (Enumerator_t3361 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m17782_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m17783_gshared (Enumerator_t3361 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m17783(__this, method) (( Object_t * (*) (Enumerator_t3361 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m17783_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m17784_gshared (Enumerator_t3361 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m17784(__this, method) (( bool (*) (Enumerator_t3361 *, const MethodInfo*))Enumerator_MoveNext_m17784_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" KeyValuePair_2_t3357  Enumerator_get_Current_m17785_gshared (Enumerator_t3361 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m17785(__this, method) (( KeyValuePair_2_t3357  (*) (Enumerator_t3361 *, const MethodInfo*))Enumerator_get_Current_m17785_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m17786_gshared (Enumerator_t3361 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m17786(__this, method) (( int32_t (*) (Enumerator_t3361 *, const MethodInfo*))Enumerator_get_CurrentKey_m17786_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m17787_gshared (Enumerator_t3361 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m17787(__this, method) (( Object_t * (*) (Enumerator_t3361 *, const MethodInfo*))Enumerator_get_CurrentValue_m17787_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m17788_gshared (Enumerator_t3361 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m17788(__this, method) (( void (*) (Enumerator_t3361 *, const MethodInfo*))Enumerator_VerifyState_m17788_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m17789_gshared (Enumerator_t3361 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m17789(__this, method) (( void (*) (Enumerator_t3361 *, const MethodInfo*))Enumerator_VerifyCurrent_m17789_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m17790_gshared (Enumerator_t3361 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m17790(__this, method) (( void (*) (Enumerator_t3361 *, const MethodInfo*))Enumerator_Dispose_m17790_gshared)(__this, method)
