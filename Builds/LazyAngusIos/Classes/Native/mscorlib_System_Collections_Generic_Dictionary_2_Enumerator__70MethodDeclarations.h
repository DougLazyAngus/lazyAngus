#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Enumerator_t9098;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t9095;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_136.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m66990_gshared (Enumerator_t9098 * __this, Dictionary_2_t9095 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m66990(__this, ___dictionary, method) (( void (*) (Enumerator_t9098 *, Dictionary_2_t9095 *, const MethodInfo*))Enumerator__ctor_m66990_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m66991_gshared (Enumerator_t9098 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m66991(__this, method) (( Object_t * (*) (Enumerator_t9098 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m66991_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m66992_gshared (Enumerator_t9098 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m66992(__this, method) (( void (*) (Enumerator_t9098 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m66992_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2160  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m66993_gshared (Enumerator_t9098 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m66993(__this, method) (( DictionaryEntry_t2160  (*) (Enumerator_t9098 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m66993_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m66994_gshared (Enumerator_t9098 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m66994(__this, method) (( Object_t * (*) (Enumerator_t9098 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m66994_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m66995_gshared (Enumerator_t9098 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m66995(__this, method) (( Object_t * (*) (Enumerator_t9098 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m66995_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool Enumerator_MoveNext_m66996_gshared (Enumerator_t9098 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m66996(__this, method) (( bool (*) (Enumerator_t9098 *, const MethodInfo*))Enumerator_MoveNext_m66996_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t9071  Enumerator_get_Current_m66997_gshared (Enumerator_t9098 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m66997(__this, method) (( KeyValuePair_2_t9071  (*) (Enumerator_t9098 *, const MethodInfo*))Enumerator_get_Current_m66997_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m66998_gshared (Enumerator_t9098 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m66998(__this, method) (( Object_t * (*) (Enumerator_t9098 *, const MethodInfo*))Enumerator_get_CurrentKey_m66998_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentValue()
extern "C" KeyValuePair_2_t70  Enumerator_get_CurrentValue_m66999_gshared (Enumerator_t9098 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m66999(__this, method) (( KeyValuePair_2_t70  (*) (Enumerator_t9098 *, const MethodInfo*))Enumerator_get_CurrentValue_m66999_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Reset()
extern "C" void Enumerator_Reset_m67000_gshared (Enumerator_t9098 * __this, const MethodInfo* method);
#define Enumerator_Reset_m67000(__this, method) (( void (*) (Enumerator_t9098 *, const MethodInfo*))Enumerator_Reset_m67000_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyState()
extern "C" void Enumerator_VerifyState_m67001_gshared (Enumerator_t9098 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m67001(__this, method) (( void (*) (Enumerator_t9098 *, const MethodInfo*))Enumerator_VerifyState_m67001_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m67002_gshared (Enumerator_t9098 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m67002(__this, method) (( void (*) (Enumerator_t9098 *, const MethodInfo*))Enumerator_VerifyCurrent_m67002_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void Enumerator_Dispose_m67003_gshared (Enumerator_t9098 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m67003(__this, method) (( void (*) (Enumerator_t9098 *, const MethodInfo*))Enumerator_Dispose_m67003_gshared)(__this, method)
