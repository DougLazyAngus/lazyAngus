#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_t5993;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1504;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m26268_gshared (Enumerator_t5993 * __this, Dictionary_2_t1504 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m26268(__this, ___dictionary, method) (( void (*) (Enumerator_t5993 *, Dictionary_2_t1504 *, const MethodInfo*))Enumerator__ctor_m26268_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m26269_gshared (Enumerator_t5993 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m26269(__this, method) (( Object_t * (*) (Enumerator_t5993 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m26269_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m26270_gshared (Enumerator_t5993 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m26270(__this, method) (( void (*) (Enumerator_t5993 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m26270_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2156  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m26271_gshared (Enumerator_t5993 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m26271(__this, method) (( DictionaryEntry_t2156  (*) (Enumerator_t5993 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m26271_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m26272_gshared (Enumerator_t5993 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m26272(__this, method) (( Object_t * (*) (Enumerator_t5993 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m26272_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m26273_gshared (Enumerator_t5993 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m26273(__this, method) (( Object_t * (*) (Enumerator_t5993 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m26273_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m26274_gshared (Enumerator_t5993 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m26274(__this, method) (( bool (*) (Enumerator_t5993 *, const MethodInfo*))Enumerator_MoveNext_m26274_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern "C" KeyValuePair_2_t70  Enumerator_get_Current_m26275_gshared (Enumerator_t5993 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m26275(__this, method) (( KeyValuePair_2_t70  (*) (Enumerator_t5993 *, const MethodInfo*))Enumerator_get_Current_m26275_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m26276_gshared (Enumerator_t5993 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m26276(__this, method) (( Object_t * (*) (Enumerator_t5993 *, const MethodInfo*))Enumerator_get_CurrentKey_m26276_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m26277_gshared (Enumerator_t5993 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m26277(__this, method) (( Object_t * (*) (Enumerator_t5993 *, const MethodInfo*))Enumerator_get_CurrentValue_m26277_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Reset()
extern "C" void Enumerator_Reset_m26278_gshared (Enumerator_t5993 * __this, const MethodInfo* method);
#define Enumerator_Reset_m26278(__this, method) (( void (*) (Enumerator_t5993 *, const MethodInfo*))Enumerator_Reset_m26278_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m26279_gshared (Enumerator_t5993 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m26279(__this, method) (( void (*) (Enumerator_t5993 *, const MethodInfo*))Enumerator_VerifyState_m26279_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m26280_gshared (Enumerator_t5993 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m26280(__this, method) (( void (*) (Enumerator_t5993 *, const MethodInfo*))Enumerator_VerifyCurrent_m26280_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m26281_gshared (Enumerator_t5993 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m26281(__this, method) (( void (*) (Enumerator_t5993 *, const MethodInfo*))Enumerator_Dispose_m26281_gshared)(__this, method)
