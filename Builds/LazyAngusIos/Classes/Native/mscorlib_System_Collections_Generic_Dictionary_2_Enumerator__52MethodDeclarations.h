#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>
struct Enumerator_t7667;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Double>
struct Dictionary_2_t7664;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_54.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m49613_gshared (Enumerator_t7667 * __this, Dictionary_2_t7664 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m49613(__this, ___dictionary, method) (( void (*) (Enumerator_t7667 *, Dictionary_2_t7664 *, const MethodInfo*))Enumerator__ctor_m49613_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m49615_gshared (Enumerator_t7667 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m49615(__this, method) (( Object_t * (*) (Enumerator_t7667 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m49615_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m49617_gshared (Enumerator_t7667 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m49617(__this, method) (( void (*) (Enumerator_t7667 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m49617_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2167  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m49619_gshared (Enumerator_t7667 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m49619(__this, method) (( DictionaryEntry_t2167  (*) (Enumerator_t7667 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m49619_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m49621_gshared (Enumerator_t7667 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m49621(__this, method) (( Object_t * (*) (Enumerator_t7667 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m49621_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m49623_gshared (Enumerator_t7667 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m49623(__this, method) (( Object_t * (*) (Enumerator_t7667 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m49623_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::MoveNext()
extern "C" bool Enumerator_MoveNext_m49625_gshared (Enumerator_t7667 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m49625(__this, method) (( bool (*) (Enumerator_t7667 *, const MethodInfo*))Enumerator_MoveNext_m49625_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::get_Current()
extern "C" KeyValuePair_2_t7590  Enumerator_get_Current_m49627_gshared (Enumerator_t7667 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m49627(__this, method) (( KeyValuePair_2_t7590  (*) (Enumerator_t7667 *, const MethodInfo*))Enumerator_get_Current_m49627_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m49629_gshared (Enumerator_t7667 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m49629(__this, method) (( Object_t * (*) (Enumerator_t7667 *, const MethodInfo*))Enumerator_get_CurrentKey_m49629_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::get_CurrentValue()
extern "C" double Enumerator_get_CurrentValue_m49631_gshared (Enumerator_t7667 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m49631(__this, method) (( double (*) (Enumerator_t7667 *, const MethodInfo*))Enumerator_get_CurrentValue_m49631_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::Reset()
extern "C" void Enumerator_Reset_m49633_gshared (Enumerator_t7667 * __this, const MethodInfo* method);
#define Enumerator_Reset_m49633(__this, method) (( void (*) (Enumerator_t7667 *, const MethodInfo*))Enumerator_Reset_m49633_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::VerifyState()
extern "C" void Enumerator_VerifyState_m49635_gshared (Enumerator_t7667 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m49635(__this, method) (( void (*) (Enumerator_t7667 *, const MethodInfo*))Enumerator_VerifyState_m49635_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m49637_gshared (Enumerator_t7667 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m49637(__this, method) (( void (*) (Enumerator_t7667 *, const MethodInfo*))Enumerator_VerifyCurrent_m49637_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::Dispose()
extern "C" void Enumerator_Dispose_m49639_gshared (Enumerator_t7667 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m49639(__this, method) (( void (*) (Enumerator_t7667 *, const MethodInfo*))Enumerator_Dispose_m49639_gshared)(__this, method)
