#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
struct Enumerator_t3872;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t3866;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_32.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m25469_gshared (Enumerator_t3872 * __this, Dictionary_2_t3866 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m25469(__this, ___dictionary, method) (( void (*) (Enumerator_t3872 *, Dictionary_2_t3866 *, const MethodInfo*))Enumerator__ctor_m25469_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m25470_gshared (Enumerator_t3872 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m25470(__this, method) (( Object_t * (*) (Enumerator_t3872 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m25470_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1708  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m25471_gshared (Enumerator_t3872 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m25471(__this, method) (( DictionaryEntry_t1708  (*) (Enumerator_t3872 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m25471_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m25472_gshared (Enumerator_t3872 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m25472(__this, method) (( Object_t * (*) (Enumerator_t3872 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m25472_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m25473_gshared (Enumerator_t3872 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m25473(__this, method) (( Object_t * (*) (Enumerator_t3872 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m25473_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool Enumerator_MoveNext_m25474_gshared (Enumerator_t3872 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m25474(__this, method) (( bool (*) (Enumerator_t3872 *, const MethodInfo*))Enumerator_MoveNext_m25474_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_Current()
extern "C" KeyValuePair_2_t3867  Enumerator_get_Current_m25475_gshared (Enumerator_t3872 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m25475(__this, method) (( KeyValuePair_2_t3867  (*) (Enumerator_t3872 *, const MethodInfo*))Enumerator_get_Current_m25475_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m25476_gshared (Enumerator_t3872 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m25476(__this, method) (( Object_t * (*) (Enumerator_t3872 *, const MethodInfo*))Enumerator_get_CurrentKey_m25476_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentValue()
extern "C" int64_t Enumerator_get_CurrentValue_m25477_gshared (Enumerator_t3872 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m25477(__this, method) (( int64_t (*) (Enumerator_t3872 *, const MethodInfo*))Enumerator_get_CurrentValue_m25477_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyState()
extern "C" void Enumerator_VerifyState_m25478_gshared (Enumerator_t3872 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m25478(__this, method) (( void (*) (Enumerator_t3872 *, const MethodInfo*))Enumerator_VerifyState_m25478_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m25479_gshared (Enumerator_t3872 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m25479(__this, method) (( void (*) (Enumerator_t3872 *, const MethodInfo*))Enumerator_VerifyCurrent_m25479_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::Dispose()
extern "C" void Enumerator_Dispose_m25480_gshared (Enumerator_t3872 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m25480(__this, method) (( void (*) (Enumerator_t3872 *, const MethodInfo*))Enumerator_Dispose_m25480_gshared)(__this, method)
