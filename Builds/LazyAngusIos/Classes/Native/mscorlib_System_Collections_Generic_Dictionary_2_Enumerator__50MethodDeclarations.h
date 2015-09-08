#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>
struct Enumerator_t7640;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Single>
struct Dictionary_2_t7637;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_53.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m49283_gshared (Enumerator_t7640 * __this, Dictionary_2_t7637 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m49283(__this, ___dictionary, method) (( void (*) (Enumerator_t7640 *, Dictionary_2_t7637 *, const MethodInfo*))Enumerator__ctor_m49283_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m49285_gshared (Enumerator_t7640 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m49285(__this, method) (( Object_t * (*) (Enumerator_t7640 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m49285_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m49287_gshared (Enumerator_t7640 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m49287(__this, method) (( void (*) (Enumerator_t7640 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m49287_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2160  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m49289_gshared (Enumerator_t7640 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m49289(__this, method) (( DictionaryEntry_t2160  (*) (Enumerator_t7640 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m49289_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m49291_gshared (Enumerator_t7640 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m49291(__this, method) (( Object_t * (*) (Enumerator_t7640 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m49291_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m49293_gshared (Enumerator_t7640 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m49293(__this, method) (( Object_t * (*) (Enumerator_t7640 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m49293_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::MoveNext()
extern "C" bool Enumerator_MoveNext_m49295_gshared (Enumerator_t7640 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m49295(__this, method) (( bool (*) (Enumerator_t7640 *, const MethodInfo*))Enumerator_MoveNext_m49295_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::get_Current()
extern "C" KeyValuePair_2_t7577  Enumerator_get_Current_m49297_gshared (Enumerator_t7640 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m49297(__this, method) (( KeyValuePair_2_t7577  (*) (Enumerator_t7640 *, const MethodInfo*))Enumerator_get_Current_m49297_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m49299_gshared (Enumerator_t7640 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m49299(__this, method) (( Object_t * (*) (Enumerator_t7640 *, const MethodInfo*))Enumerator_get_CurrentKey_m49299_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::get_CurrentValue()
extern "C" float Enumerator_get_CurrentValue_m49301_gshared (Enumerator_t7640 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m49301(__this, method) (( float (*) (Enumerator_t7640 *, const MethodInfo*))Enumerator_get_CurrentValue_m49301_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::Reset()
extern "C" void Enumerator_Reset_m49303_gshared (Enumerator_t7640 * __this, const MethodInfo* method);
#define Enumerator_Reset_m49303(__this, method) (( void (*) (Enumerator_t7640 *, const MethodInfo*))Enumerator_Reset_m49303_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::VerifyState()
extern "C" void Enumerator_VerifyState_m49305_gshared (Enumerator_t7640 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m49305(__this, method) (( void (*) (Enumerator_t7640 *, const MethodInfo*))Enumerator_VerifyState_m49305_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m49307_gshared (Enumerator_t7640 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m49307(__this, method) (( void (*) (Enumerator_t7640 *, const MethodInfo*))Enumerator_VerifyCurrent_m49307_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::Dispose()
extern "C" void Enumerator_Dispose_m49309_gshared (Enumerator_t7640 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m49309(__this, method) (( void (*) (Enumerator_t7640 *, const MethodInfo*))Enumerator_Dispose_m49309_gshared)(__this, method)
