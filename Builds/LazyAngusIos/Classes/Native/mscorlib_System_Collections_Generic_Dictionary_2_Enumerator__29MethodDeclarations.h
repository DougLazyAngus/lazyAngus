#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
struct Enumerator_t3855;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t3849;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_32.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m25438_gshared (Enumerator_t3855 * __this, Dictionary_2_t3849 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m25438(__this, ___dictionary, method) (( void (*) (Enumerator_t3855 *, Dictionary_2_t3849 *, const MethodInfo*))Enumerator__ctor_m25438_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m25439_gshared (Enumerator_t3855 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m25439(__this, method) (( Object_t * (*) (Enumerator_t3855 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m25439_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1685  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m25440_gshared (Enumerator_t3855 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m25440(__this, method) (( DictionaryEntry_t1685  (*) (Enumerator_t3855 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m25440_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m25441_gshared (Enumerator_t3855 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m25441(__this, method) (( Object_t * (*) (Enumerator_t3855 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m25441_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m25442_gshared (Enumerator_t3855 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m25442(__this, method) (( Object_t * (*) (Enumerator_t3855 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m25442_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool Enumerator_MoveNext_m25443_gshared (Enumerator_t3855 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m25443(__this, method) (( bool (*) (Enumerator_t3855 *, const MethodInfo*))Enumerator_MoveNext_m25443_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_Current()
extern "C" KeyValuePair_2_t3850  Enumerator_get_Current_m25444_gshared (Enumerator_t3855 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m25444(__this, method) (( KeyValuePair_2_t3850  (*) (Enumerator_t3855 *, const MethodInfo*))Enumerator_get_Current_m25444_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m25445_gshared (Enumerator_t3855 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m25445(__this, method) (( Object_t * (*) (Enumerator_t3855 *, const MethodInfo*))Enumerator_get_CurrentKey_m25445_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentValue()
extern "C" int64_t Enumerator_get_CurrentValue_m25446_gshared (Enumerator_t3855 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m25446(__this, method) (( int64_t (*) (Enumerator_t3855 *, const MethodInfo*))Enumerator_get_CurrentValue_m25446_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyState()
extern "C" void Enumerator_VerifyState_m25447_gshared (Enumerator_t3855 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m25447(__this, method) (( void (*) (Enumerator_t3855 *, const MethodInfo*))Enumerator_VerifyState_m25447_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m25448_gshared (Enumerator_t3855 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m25448(__this, method) (( void (*) (Enumerator_t3855 *, const MethodInfo*))Enumerator_VerifyCurrent_m25448_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::Dispose()
extern "C" void Enumerator_Dispose_m25449_gshared (Enumerator_t3855 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m25449(__this, method) (( void (*) (Enumerator_t3855 *, const MethodInfo*))Enumerator_Dispose_m25449_gshared)(__this, method)
