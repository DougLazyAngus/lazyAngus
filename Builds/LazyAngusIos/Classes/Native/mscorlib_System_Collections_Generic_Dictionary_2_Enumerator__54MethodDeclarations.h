#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>
struct Enumerator_t7686;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>
struct Dictionary_2_t7683;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_55.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m49909_gshared (Enumerator_t7686 * __this, Dictionary_2_t7683 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m49909(__this, ___dictionary, method) (( void (*) (Enumerator_t7686 *, Dictionary_2_t7683 *, const MethodInfo*))Enumerator__ctor_m49909_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m49911_gshared (Enumerator_t7686 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m49911(__this, method) (( Object_t * (*) (Enumerator_t7686 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m49911_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m49913_gshared (Enumerator_t7686 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m49913(__this, method) (( void (*) (Enumerator_t7686 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m49913_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2160  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m49915_gshared (Enumerator_t7686 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m49915(__this, method) (( DictionaryEntry_t2160  (*) (Enumerator_t7686 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m49915_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m49917_gshared (Enumerator_t7686 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m49917(__this, method) (( Object_t * (*) (Enumerator_t7686 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m49917_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m49919_gshared (Enumerator_t7686 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m49919(__this, method) (( Object_t * (*) (Enumerator_t7686 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m49919_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::MoveNext()
extern "C" bool Enumerator_MoveNext_m49921_gshared (Enumerator_t7686 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m49921(__this, method) (( bool (*) (Enumerator_t7686 *, const MethodInfo*))Enumerator_MoveNext_m49921_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::get_Current()
extern "C" KeyValuePair_2_t7594  Enumerator_get_Current_m49923_gshared (Enumerator_t7686 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m49923(__this, method) (( KeyValuePair_2_t7594  (*) (Enumerator_t7686 *, const MethodInfo*))Enumerator_get_Current_m49923_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m49925_gshared (Enumerator_t7686 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m49925(__this, method) (( Object_t * (*) (Enumerator_t7686 *, const MethodInfo*))Enumerator_get_CurrentKey_m49925_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::get_CurrentValue()
extern "C" DateTime_t287  Enumerator_get_CurrentValue_m49927_gshared (Enumerator_t7686 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m49927(__this, method) (( DateTime_t287  (*) (Enumerator_t7686 *, const MethodInfo*))Enumerator_get_CurrentValue_m49927_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::Reset()
extern "C" void Enumerator_Reset_m49929_gshared (Enumerator_t7686 * __this, const MethodInfo* method);
#define Enumerator_Reset_m49929(__this, method) (( void (*) (Enumerator_t7686 *, const MethodInfo*))Enumerator_Reset_m49929_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::VerifyState()
extern "C" void Enumerator_VerifyState_m49931_gshared (Enumerator_t7686 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m49931(__this, method) (( void (*) (Enumerator_t7686 *, const MethodInfo*))Enumerator_VerifyState_m49931_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m49933_gshared (Enumerator_t7686 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m49933(__this, method) (( void (*) (Enumerator_t7686 *, const MethodInfo*))Enumerator_VerifyCurrent_m49933_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::Dispose()
extern "C" void Enumerator_Dispose_m49935_gshared (Enumerator_t7686 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m49935(__this, method) (( void (*) (Enumerator_t7686 *, const MethodInfo*))Enumerator_Dispose_m49935_gshared)(__this, method)
