#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
struct Enumerator_t6790;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t6787;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_45.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m38317_gshared (Enumerator_t6790 * __this, Dictionary_2_t6787 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m38317(__this, ___dictionary, method) (( void (*) (Enumerator_t6790 *, Dictionary_2_t6787 *, const MethodInfo*))Enumerator__ctor_m38317_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m38318_gshared (Enumerator_t6790 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m38318(__this, method) (( Object_t * (*) (Enumerator_t6790 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m38318_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m38319_gshared (Enumerator_t6790 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m38319(__this, method) (( void (*) (Enumerator_t6790 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m38319_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2167  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m38320_gshared (Enumerator_t6790 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m38320(__this, method) (( DictionaryEntry_t2167  (*) (Enumerator_t6790 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m38320_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m38321_gshared (Enumerator_t6790 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m38321(__this, method) (( Object_t * (*) (Enumerator_t6790 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m38321_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m38322_gshared (Enumerator_t6790 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m38322(__this, method) (( Object_t * (*) (Enumerator_t6790 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m38322_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool Enumerator_MoveNext_m38323_gshared (Enumerator_t6790 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m38323(__this, method) (( bool (*) (Enumerator_t6790 *, const MethodInfo*))Enumerator_MoveNext_m38323_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_Current()
extern "C" KeyValuePair_2_t6764  Enumerator_get_Current_m38324_gshared (Enumerator_t6790 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m38324(__this, method) (( KeyValuePair_2_t6764  (*) (Enumerator_t6790 *, const MethodInfo*))Enumerator_get_Current_m38324_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m38325_gshared (Enumerator_t6790 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m38325(__this, method) (( Object_t * (*) (Enumerator_t6790 *, const MethodInfo*))Enumerator_get_CurrentKey_m38325_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentValue()
extern "C" uint8_t Enumerator_get_CurrentValue_m38326_gshared (Enumerator_t6790 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m38326(__this, method) (( uint8_t (*) (Enumerator_t6790 *, const MethodInfo*))Enumerator_get_CurrentValue_m38326_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::Reset()
extern "C" void Enumerator_Reset_m38327_gshared (Enumerator_t6790 * __this, const MethodInfo* method);
#define Enumerator_Reset_m38327(__this, method) (( void (*) (Enumerator_t6790 *, const MethodInfo*))Enumerator_Reset_m38327_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyState()
extern "C" void Enumerator_VerifyState_m38328_gshared (Enumerator_t6790 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m38328(__this, method) (( void (*) (Enumerator_t6790 *, const MethodInfo*))Enumerator_VerifyState_m38328_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m38329_gshared (Enumerator_t6790 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m38329(__this, method) (( void (*) (Enumerator_t6790 *, const MethodInfo*))Enumerator_VerifyCurrent_m38329_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::Dispose()
extern "C" void Enumerator_Dispose_m38330_gshared (Enumerator_t6790 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m38330(__this, method) (( void (*) (Enumerator_t6790 *, const MethodInfo*))Enumerator_Dispose_m38330_gshared)(__this, method)
