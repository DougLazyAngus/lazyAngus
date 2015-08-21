#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>
struct Enumerator_t7113;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>
struct Dictionary_2_t7110;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_55.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m45266_gshared (Enumerator_t7113 * __this, Dictionary_2_t7110 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m45266(__this, ___dictionary, method) (( void (*) (Enumerator_t7113 *, Dictionary_2_t7110 *, const MethodInfo*))Enumerator__ctor_m45266_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m45268_gshared (Enumerator_t7113 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m45268(__this, method) (( Object_t * (*) (Enumerator_t7113 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m45268_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m45270_gshared (Enumerator_t7113 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m45270(__this, method) (( void (*) (Enumerator_t7113 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m45270_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2137  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m45272_gshared (Enumerator_t7113 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m45272(__this, method) (( DictionaryEntry_t2137  (*) (Enumerator_t7113 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m45272_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m45274_gshared (Enumerator_t7113 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m45274(__this, method) (( Object_t * (*) (Enumerator_t7113 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m45274_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m45276_gshared (Enumerator_t7113 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m45276(__this, method) (( Object_t * (*) (Enumerator_t7113 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m45276_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::MoveNext()
extern "C" bool Enumerator_MoveNext_m45278_gshared (Enumerator_t7113 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m45278(__this, method) (( bool (*) (Enumerator_t7113 *, const MethodInfo*))Enumerator_MoveNext_m45278_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::get_Current()
extern "C" KeyValuePair_2_t7021  Enumerator_get_Current_m45280_gshared (Enumerator_t7113 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m45280(__this, method) (( KeyValuePair_2_t7021  (*) (Enumerator_t7113 *, const MethodInfo*))Enumerator_get_Current_m45280_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m45282_gshared (Enumerator_t7113 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m45282(__this, method) (( Object_t * (*) (Enumerator_t7113 *, const MethodInfo*))Enumerator_get_CurrentKey_m45282_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::get_CurrentValue()
extern "C" DateTime_t287  Enumerator_get_CurrentValue_m45284_gshared (Enumerator_t7113 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m45284(__this, method) (( DateTime_t287  (*) (Enumerator_t7113 *, const MethodInfo*))Enumerator_get_CurrentValue_m45284_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::Reset()
extern "C" void Enumerator_Reset_m45286_gshared (Enumerator_t7113 * __this, const MethodInfo* method);
#define Enumerator_Reset_m45286(__this, method) (( void (*) (Enumerator_t7113 *, const MethodInfo*))Enumerator_Reset_m45286_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::VerifyState()
extern "C" void Enumerator_VerifyState_m45288_gshared (Enumerator_t7113 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m45288(__this, method) (( void (*) (Enumerator_t7113 *, const MethodInfo*))Enumerator_VerifyState_m45288_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m45290_gshared (Enumerator_t7113 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m45290(__this, method) (( void (*) (Enumerator_t7113 *, const MethodInfo*))Enumerator_VerifyCurrent_m45290_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::Dispose()
extern "C" void Enumerator_Dispose_m45292_gshared (Enumerator_t7113 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m45292(__this, method) (( void (*) (Enumerator_t7113 *, const MethodInfo*))Enumerator_Dispose_m45292_gshared)(__this, method)
