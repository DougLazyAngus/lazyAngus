#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>
struct Enumerator_t7013;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Double>
struct Dictionary_2_t7010;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_53.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m44157_gshared (Enumerator_t7013 * __this, Dictionary_2_t7010 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m44157(__this, ___dictionary, method) (( void (*) (Enumerator_t7013 *, Dictionary_2_t7010 *, const MethodInfo*))Enumerator__ctor_m44157_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m44159_gshared (Enumerator_t7013 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m44159(__this, method) (( Object_t * (*) (Enumerator_t7013 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m44159_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m44161_gshared (Enumerator_t7013 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m44161(__this, method) (( void (*) (Enumerator_t7013 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m44161_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2090  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m44163_gshared (Enumerator_t7013 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m44163(__this, method) (( DictionaryEntry_t2090  (*) (Enumerator_t7013 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m44163_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m44165_gshared (Enumerator_t7013 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m44165(__this, method) (( Object_t * (*) (Enumerator_t7013 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m44165_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m44167_gshared (Enumerator_t7013 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m44167(__this, method) (( Object_t * (*) (Enumerator_t7013 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m44167_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::MoveNext()
extern "C" bool Enumerator_MoveNext_m44169_gshared (Enumerator_t7013 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m44169(__this, method) (( bool (*) (Enumerator_t7013 *, const MethodInfo*))Enumerator_MoveNext_m44169_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::get_Current()
extern "C" KeyValuePair_2_t6936  Enumerator_get_Current_m44171_gshared (Enumerator_t7013 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m44171(__this, method) (( KeyValuePair_2_t6936  (*) (Enumerator_t7013 *, const MethodInfo*))Enumerator_get_Current_m44171_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m44173_gshared (Enumerator_t7013 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m44173(__this, method) (( Object_t * (*) (Enumerator_t7013 *, const MethodInfo*))Enumerator_get_CurrentKey_m44173_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::get_CurrentValue()
extern "C" double Enumerator_get_CurrentValue_m44175_gshared (Enumerator_t7013 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m44175(__this, method) (( double (*) (Enumerator_t7013 *, const MethodInfo*))Enumerator_get_CurrentValue_m44175_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::Reset()
extern "C" void Enumerator_Reset_m44177_gshared (Enumerator_t7013 * __this, const MethodInfo* method);
#define Enumerator_Reset_m44177(__this, method) (( void (*) (Enumerator_t7013 *, const MethodInfo*))Enumerator_Reset_m44177_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::VerifyState()
extern "C" void Enumerator_VerifyState_m44179_gshared (Enumerator_t7013 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m44179(__this, method) (( void (*) (Enumerator_t7013 *, const MethodInfo*))Enumerator_VerifyState_m44179_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m44181_gshared (Enumerator_t7013 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m44181(__this, method) (( void (*) (Enumerator_t7013 *, const MethodInfo*))Enumerator_VerifyCurrent_m44181_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::Dispose()
extern "C" void Enumerator_Dispose_m44183_gshared (Enumerator_t7013 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m44183(__this, method) (( void (*) (Enumerator_t7013 *, const MethodInfo*))Enumerator_Dispose_m44183_gshared)(__this, method)
