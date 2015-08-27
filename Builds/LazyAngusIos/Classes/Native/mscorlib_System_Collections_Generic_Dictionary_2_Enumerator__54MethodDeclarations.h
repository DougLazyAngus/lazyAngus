#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>
struct Enumerator_t7116;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>
struct Dictionary_2_t7113;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_55.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m45298_gshared (Enumerator_t7116 * __this, Dictionary_2_t7113 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m45298(__this, ___dictionary, method) (( void (*) (Enumerator_t7116 *, Dictionary_2_t7113 *, const MethodInfo*))Enumerator__ctor_m45298_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m45300_gshared (Enumerator_t7116 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m45300(__this, method) (( Object_t * (*) (Enumerator_t7116 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m45300_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m45302_gshared (Enumerator_t7116 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m45302(__this, method) (( void (*) (Enumerator_t7116 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m45302_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2140  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m45304_gshared (Enumerator_t7116 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m45304(__this, method) (( DictionaryEntry_t2140  (*) (Enumerator_t7116 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m45304_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m45306_gshared (Enumerator_t7116 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m45306(__this, method) (( Object_t * (*) (Enumerator_t7116 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m45306_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m45308_gshared (Enumerator_t7116 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m45308(__this, method) (( Object_t * (*) (Enumerator_t7116 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m45308_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::MoveNext()
extern "C" bool Enumerator_MoveNext_m45310_gshared (Enumerator_t7116 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m45310(__this, method) (( bool (*) (Enumerator_t7116 *, const MethodInfo*))Enumerator_MoveNext_m45310_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::get_Current()
extern "C" KeyValuePair_2_t7024  Enumerator_get_Current_m45312_gshared (Enumerator_t7116 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m45312(__this, method) (( KeyValuePair_2_t7024  (*) (Enumerator_t7116 *, const MethodInfo*))Enumerator_get_Current_m45312_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m45314_gshared (Enumerator_t7116 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m45314(__this, method) (( Object_t * (*) (Enumerator_t7116 *, const MethodInfo*))Enumerator_get_CurrentKey_m45314_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::get_CurrentValue()
extern "C" DateTime_t287  Enumerator_get_CurrentValue_m45316_gshared (Enumerator_t7116 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m45316(__this, method) (( DateTime_t287  (*) (Enumerator_t7116 *, const MethodInfo*))Enumerator_get_CurrentValue_m45316_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::Reset()
extern "C" void Enumerator_Reset_m45318_gshared (Enumerator_t7116 * __this, const MethodInfo* method);
#define Enumerator_Reset_m45318(__this, method) (( void (*) (Enumerator_t7116 *, const MethodInfo*))Enumerator_Reset_m45318_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::VerifyState()
extern "C" void Enumerator_VerifyState_m45320_gshared (Enumerator_t7116 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m45320(__this, method) (( void (*) (Enumerator_t7116 *, const MethodInfo*))Enumerator_VerifyState_m45320_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m45322_gshared (Enumerator_t7116 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m45322(__this, method) (( void (*) (Enumerator_t7116 *, const MethodInfo*))Enumerator_VerifyCurrent_m45322_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::Dispose()
extern "C" void Enumerator_Dispose_m45324_gshared (Enumerator_t7116 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m45324(__this, method) (( void (*) (Enumerator_t7116 *, const MethodInfo*))Enumerator_Dispose_m45324_gshared)(__this, method)
