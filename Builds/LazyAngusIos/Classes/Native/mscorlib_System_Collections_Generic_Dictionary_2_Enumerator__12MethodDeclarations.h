#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
struct Enumerator_t5347;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2794;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_18.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m20928_gshared (Enumerator_t5347 * __this, Dictionary_2_t2794 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m20928(__this, ___dictionary, method) (( void (*) (Enumerator_t5347 *, Dictionary_2_t2794 *, const MethodInfo*))Enumerator__ctor_m20928_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m20929_gshared (Enumerator_t5347 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m20929(__this, method) (( Object_t * (*) (Enumerator_t5347 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m20929_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m20930_gshared (Enumerator_t5347 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m20930(__this, method) (( void (*) (Enumerator_t5347 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m20930_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2079  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m20931_gshared (Enumerator_t5347 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m20931(__this, method) (( DictionaryEntry_t2079  (*) (Enumerator_t5347 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m20931_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m20932_gshared (Enumerator_t5347 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m20932(__this, method) (( Object_t * (*) (Enumerator_t5347 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m20932_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m20933_gshared (Enumerator_t5347 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m20933(__this, method) (( Object_t * (*) (Enumerator_t5347 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m20933_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m20934_gshared (Enumerator_t5347 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m20934(__this, method) (( bool (*) (Enumerator_t5347 *, const MethodInfo*))Enumerator_MoveNext_m20934_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" KeyValuePair_2_t5339  Enumerator_get_Current_m20935_gshared (Enumerator_t5347 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m20935(__this, method) (( KeyValuePair_2_t5339  (*) (Enumerator_t5347 *, const MethodInfo*))Enumerator_get_Current_m20935_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m20936_gshared (Enumerator_t5347 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m20936(__this, method) (( int32_t (*) (Enumerator_t5347 *, const MethodInfo*))Enumerator_get_CurrentKey_m20936_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m20937_gshared (Enumerator_t5347 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m20937(__this, method) (( Object_t * (*) (Enumerator_t5347 *, const MethodInfo*))Enumerator_get_CurrentValue_m20937_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Reset()
extern "C" void Enumerator_Reset_m20938_gshared (Enumerator_t5347 * __this, const MethodInfo* method);
#define Enumerator_Reset_m20938(__this, method) (( void (*) (Enumerator_t5347 *, const MethodInfo*))Enumerator_Reset_m20938_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m20939_gshared (Enumerator_t5347 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m20939(__this, method) (( void (*) (Enumerator_t5347 *, const MethodInfo*))Enumerator_VerifyState_m20939_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m20940_gshared (Enumerator_t5347 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m20940(__this, method) (( void (*) (Enumerator_t5347 *, const MethodInfo*))Enumerator_VerifyCurrent_m20940_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m20941_gshared (Enumerator_t5347 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m20941(__this, method) (( void (*) (Enumerator_t5347 *, const MethodInfo*))Enumerator_Dispose_m20941_gshared)(__this, method)
