#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
struct Enumerator_t3435;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t3430;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_16.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m18703_gshared (Enumerator_t3435 * __this, Dictionary_2_t3430 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m18703(__this, ___dictionary, method) (( void (*) (Enumerator_t3435 *, Dictionary_2_t3430 *, const MethodInfo*))Enumerator__ctor_m18703_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m18704_gshared (Enumerator_t3435 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m18704(__this, method) (( Object_t * (*) (Enumerator_t3435 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m18704_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1710  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18705_gshared (Enumerator_t3435 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18705(__this, method) (( DictionaryEntry_t1710  (*) (Enumerator_t3435 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18705_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18706_gshared (Enumerator_t3435 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18706(__this, method) (( Object_t * (*) (Enumerator_t3435 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18706_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18707_gshared (Enumerator_t3435 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18707(__this, method) (( Object_t * (*) (Enumerator_t3435 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18707_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m18708_gshared (Enumerator_t3435 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m18708(__this, method) (( bool (*) (Enumerator_t3435 *, const MethodInfo*))Enumerator_MoveNext_m18708_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t3431  Enumerator_get_Current_m18709_gshared (Enumerator_t3435 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m18709(__this, method) (( KeyValuePair_2_t3431  (*) (Enumerator_t3435 *, const MethodInfo*))Enumerator_get_Current_m18709_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m18710_gshared (Enumerator_t3435 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m18710(__this, method) (( Object_t * (*) (Enumerator_t3435 *, const MethodInfo*))Enumerator_get_CurrentKey_m18710_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m18711_gshared (Enumerator_t3435 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m18711(__this, method) (( int32_t (*) (Enumerator_t3435 *, const MethodInfo*))Enumerator_get_CurrentValue_m18711_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m18712_gshared (Enumerator_t3435 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m18712(__this, method) (( void (*) (Enumerator_t3435 *, const MethodInfo*))Enumerator_VerifyState_m18712_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m18713_gshared (Enumerator_t3435 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m18713(__this, method) (( void (*) (Enumerator_t3435 *, const MethodInfo*))Enumerator_VerifyCurrent_m18713_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m18714_gshared (Enumerator_t3435 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m18714(__this, method) (( void (*) (Enumerator_t3435 *, const MethodInfo*))Enumerator_Dispose_m18714_gshared)(__this, method)
