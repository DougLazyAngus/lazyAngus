#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>
struct Enumerator_t6581;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Object>
struct Dictionary_2_t6578;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_40.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m35857_gshared (Enumerator_t6581 * __this, Dictionary_2_t6578 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m35857(__this, ___dictionary, method) (( void (*) (Enumerator_t6581 *, Dictionary_2_t6578 *, const MethodInfo*))Enumerator__ctor_m35857_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m35858_gshared (Enumerator_t6581 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m35858(__this, method) (( Object_t * (*) (Enumerator_t6581 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m35858_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m35859_gshared (Enumerator_t6581 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m35859(__this, method) (( void (*) (Enumerator_t6581 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m35859_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2157  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m35860_gshared (Enumerator_t6581 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m35860(__this, method) (( DictionaryEntry_t2157  (*) (Enumerator_t6581 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m35860_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m35861_gshared (Enumerator_t6581 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m35861(__this, method) (( Object_t * (*) (Enumerator_t6581 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m35861_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m35862_gshared (Enumerator_t6581 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m35862(__this, method) (( Object_t * (*) (Enumerator_t6581 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m35862_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m35863_gshared (Enumerator_t6581 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m35863(__this, method) (( bool (*) (Enumerator_t6581 *, const MethodInfo*))Enumerator_MoveNext_m35863_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::get_Current()
extern "C" KeyValuePair_2_t6573  Enumerator_get_Current_m35864_gshared (Enumerator_t6581 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m35864(__this, method) (( KeyValuePair_2_t6573  (*) (Enumerator_t6581 *, const MethodInfo*))Enumerator_get_Current_m35864_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::get_CurrentKey()
extern "C" int64_t Enumerator_get_CurrentKey_m35865_gshared (Enumerator_t6581 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m35865(__this, method) (( int64_t (*) (Enumerator_t6581 *, const MethodInfo*))Enumerator_get_CurrentKey_m35865_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m35866_gshared (Enumerator_t6581 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m35866(__this, method) (( Object_t * (*) (Enumerator_t6581 *, const MethodInfo*))Enumerator_get_CurrentValue_m35866_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::Reset()
extern "C" void Enumerator_Reset_m35867_gshared (Enumerator_t6581 * __this, const MethodInfo* method);
#define Enumerator_Reset_m35867(__this, method) (( void (*) (Enumerator_t6581 *, const MethodInfo*))Enumerator_Reset_m35867_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m35868_gshared (Enumerator_t6581 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m35868(__this, method) (( void (*) (Enumerator_t6581 *, const MethodInfo*))Enumerator_VerifyState_m35868_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m35869_gshared (Enumerator_t6581 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m35869(__this, method) (( void (*) (Enumerator_t6581 *, const MethodInfo*))Enumerator_VerifyCurrent_m35869_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m35870_gshared (Enumerator_t6581 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m35870(__this, method) (( void (*) (Enumerator_t6581 *, const MethodInfo*))Enumerator_Dispose_m35870_gshared)(__this, method)
