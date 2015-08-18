#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>
struct Enumerator_t7083;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Double>
struct Dictionary_2_t7080;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_54.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m44823_gshared (Enumerator_t7083 * __this, Dictionary_2_t7080 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m44823(__this, ___dictionary, method) (( void (*) (Enumerator_t7083 *, Dictionary_2_t7080 *, const MethodInfo*))Enumerator__ctor_m44823_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m44825_gshared (Enumerator_t7083 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m44825(__this, method) (( Object_t * (*) (Enumerator_t7083 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m44825_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m44827_gshared (Enumerator_t7083 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m44827(__this, method) (( void (*) (Enumerator_t7083 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m44827_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2139  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m44829_gshared (Enumerator_t7083 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m44829(__this, method) (( DictionaryEntry_t2139  (*) (Enumerator_t7083 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m44829_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m44831_gshared (Enumerator_t7083 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m44831(__this, method) (( Object_t * (*) (Enumerator_t7083 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m44831_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m44833_gshared (Enumerator_t7083 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m44833(__this, method) (( Object_t * (*) (Enumerator_t7083 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m44833_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::MoveNext()
extern "C" bool Enumerator_MoveNext_m44835_gshared (Enumerator_t7083 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m44835(__this, method) (( bool (*) (Enumerator_t7083 *, const MethodInfo*))Enumerator_MoveNext_m44835_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::get_Current()
extern "C" KeyValuePair_2_t7006  Enumerator_get_Current_m44837_gshared (Enumerator_t7083 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m44837(__this, method) (( KeyValuePair_2_t7006  (*) (Enumerator_t7083 *, const MethodInfo*))Enumerator_get_Current_m44837_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m44839_gshared (Enumerator_t7083 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m44839(__this, method) (( Object_t * (*) (Enumerator_t7083 *, const MethodInfo*))Enumerator_get_CurrentKey_m44839_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::get_CurrentValue()
extern "C" double Enumerator_get_CurrentValue_m44841_gshared (Enumerator_t7083 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m44841(__this, method) (( double (*) (Enumerator_t7083 *, const MethodInfo*))Enumerator_get_CurrentValue_m44841_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::Reset()
extern "C" void Enumerator_Reset_m44843_gshared (Enumerator_t7083 * __this, const MethodInfo* method);
#define Enumerator_Reset_m44843(__this, method) (( void (*) (Enumerator_t7083 *, const MethodInfo*))Enumerator_Reset_m44843_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::VerifyState()
extern "C" void Enumerator_VerifyState_m44845_gshared (Enumerator_t7083 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m44845(__this, method) (( void (*) (Enumerator_t7083 *, const MethodInfo*))Enumerator_VerifyState_m44845_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m44847_gshared (Enumerator_t7083 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m44847(__this, method) (( void (*) (Enumerator_t7083 *, const MethodInfo*))Enumerator_VerifyCurrent_m44847_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::Dispose()
extern "C" void Enumerator_Dispose_m44849_gshared (Enumerator_t7083 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m44849(__this, method) (( void (*) (Enumerator_t7083 *, const MethodInfo*))Enumerator_Dispose_m44849_gshared)(__this, method)
