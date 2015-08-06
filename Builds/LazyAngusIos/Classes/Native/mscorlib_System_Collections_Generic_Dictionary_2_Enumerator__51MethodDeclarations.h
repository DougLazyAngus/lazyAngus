#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>
struct Enumerator_t7011;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Double>
struct Dictionary_2_t7008;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_53.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m44142_gshared (Enumerator_t7011 * __this, Dictionary_2_t7008 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m44142(__this, ___dictionary, method) (( void (*) (Enumerator_t7011 *, Dictionary_2_t7008 *, const MethodInfo*))Enumerator__ctor_m44142_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m44144_gshared (Enumerator_t7011 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m44144(__this, method) (( Object_t * (*) (Enumerator_t7011 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m44144_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m44146_gshared (Enumerator_t7011 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m44146(__this, method) (( void (*) (Enumerator_t7011 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m44146_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2088  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m44148_gshared (Enumerator_t7011 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m44148(__this, method) (( DictionaryEntry_t2088  (*) (Enumerator_t7011 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m44148_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m44150_gshared (Enumerator_t7011 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m44150(__this, method) (( Object_t * (*) (Enumerator_t7011 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m44150_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m44152_gshared (Enumerator_t7011 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m44152(__this, method) (( Object_t * (*) (Enumerator_t7011 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m44152_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::MoveNext()
extern "C" bool Enumerator_MoveNext_m44154_gshared (Enumerator_t7011 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m44154(__this, method) (( bool (*) (Enumerator_t7011 *, const MethodInfo*))Enumerator_MoveNext_m44154_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::get_Current()
extern "C" KeyValuePair_2_t6934  Enumerator_get_Current_m44156_gshared (Enumerator_t7011 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m44156(__this, method) (( KeyValuePair_2_t6934  (*) (Enumerator_t7011 *, const MethodInfo*))Enumerator_get_Current_m44156_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m44158_gshared (Enumerator_t7011 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m44158(__this, method) (( Object_t * (*) (Enumerator_t7011 *, const MethodInfo*))Enumerator_get_CurrentKey_m44158_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::get_CurrentValue()
extern "C" double Enumerator_get_CurrentValue_m44160_gshared (Enumerator_t7011 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m44160(__this, method) (( double (*) (Enumerator_t7011 *, const MethodInfo*))Enumerator_get_CurrentValue_m44160_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::Reset()
extern "C" void Enumerator_Reset_m44162_gshared (Enumerator_t7011 * __this, const MethodInfo* method);
#define Enumerator_Reset_m44162(__this, method) (( void (*) (Enumerator_t7011 *, const MethodInfo*))Enumerator_Reset_m44162_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::VerifyState()
extern "C" void Enumerator_VerifyState_m44164_gshared (Enumerator_t7011 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m44164(__this, method) (( void (*) (Enumerator_t7011 *, const MethodInfo*))Enumerator_VerifyState_m44164_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m44166_gshared (Enumerator_t7011 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m44166(__this, method) (( void (*) (Enumerator_t7011 *, const MethodInfo*))Enumerator_VerifyCurrent_m44166_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::Dispose()
extern "C" void Enumerator_Dispose_m44168_gshared (Enumerator_t7011 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m44168(__this, method) (( void (*) (Enumerator_t7011 *, const MethodInfo*))Enumerator_Dispose_m44168_gshared)(__this, method)
