#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>
struct Enumerator_t7681;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>
struct Dictionary_2_t7678;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_55.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m49897_gshared (Enumerator_t7681 * __this, Dictionary_2_t7678 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m49897(__this, ___dictionary, method) (( void (*) (Enumerator_t7681 *, Dictionary_2_t7678 *, const MethodInfo*))Enumerator__ctor_m49897_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m49899_gshared (Enumerator_t7681 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m49899(__this, method) (( Object_t * (*) (Enumerator_t7681 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m49899_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m49901_gshared (Enumerator_t7681 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m49901(__this, method) (( void (*) (Enumerator_t7681 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m49901_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2157  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m49903_gshared (Enumerator_t7681 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m49903(__this, method) (( DictionaryEntry_t2157  (*) (Enumerator_t7681 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m49903_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m49905_gshared (Enumerator_t7681 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m49905(__this, method) (( Object_t * (*) (Enumerator_t7681 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m49905_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m49907_gshared (Enumerator_t7681 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m49907(__this, method) (( Object_t * (*) (Enumerator_t7681 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m49907_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::MoveNext()
extern "C" bool Enumerator_MoveNext_m49909_gshared (Enumerator_t7681 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m49909(__this, method) (( bool (*) (Enumerator_t7681 *, const MethodInfo*))Enumerator_MoveNext_m49909_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::get_Current()
extern "C" KeyValuePair_2_t7589  Enumerator_get_Current_m49911_gshared (Enumerator_t7681 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m49911(__this, method) (( KeyValuePair_2_t7589  (*) (Enumerator_t7681 *, const MethodInfo*))Enumerator_get_Current_m49911_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m49913_gshared (Enumerator_t7681 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m49913(__this, method) (( Object_t * (*) (Enumerator_t7681 *, const MethodInfo*))Enumerator_get_CurrentKey_m49913_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::get_CurrentValue()
extern "C" DateTime_t287  Enumerator_get_CurrentValue_m49915_gshared (Enumerator_t7681 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m49915(__this, method) (( DateTime_t287  (*) (Enumerator_t7681 *, const MethodInfo*))Enumerator_get_CurrentValue_m49915_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::Reset()
extern "C" void Enumerator_Reset_m49917_gshared (Enumerator_t7681 * __this, const MethodInfo* method);
#define Enumerator_Reset_m49917(__this, method) (( void (*) (Enumerator_t7681 *, const MethodInfo*))Enumerator_Reset_m49917_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::VerifyState()
extern "C" void Enumerator_VerifyState_m49919_gshared (Enumerator_t7681 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m49919(__this, method) (( void (*) (Enumerator_t7681 *, const MethodInfo*))Enumerator_VerifyState_m49919_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m49921_gshared (Enumerator_t7681 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m49921(__this, method) (( void (*) (Enumerator_t7681 *, const MethodInfo*))Enumerator_VerifyCurrent_m49921_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::Dispose()
extern "C" void Enumerator_Dispose_m49923_gshared (Enumerator_t7681 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m49923(__this, method) (( void (*) (Enumerator_t7681 *, const MethodInfo*))Enumerator_Dispose_m49923_gshared)(__this, method)
