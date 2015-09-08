#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
struct Enumerator_t6783;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t6780;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_45.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m38260_gshared (Enumerator_t6783 * __this, Dictionary_2_t6780 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m38260(__this, ___dictionary, method) (( void (*) (Enumerator_t6783 *, Dictionary_2_t6780 *, const MethodInfo*))Enumerator__ctor_m38260_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m38261_gshared (Enumerator_t6783 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m38261(__this, method) (( Object_t * (*) (Enumerator_t6783 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m38261_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m38262_gshared (Enumerator_t6783 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m38262(__this, method) (( void (*) (Enumerator_t6783 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m38262_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2160  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m38263_gshared (Enumerator_t6783 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m38263(__this, method) (( DictionaryEntry_t2160  (*) (Enumerator_t6783 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m38263_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m38264_gshared (Enumerator_t6783 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m38264(__this, method) (( Object_t * (*) (Enumerator_t6783 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m38264_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m38265_gshared (Enumerator_t6783 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m38265(__this, method) (( Object_t * (*) (Enumerator_t6783 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m38265_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool Enumerator_MoveNext_m38266_gshared (Enumerator_t6783 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m38266(__this, method) (( bool (*) (Enumerator_t6783 *, const MethodInfo*))Enumerator_MoveNext_m38266_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_Current()
extern "C" KeyValuePair_2_t6757  Enumerator_get_Current_m38267_gshared (Enumerator_t6783 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m38267(__this, method) (( KeyValuePair_2_t6757  (*) (Enumerator_t6783 *, const MethodInfo*))Enumerator_get_Current_m38267_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m38268_gshared (Enumerator_t6783 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m38268(__this, method) (( Object_t * (*) (Enumerator_t6783 *, const MethodInfo*))Enumerator_get_CurrentKey_m38268_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentValue()
extern "C" uint8_t Enumerator_get_CurrentValue_m38269_gshared (Enumerator_t6783 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m38269(__this, method) (( uint8_t (*) (Enumerator_t6783 *, const MethodInfo*))Enumerator_get_CurrentValue_m38269_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::Reset()
extern "C" void Enumerator_Reset_m38270_gshared (Enumerator_t6783 * __this, const MethodInfo* method);
#define Enumerator_Reset_m38270(__this, method) (( void (*) (Enumerator_t6783 *, const MethodInfo*))Enumerator_Reset_m38270_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyState()
extern "C" void Enumerator_VerifyState_m38271_gshared (Enumerator_t6783 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m38271(__this, method) (( void (*) (Enumerator_t6783 *, const MethodInfo*))Enumerator_VerifyState_m38271_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m38272_gshared (Enumerator_t6783 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m38272(__this, method) (( void (*) (Enumerator_t6783 *, const MethodInfo*))Enumerator_VerifyCurrent_m38272_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::Dispose()
extern "C" void Enumerator_Dispose_m38273_gshared (Enumerator_t6783 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m38273(__this, method) (( void (*) (Enumerator_t6783 *, const MethodInfo*))Enumerator_Dispose_m38273_gshared)(__this, method)
