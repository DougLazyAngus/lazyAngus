#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>
struct Enumerator_t7001;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Double>
struct Dictionary_2_t6998;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_53.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m44079_gshared (Enumerator_t7001 * __this, Dictionary_2_t6998 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m44079(__this, ___dictionary, method) (( void (*) (Enumerator_t7001 *, Dictionary_2_t6998 *, const MethodInfo*))Enumerator__ctor_m44079_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m44081_gshared (Enumerator_t7001 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m44081(__this, method) (( Object_t * (*) (Enumerator_t7001 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m44081_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m44083_gshared (Enumerator_t7001 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m44083(__this, method) (( void (*) (Enumerator_t7001 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m44083_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2079  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m44085_gshared (Enumerator_t7001 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m44085(__this, method) (( DictionaryEntry_t2079  (*) (Enumerator_t7001 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m44085_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m44087_gshared (Enumerator_t7001 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m44087(__this, method) (( Object_t * (*) (Enumerator_t7001 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m44087_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m44089_gshared (Enumerator_t7001 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m44089(__this, method) (( Object_t * (*) (Enumerator_t7001 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m44089_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::MoveNext()
extern "C" bool Enumerator_MoveNext_m44091_gshared (Enumerator_t7001 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m44091(__this, method) (( bool (*) (Enumerator_t7001 *, const MethodInfo*))Enumerator_MoveNext_m44091_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::get_Current()
extern "C" KeyValuePair_2_t6924  Enumerator_get_Current_m44093_gshared (Enumerator_t7001 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m44093(__this, method) (( KeyValuePair_2_t6924  (*) (Enumerator_t7001 *, const MethodInfo*))Enumerator_get_Current_m44093_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m44095_gshared (Enumerator_t7001 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m44095(__this, method) (( Object_t * (*) (Enumerator_t7001 *, const MethodInfo*))Enumerator_get_CurrentKey_m44095_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::get_CurrentValue()
extern "C" double Enumerator_get_CurrentValue_m44097_gshared (Enumerator_t7001 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m44097(__this, method) (( double (*) (Enumerator_t7001 *, const MethodInfo*))Enumerator_get_CurrentValue_m44097_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::Reset()
extern "C" void Enumerator_Reset_m44099_gshared (Enumerator_t7001 * __this, const MethodInfo* method);
#define Enumerator_Reset_m44099(__this, method) (( void (*) (Enumerator_t7001 *, const MethodInfo*))Enumerator_Reset_m44099_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::VerifyState()
extern "C" void Enumerator_VerifyState_m44101_gshared (Enumerator_t7001 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m44101(__this, method) (( void (*) (Enumerator_t7001 *, const MethodInfo*))Enumerator_VerifyState_m44101_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m44103_gshared (Enumerator_t7001 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m44103(__this, method) (( void (*) (Enumerator_t7001 *, const MethodInfo*))Enumerator_VerifyCurrent_m44103_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::Dispose()
extern "C" void Enumerator_Dispose_m44105_gshared (Enumerator_t7001 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m44105(__this, method) (( void (*) (Enumerator_t7001 *, const MethodInfo*))Enumerator_Dispose_m44105_gshared)(__this, method)
