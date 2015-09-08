#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
struct Enumerator_t9021;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t9018;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_75.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m65894_gshared (Enumerator_t9021 * __this, Dictionary_2_t9018 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m65894(__this, ___dictionary, method) (( void (*) (Enumerator_t9021 *, Dictionary_2_t9018 *, const MethodInfo*))Enumerator__ctor_m65894_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m65895_gshared (Enumerator_t9021 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m65895(__this, method) (( Object_t * (*) (Enumerator_t9021 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m65895_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m65896_gshared (Enumerator_t9021 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m65896(__this, method) (( void (*) (Enumerator_t9021 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m65896_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2157  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m65897_gshared (Enumerator_t9021 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m65897(__this, method) (( DictionaryEntry_t2157  (*) (Enumerator_t9021 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m65897_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m65898_gshared (Enumerator_t9021 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m65898(__this, method) (( Object_t * (*) (Enumerator_t9021 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m65898_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m65899_gshared (Enumerator_t9021 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m65899(__this, method) (( Object_t * (*) (Enumerator_t9021 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m65899_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool Enumerator_MoveNext_m65900_gshared (Enumerator_t9021 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m65900(__this, method) (( bool (*) (Enumerator_t9021 *, const MethodInfo*))Enumerator_MoveNext_m65900_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_Current()
extern "C" KeyValuePair_2_t7815  Enumerator_get_Current_m65901_gshared (Enumerator_t9021 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m65901(__this, method) (( KeyValuePair_2_t7815  (*) (Enumerator_t9021 *, const MethodInfo*))Enumerator_get_Current_m65901_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m65902_gshared (Enumerator_t9021 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m65902(__this, method) (( Object_t * (*) (Enumerator_t9021 *, const MethodInfo*))Enumerator_get_CurrentKey_m65902_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentValue()
extern "C" int64_t Enumerator_get_CurrentValue_m65903_gshared (Enumerator_t9021 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m65903(__this, method) (( int64_t (*) (Enumerator_t9021 *, const MethodInfo*))Enumerator_get_CurrentValue_m65903_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::Reset()
extern "C" void Enumerator_Reset_m65904_gshared (Enumerator_t9021 * __this, const MethodInfo* method);
#define Enumerator_Reset_m65904(__this, method) (( void (*) (Enumerator_t9021 *, const MethodInfo*))Enumerator_Reset_m65904_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyState()
extern "C" void Enumerator_VerifyState_m65905_gshared (Enumerator_t9021 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m65905(__this, method) (( void (*) (Enumerator_t9021 *, const MethodInfo*))Enumerator_VerifyState_m65905_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m65906_gshared (Enumerator_t9021 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m65906(__this, method) (( void (*) (Enumerator_t9021 *, const MethodInfo*))Enumerator_VerifyCurrent_m65906_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::Dispose()
extern "C" void Enumerator_Dispose_m65907_gshared (Enumerator_t9021 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m65907(__this, method) (( void (*) (Enumerator_t9021 *, const MethodInfo*))Enumerator_Dispose_m65907_gshared)(__this, method)
