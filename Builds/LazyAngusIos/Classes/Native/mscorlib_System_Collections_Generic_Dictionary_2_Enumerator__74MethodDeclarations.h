#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>
struct Enumerator_t8655;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t4125;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_143.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m63996_gshared (Enumerator_t8655 * __this, Dictionary_2_t4125 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m63996(__this, ___dictionary, method) (( void (*) (Enumerator_t8655 *, Dictionary_2_t4125 *, const MethodInfo*))Enumerator__ctor_m63996_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m63997_gshared (Enumerator_t8655 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m63997(__this, method) (( Object_t * (*) (Enumerator_t8655 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m63997_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m63998_gshared (Enumerator_t8655 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m63998(__this, method) (( void (*) (Enumerator_t8655 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m63998_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2140  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m63999_gshared (Enumerator_t8655 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m63999(__this, method) (( DictionaryEntry_t2140  (*) (Enumerator_t8655 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m63999_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m64000_gshared (Enumerator_t8655 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m64000(__this, method) (( Object_t * (*) (Enumerator_t8655 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m64000_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m64001_gshared (Enumerator_t8655 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m64001(__this, method) (( Object_t * (*) (Enumerator_t8655 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m64001_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m64002_gshared (Enumerator_t8655 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m64002(__this, method) (( bool (*) (Enumerator_t8655 *, const MethodInfo*))Enumerator_MoveNext_m64002_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t8651  Enumerator_get_Current_m64003_gshared (Enumerator_t8655 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m64003(__this, method) (( KeyValuePair_2_t8651  (*) (Enumerator_t8655 *, const MethodInfo*))Enumerator_get_Current_m64003_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m64004_gshared (Enumerator_t8655 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m64004(__this, method) (( int32_t (*) (Enumerator_t8655 *, const MethodInfo*))Enumerator_get_CurrentKey_m64004_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m64005_gshared (Enumerator_t8655 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m64005(__this, method) (( int32_t (*) (Enumerator_t8655 *, const MethodInfo*))Enumerator_get_CurrentValue_m64005_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::Reset()
extern "C" void Enumerator_Reset_m64006_gshared (Enumerator_t8655 * __this, const MethodInfo* method);
#define Enumerator_Reset_m64006(__this, method) (( void (*) (Enumerator_t8655 *, const MethodInfo*))Enumerator_Reset_m64006_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m64007_gshared (Enumerator_t8655 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m64007(__this, method) (( void (*) (Enumerator_t8655 *, const MethodInfo*))Enumerator_VerifyState_m64007_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m64008_gshared (Enumerator_t8655 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m64008(__this, method) (( void (*) (Enumerator_t8655 *, const MethodInfo*))Enumerator_VerifyCurrent_m64008_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m64009_gshared (Enumerator_t8655 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m64009(__this, method) (( void (*) (Enumerator_t8655 *, const MethodInfo*))Enumerator_Dispose_m64009_gshared)(__this, method)
