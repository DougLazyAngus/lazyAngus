#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>
struct Enumerator_t7063;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Single>
struct Dictionary_2_t7060;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_53.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m44555_gshared (Enumerator_t7063 * __this, Dictionary_2_t7060 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m44555(__this, ___dictionary, method) (( void (*) (Enumerator_t7063 *, Dictionary_2_t7060 *, const MethodInfo*))Enumerator__ctor_m44555_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m44557_gshared (Enumerator_t7063 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m44557(__this, method) (( Object_t * (*) (Enumerator_t7063 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m44557_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m44559_gshared (Enumerator_t7063 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m44559(__this, method) (( void (*) (Enumerator_t7063 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m44559_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2139  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m44561_gshared (Enumerator_t7063 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m44561(__this, method) (( DictionaryEntry_t2139  (*) (Enumerator_t7063 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m44561_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m44563_gshared (Enumerator_t7063 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m44563(__this, method) (( Object_t * (*) (Enumerator_t7063 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m44563_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m44565_gshared (Enumerator_t7063 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m44565(__this, method) (( Object_t * (*) (Enumerator_t7063 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m44565_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::MoveNext()
extern "C" bool Enumerator_MoveNext_m44567_gshared (Enumerator_t7063 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m44567(__this, method) (( bool (*) (Enumerator_t7063 *, const MethodInfo*))Enumerator_MoveNext_m44567_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::get_Current()
extern "C" KeyValuePair_2_t7000  Enumerator_get_Current_m44569_gshared (Enumerator_t7063 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m44569(__this, method) (( KeyValuePair_2_t7000  (*) (Enumerator_t7063 *, const MethodInfo*))Enumerator_get_Current_m44569_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m44571_gshared (Enumerator_t7063 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m44571(__this, method) (( Object_t * (*) (Enumerator_t7063 *, const MethodInfo*))Enumerator_get_CurrentKey_m44571_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::get_CurrentValue()
extern "C" float Enumerator_get_CurrentValue_m44573_gshared (Enumerator_t7063 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m44573(__this, method) (( float (*) (Enumerator_t7063 *, const MethodInfo*))Enumerator_get_CurrentValue_m44573_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::Reset()
extern "C" void Enumerator_Reset_m44575_gshared (Enumerator_t7063 * __this, const MethodInfo* method);
#define Enumerator_Reset_m44575(__this, method) (( void (*) (Enumerator_t7063 *, const MethodInfo*))Enumerator_Reset_m44575_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::VerifyState()
extern "C" void Enumerator_VerifyState_m44577_gshared (Enumerator_t7063 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m44577(__this, method) (( void (*) (Enumerator_t7063 *, const MethodInfo*))Enumerator_VerifyState_m44577_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m44579_gshared (Enumerator_t7063 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m44579(__this, method) (( void (*) (Enumerator_t7063 *, const MethodInfo*))Enumerator_VerifyCurrent_m44579_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::Dispose()
extern "C" void Enumerator_Dispose_m44581_gshared (Enumerator_t7063 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m44581(__this, method) (( void (*) (Enumerator_t7063 *, const MethodInfo*))Enumerator_Dispose_m44581_gshared)(__this, method)
