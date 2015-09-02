#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>
struct Enumerator_t7099;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Single>
struct Dictionary_2_t7096;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_53.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m45008_gshared (Enumerator_t7099 * __this, Dictionary_2_t7096 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m45008(__this, ___dictionary, method) (( void (*) (Enumerator_t7099 *, Dictionary_2_t7096 *, const MethodInfo*))Enumerator__ctor_m45008_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m45010_gshared (Enumerator_t7099 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m45010(__this, method) (( Object_t * (*) (Enumerator_t7099 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m45010_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m45012_gshared (Enumerator_t7099 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m45012(__this, method) (( void (*) (Enumerator_t7099 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m45012_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2156  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m45014_gshared (Enumerator_t7099 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m45014(__this, method) (( DictionaryEntry_t2156  (*) (Enumerator_t7099 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m45014_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m45016_gshared (Enumerator_t7099 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m45016(__this, method) (( Object_t * (*) (Enumerator_t7099 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m45016_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m45018_gshared (Enumerator_t7099 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m45018(__this, method) (( Object_t * (*) (Enumerator_t7099 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m45018_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::MoveNext()
extern "C" bool Enumerator_MoveNext_m45020_gshared (Enumerator_t7099 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m45020(__this, method) (( bool (*) (Enumerator_t7099 *, const MethodInfo*))Enumerator_MoveNext_m45020_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::get_Current()
extern "C" KeyValuePair_2_t7036  Enumerator_get_Current_m45022_gshared (Enumerator_t7099 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m45022(__this, method) (( KeyValuePair_2_t7036  (*) (Enumerator_t7099 *, const MethodInfo*))Enumerator_get_Current_m45022_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m45024_gshared (Enumerator_t7099 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m45024(__this, method) (( Object_t * (*) (Enumerator_t7099 *, const MethodInfo*))Enumerator_get_CurrentKey_m45024_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::get_CurrentValue()
extern "C" float Enumerator_get_CurrentValue_m45026_gshared (Enumerator_t7099 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m45026(__this, method) (( float (*) (Enumerator_t7099 *, const MethodInfo*))Enumerator_get_CurrentValue_m45026_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::Reset()
extern "C" void Enumerator_Reset_m45028_gshared (Enumerator_t7099 * __this, const MethodInfo* method);
#define Enumerator_Reset_m45028(__this, method) (( void (*) (Enumerator_t7099 *, const MethodInfo*))Enumerator_Reset_m45028_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::VerifyState()
extern "C" void Enumerator_VerifyState_m45030_gshared (Enumerator_t7099 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m45030(__this, method) (( void (*) (Enumerator_t7099 *, const MethodInfo*))Enumerator_VerifyState_m45030_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m45032_gshared (Enumerator_t7099 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m45032(__this, method) (( void (*) (Enumerator_t7099 *, const MethodInfo*))Enumerator_VerifyCurrent_m45032_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::Dispose()
extern "C" void Enumerator_Dispose_m45034_gshared (Enumerator_t7099 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m45034(__this, method) (( void (*) (Enumerator_t7099 *, const MethodInfo*))Enumerator_Dispose_m45034_gshared)(__this, method)
