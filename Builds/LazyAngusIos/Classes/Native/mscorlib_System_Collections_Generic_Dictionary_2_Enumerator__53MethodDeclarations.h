#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>
struct Enumerator_t7027;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>
struct Dictionary_2_t7024;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_54.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m44430_gshared (Enumerator_t7027 * __this, Dictionary_2_t7024 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m44430(__this, ___dictionary, method) (( void (*) (Enumerator_t7027 *, Dictionary_2_t7024 *, const MethodInfo*))Enumerator__ctor_m44430_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m44432_gshared (Enumerator_t7027 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m44432(__this, method) (( Object_t * (*) (Enumerator_t7027 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m44432_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m44434_gshared (Enumerator_t7027 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m44434(__this, method) (( void (*) (Enumerator_t7027 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m44434_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2079  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m44436_gshared (Enumerator_t7027 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m44436(__this, method) (( DictionaryEntry_t2079  (*) (Enumerator_t7027 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m44436_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m44438_gshared (Enumerator_t7027 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m44438(__this, method) (( Object_t * (*) (Enumerator_t7027 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m44438_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m44440_gshared (Enumerator_t7027 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m44440(__this, method) (( Object_t * (*) (Enumerator_t7027 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m44440_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::MoveNext()
extern "C" bool Enumerator_MoveNext_m44442_gshared (Enumerator_t7027 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m44442(__this, method) (( bool (*) (Enumerator_t7027 *, const MethodInfo*))Enumerator_MoveNext_m44442_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::get_Current()
extern "C" KeyValuePair_2_t6935  Enumerator_get_Current_m44444_gshared (Enumerator_t7027 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m44444(__this, method) (( KeyValuePair_2_t6935  (*) (Enumerator_t7027 *, const MethodInfo*))Enumerator_get_Current_m44444_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m44446_gshared (Enumerator_t7027 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m44446(__this, method) (( Object_t * (*) (Enumerator_t7027 *, const MethodInfo*))Enumerator_get_CurrentKey_m44446_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::get_CurrentValue()
extern "C" DateTime_t287  Enumerator_get_CurrentValue_m44448_gshared (Enumerator_t7027 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m44448(__this, method) (( DateTime_t287  (*) (Enumerator_t7027 *, const MethodInfo*))Enumerator_get_CurrentValue_m44448_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::Reset()
extern "C" void Enumerator_Reset_m44450_gshared (Enumerator_t7027 * __this, const MethodInfo* method);
#define Enumerator_Reset_m44450(__this, method) (( void (*) (Enumerator_t7027 *, const MethodInfo*))Enumerator_Reset_m44450_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::VerifyState()
extern "C" void Enumerator_VerifyState_m44452_gshared (Enumerator_t7027 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m44452(__this, method) (( void (*) (Enumerator_t7027 *, const MethodInfo*))Enumerator_VerifyState_m44452_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m44454_gshared (Enumerator_t7027 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m44454(__this, method) (( void (*) (Enumerator_t7027 *, const MethodInfo*))Enumerator_VerifyCurrent_m44454_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::Dispose()
extern "C" void Enumerator_Dispose_m44456_gshared (Enumerator_t7027 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m44456(__this, method) (( void (*) (Enumerator_t7027 *, const MethodInfo*))Enumerator_Dispose_m44456_gshared)(__this, method)
