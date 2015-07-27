#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>
struct Enumerator_t3988;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t3982;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_38.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m27008_gshared (Enumerator_t3988 * __this, Dictionary_2_t3982 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m27008(__this, ___dictionary, method) (( void (*) (Enumerator_t3988 *, Dictionary_2_t3982 *, const MethodInfo*))Enumerator__ctor_m27008_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m27009_gshared (Enumerator_t3988 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m27009(__this, method) (( Object_t * (*) (Enumerator_t3988 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m27009_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2181  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m27010_gshared (Enumerator_t3988 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m27010(__this, method) (( DictionaryEntry_t2181  (*) (Enumerator_t3988 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m27010_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m27011_gshared (Enumerator_t3988 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m27011(__this, method) (( Object_t * (*) (Enumerator_t3988 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m27011_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m27012_gshared (Enumerator_t3988 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m27012(__this, method) (( Object_t * (*) (Enumerator_t3988 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m27012_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m27013_gshared (Enumerator_t3988 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m27013(__this, method) (( bool (*) (Enumerator_t3988 *, const MethodInfo*))Enumerator_MoveNext_m27013_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_Current()
extern "C" KeyValuePair_2_t3983  Enumerator_get_Current_m27014_gshared (Enumerator_t3988 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m27014(__this, method) (( KeyValuePair_2_t3983  (*) (Enumerator_t3988 *, const MethodInfo*))Enumerator_get_Current_m27014_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_CurrentKey()
extern "C" uint64_t Enumerator_get_CurrentKey_m27015_gshared (Enumerator_t3988 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m27015(__this, method) (( uint64_t (*) (Enumerator_t3988 *, const MethodInfo*))Enumerator_get_CurrentKey_m27015_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m27016_gshared (Enumerator_t3988 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m27016(__this, method) (( Object_t * (*) (Enumerator_t3988 *, const MethodInfo*))Enumerator_get_CurrentValue_m27016_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m27017_gshared (Enumerator_t3988 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m27017(__this, method) (( void (*) (Enumerator_t3988 *, const MethodInfo*))Enumerator_VerifyState_m27017_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m27018_gshared (Enumerator_t3988 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m27018(__this, method) (( void (*) (Enumerator_t3988 *, const MethodInfo*))Enumerator_VerifyCurrent_m27018_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m27019_gshared (Enumerator_t3988 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m27019(__this, method) (( void (*) (Enumerator_t3988 *, const MethodInfo*))Enumerator_Dispose_m27019_gshared)(__this, method)
