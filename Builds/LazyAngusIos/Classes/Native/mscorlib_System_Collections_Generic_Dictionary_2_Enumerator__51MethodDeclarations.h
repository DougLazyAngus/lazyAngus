#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>
struct Enumerator_t7009;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Double>
struct Dictionary_2_t7006;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_53.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m44126_gshared (Enumerator_t7009 * __this, Dictionary_2_t7006 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m44126(__this, ___dictionary, method) (( void (*) (Enumerator_t7009 *, Dictionary_2_t7006 *, const MethodInfo*))Enumerator__ctor_m44126_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m44128_gshared (Enumerator_t7009 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m44128(__this, method) (( Object_t * (*) (Enumerator_t7009 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m44128_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m44130_gshared (Enumerator_t7009 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m44130(__this, method) (( void (*) (Enumerator_t7009 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m44130_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2086  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m44132_gshared (Enumerator_t7009 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m44132(__this, method) (( DictionaryEntry_t2086  (*) (Enumerator_t7009 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m44132_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m44134_gshared (Enumerator_t7009 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m44134(__this, method) (( Object_t * (*) (Enumerator_t7009 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m44134_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m44136_gshared (Enumerator_t7009 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m44136(__this, method) (( Object_t * (*) (Enumerator_t7009 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m44136_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::MoveNext()
extern "C" bool Enumerator_MoveNext_m44138_gshared (Enumerator_t7009 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m44138(__this, method) (( bool (*) (Enumerator_t7009 *, const MethodInfo*))Enumerator_MoveNext_m44138_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::get_Current()
extern "C" KeyValuePair_2_t6932  Enumerator_get_Current_m44140_gshared (Enumerator_t7009 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m44140(__this, method) (( KeyValuePair_2_t6932  (*) (Enumerator_t7009 *, const MethodInfo*))Enumerator_get_Current_m44140_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m44142_gshared (Enumerator_t7009 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m44142(__this, method) (( Object_t * (*) (Enumerator_t7009 *, const MethodInfo*))Enumerator_get_CurrentKey_m44142_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::get_CurrentValue()
extern "C" double Enumerator_get_CurrentValue_m44144_gshared (Enumerator_t7009 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m44144(__this, method) (( double (*) (Enumerator_t7009 *, const MethodInfo*))Enumerator_get_CurrentValue_m44144_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::Reset()
extern "C" void Enumerator_Reset_m44146_gshared (Enumerator_t7009 * __this, const MethodInfo* method);
#define Enumerator_Reset_m44146(__this, method) (( void (*) (Enumerator_t7009 *, const MethodInfo*))Enumerator_Reset_m44146_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::VerifyState()
extern "C" void Enumerator_VerifyState_m44148_gshared (Enumerator_t7009 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m44148(__this, method) (( void (*) (Enumerator_t7009 *, const MethodInfo*))Enumerator_VerifyState_m44148_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m44150_gshared (Enumerator_t7009 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m44150(__this, method) (( void (*) (Enumerator_t7009 *, const MethodInfo*))Enumerator_VerifyCurrent_m44150_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::Dispose()
extern "C" void Enumerator_Dispose_m44152_gshared (Enumerator_t7009 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m44152(__this, method) (( void (*) (Enumerator_t7009 *, const MethodInfo*))Enumerator_Dispose_m44152_gshared)(__this, method)
