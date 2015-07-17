#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>
struct Enumerator_t3986;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t3980;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_38.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m26997_gshared (Enumerator_t3986 * __this, Dictionary_2_t3980 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m26997(__this, ___dictionary, method) (( void (*) (Enumerator_t3986 *, Dictionary_2_t3980 *, const MethodInfo*))Enumerator__ctor_m26997_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m26998_gshared (Enumerator_t3986 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m26998(__this, method) (( Object_t * (*) (Enumerator_t3986 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m26998_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2179  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m26999_gshared (Enumerator_t3986 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m26999(__this, method) (( DictionaryEntry_t2179  (*) (Enumerator_t3986 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m26999_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m27000_gshared (Enumerator_t3986 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m27000(__this, method) (( Object_t * (*) (Enumerator_t3986 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m27000_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m27001_gshared (Enumerator_t3986 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m27001(__this, method) (( Object_t * (*) (Enumerator_t3986 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m27001_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m27002_gshared (Enumerator_t3986 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m27002(__this, method) (( bool (*) (Enumerator_t3986 *, const MethodInfo*))Enumerator_MoveNext_m27002_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_Current()
extern "C" KeyValuePair_2_t3981  Enumerator_get_Current_m27003_gshared (Enumerator_t3986 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m27003(__this, method) (( KeyValuePair_2_t3981  (*) (Enumerator_t3986 *, const MethodInfo*))Enumerator_get_Current_m27003_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_CurrentKey()
extern "C" uint64_t Enumerator_get_CurrentKey_m27004_gshared (Enumerator_t3986 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m27004(__this, method) (( uint64_t (*) (Enumerator_t3986 *, const MethodInfo*))Enumerator_get_CurrentKey_m27004_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m27005_gshared (Enumerator_t3986 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m27005(__this, method) (( Object_t * (*) (Enumerator_t3986 *, const MethodInfo*))Enumerator_get_CurrentValue_m27005_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m27006_gshared (Enumerator_t3986 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m27006(__this, method) (( void (*) (Enumerator_t3986 *, const MethodInfo*))Enumerator_VerifyState_m27006_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m27007_gshared (Enumerator_t3986 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m27007(__this, method) (( void (*) (Enumerator_t3986 *, const MethodInfo*))Enumerator_VerifyCurrent_m27007_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m27008_gshared (Enumerator_t3986 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m27008(__this, method) (( void (*) (Enumerator_t3986 *, const MethodInfo*))Enumerator_Dispose_m27008_gshared)(__this, method)
