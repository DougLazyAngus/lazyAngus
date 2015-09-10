#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>
struct Enumerator_t8927;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>
struct Dictionary_2_t8924;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_131.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m64532_gshared (Enumerator_t8927 * __this, Dictionary_2_t8924 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m64532(__this, ___dictionary, method) (( void (*) (Enumerator_t8927 *, Dictionary_2_t8924 *, const MethodInfo*))Enumerator__ctor_m64532_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m64533_gshared (Enumerator_t8927 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m64533(__this, method) (( Object_t * (*) (Enumerator_t8927 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m64533_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m64534_gshared (Enumerator_t8927 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m64534(__this, method) (( void (*) (Enumerator_t8927 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m64534_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2167  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m64535_gshared (Enumerator_t8927 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m64535(__this, method) (( DictionaryEntry_t2167  (*) (Enumerator_t8927 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m64535_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m64536_gshared (Enumerator_t8927 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m64536(__this, method) (( Object_t * (*) (Enumerator_t8927 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m64536_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m64537_gshared (Enumerator_t8927 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m64537(__this, method) (( Object_t * (*) (Enumerator_t8927 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m64537_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m64538_gshared (Enumerator_t8927 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m64538(__this, method) (( bool (*) (Enumerator_t8927 *, const MethodInfo*))Enumerator_MoveNext_m64538_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t8921  Enumerator_get_Current_m64539_gshared (Enumerator_t8927 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m64539(__this, method) (( KeyValuePair_2_t8921  (*) (Enumerator_t8927 *, const MethodInfo*))Enumerator_get_Current_m64539_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::get_CurrentKey()
extern "C" int64_t Enumerator_get_CurrentKey_m64540_gshared (Enumerator_t8927 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m64540(__this, method) (( int64_t (*) (Enumerator_t8927 *, const MethodInfo*))Enumerator_get_CurrentKey_m64540_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m64541_gshared (Enumerator_t8927 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m64541(__this, method) (( int32_t (*) (Enumerator_t8927 *, const MethodInfo*))Enumerator_get_CurrentValue_m64541_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::Reset()
extern "C" void Enumerator_Reset_m64542_gshared (Enumerator_t8927 * __this, const MethodInfo* method);
#define Enumerator_Reset_m64542(__this, method) (( void (*) (Enumerator_t8927 *, const MethodInfo*))Enumerator_Reset_m64542_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m64543_gshared (Enumerator_t8927 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m64543(__this, method) (( void (*) (Enumerator_t8927 *, const MethodInfo*))Enumerator_VerifyState_m64543_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m64544_gshared (Enumerator_t8927 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m64544(__this, method) (( void (*) (Enumerator_t8927 *, const MethodInfo*))Enumerator_VerifyCurrent_m64544_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m64545_gshared (Enumerator_t8927 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m64545(__this, method) (( void (*) (Enumerator_t8927 *, const MethodInfo*))Enumerator_Dispose_m64545_gshared)(__this, method)
