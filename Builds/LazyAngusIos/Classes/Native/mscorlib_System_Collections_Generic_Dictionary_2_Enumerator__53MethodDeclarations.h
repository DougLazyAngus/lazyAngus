#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>
struct Enumerator_t7038;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>
struct Dictionary_2_t7035;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_54.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m44500_gshared (Enumerator_t7038 * __this, Dictionary_2_t7035 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m44500(__this, ___dictionary, method) (( void (*) (Enumerator_t7038 *, Dictionary_2_t7035 *, const MethodInfo*))Enumerator__ctor_m44500_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m44502_gshared (Enumerator_t7038 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m44502(__this, method) (( Object_t * (*) (Enumerator_t7038 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m44502_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m44504_gshared (Enumerator_t7038 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m44504(__this, method) (( void (*) (Enumerator_t7038 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m44504_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2089  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m44506_gshared (Enumerator_t7038 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m44506(__this, method) (( DictionaryEntry_t2089  (*) (Enumerator_t7038 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m44506_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m44508_gshared (Enumerator_t7038 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m44508(__this, method) (( Object_t * (*) (Enumerator_t7038 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m44508_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m44510_gshared (Enumerator_t7038 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m44510(__this, method) (( Object_t * (*) (Enumerator_t7038 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m44510_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::MoveNext()
extern "C" bool Enumerator_MoveNext_m44512_gshared (Enumerator_t7038 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m44512(__this, method) (( bool (*) (Enumerator_t7038 *, const MethodInfo*))Enumerator_MoveNext_m44512_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::get_Current()
extern "C" KeyValuePair_2_t6946  Enumerator_get_Current_m44514_gshared (Enumerator_t7038 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m44514(__this, method) (( KeyValuePair_2_t6946  (*) (Enumerator_t7038 *, const MethodInfo*))Enumerator_get_Current_m44514_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m44516_gshared (Enumerator_t7038 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m44516(__this, method) (( Object_t * (*) (Enumerator_t7038 *, const MethodInfo*))Enumerator_get_CurrentKey_m44516_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::get_CurrentValue()
extern "C" DateTime_t287  Enumerator_get_CurrentValue_m44518_gshared (Enumerator_t7038 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m44518(__this, method) (( DateTime_t287  (*) (Enumerator_t7038 *, const MethodInfo*))Enumerator_get_CurrentValue_m44518_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::Reset()
extern "C" void Enumerator_Reset_m44520_gshared (Enumerator_t7038 * __this, const MethodInfo* method);
#define Enumerator_Reset_m44520(__this, method) (( void (*) (Enumerator_t7038 *, const MethodInfo*))Enumerator_Reset_m44520_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::VerifyState()
extern "C" void Enumerator_VerifyState_m44522_gshared (Enumerator_t7038 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m44522(__this, method) (( void (*) (Enumerator_t7038 *, const MethodInfo*))Enumerator_VerifyState_m44522_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m44524_gshared (Enumerator_t7038 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m44524(__this, method) (( void (*) (Enumerator_t7038 *, const MethodInfo*))Enumerator_VerifyCurrent_m44524_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::Dispose()
extern "C" void Enumerator_Dispose_m44526_gshared (Enumerator_t7038 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m44526(__this, method) (( void (*) (Enumerator_t7038 *, const MethodInfo*))Enumerator_Dispose_m44526_gshared)(__this, method)
