#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
struct Enumerator_t8377;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t8374;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m60477_gshared (Enumerator_t8377 * __this, Dictionary_2_t8374 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m60477(__this, ___dictionary, method) (( void (*) (Enumerator_t8377 *, Dictionary_2_t8374 *, const MethodInfo*))Enumerator__ctor_m60477_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m60478_gshared (Enumerator_t8377 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m60478(__this, method) (( Object_t * (*) (Enumerator_t8377 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m60478_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m60479_gshared (Enumerator_t8377 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m60479(__this, method) (( void (*) (Enumerator_t8377 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m60479_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2088  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m60480_gshared (Enumerator_t8377 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m60480(__this, method) (( DictionaryEntry_t2088  (*) (Enumerator_t8377 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m60480_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m60481_gshared (Enumerator_t8377 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m60481(__this, method) (( Object_t * (*) (Enumerator_t8377 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m60481_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m60482_gshared (Enumerator_t8377 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m60482(__this, method) (( Object_t * (*) (Enumerator_t8377 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m60482_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool Enumerator_MoveNext_m60483_gshared (Enumerator_t8377 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m60483(__this, method) (( bool (*) (Enumerator_t8377 *, const MethodInfo*))Enumerator_MoveNext_m60483_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_Current()
extern "C" KeyValuePair_2_t7171  Enumerator_get_Current_m60484_gshared (Enumerator_t8377 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m60484(__this, method) (( KeyValuePair_2_t7171  (*) (Enumerator_t8377 *, const MethodInfo*))Enumerator_get_Current_m60484_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m60485_gshared (Enumerator_t8377 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m60485(__this, method) (( Object_t * (*) (Enumerator_t8377 *, const MethodInfo*))Enumerator_get_CurrentKey_m60485_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentValue()
extern "C" int64_t Enumerator_get_CurrentValue_m60486_gshared (Enumerator_t8377 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m60486(__this, method) (( int64_t (*) (Enumerator_t8377 *, const MethodInfo*))Enumerator_get_CurrentValue_m60486_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::Reset()
extern "C" void Enumerator_Reset_m60487_gshared (Enumerator_t8377 * __this, const MethodInfo* method);
#define Enumerator_Reset_m60487(__this, method) (( void (*) (Enumerator_t8377 *, const MethodInfo*))Enumerator_Reset_m60487_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyState()
extern "C" void Enumerator_VerifyState_m60488_gshared (Enumerator_t8377 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m60488(__this, method) (( void (*) (Enumerator_t8377 *, const MethodInfo*))Enumerator_VerifyState_m60488_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m60489_gshared (Enumerator_t8377 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m60489(__this, method) (( void (*) (Enumerator_t8377 *, const MethodInfo*))Enumerator_VerifyCurrent_m60489_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::Dispose()
extern "C" void Enumerator_Dispose_m60490_gshared (Enumerator_t8377 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m60490(__this, method) (( void (*) (Enumerator_t8377 *, const MethodInfo*))Enumerator_Dispose_m60490_gshared)(__this, method)
