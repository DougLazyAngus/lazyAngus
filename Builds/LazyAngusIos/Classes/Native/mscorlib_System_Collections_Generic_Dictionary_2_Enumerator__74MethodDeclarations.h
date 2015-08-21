#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>
struct Enumerator_t8652;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t4122;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_143.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m63963_gshared (Enumerator_t8652 * __this, Dictionary_2_t4122 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m63963(__this, ___dictionary, method) (( void (*) (Enumerator_t8652 *, Dictionary_2_t4122 *, const MethodInfo*))Enumerator__ctor_m63963_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m63964_gshared (Enumerator_t8652 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m63964(__this, method) (( Object_t * (*) (Enumerator_t8652 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m63964_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m63965_gshared (Enumerator_t8652 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m63965(__this, method) (( void (*) (Enumerator_t8652 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m63965_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2137  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m63966_gshared (Enumerator_t8652 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m63966(__this, method) (( DictionaryEntry_t2137  (*) (Enumerator_t8652 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m63966_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m63967_gshared (Enumerator_t8652 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m63967(__this, method) (( Object_t * (*) (Enumerator_t8652 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m63967_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m63968_gshared (Enumerator_t8652 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m63968(__this, method) (( Object_t * (*) (Enumerator_t8652 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m63968_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m63969_gshared (Enumerator_t8652 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m63969(__this, method) (( bool (*) (Enumerator_t8652 *, const MethodInfo*))Enumerator_MoveNext_m63969_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t8648  Enumerator_get_Current_m63970_gshared (Enumerator_t8652 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m63970(__this, method) (( KeyValuePair_2_t8648  (*) (Enumerator_t8652 *, const MethodInfo*))Enumerator_get_Current_m63970_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m63971_gshared (Enumerator_t8652 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m63971(__this, method) (( int32_t (*) (Enumerator_t8652 *, const MethodInfo*))Enumerator_get_CurrentKey_m63971_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m63972_gshared (Enumerator_t8652 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m63972(__this, method) (( int32_t (*) (Enumerator_t8652 *, const MethodInfo*))Enumerator_get_CurrentValue_m63972_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::Reset()
extern "C" void Enumerator_Reset_m63973_gshared (Enumerator_t8652 * __this, const MethodInfo* method);
#define Enumerator_Reset_m63973(__this, method) (( void (*) (Enumerator_t8652 *, const MethodInfo*))Enumerator_Reset_m63973_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m63974_gshared (Enumerator_t8652 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m63974(__this, method) (( void (*) (Enumerator_t8652 *, const MethodInfo*))Enumerator_VerifyState_m63974_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m63975_gshared (Enumerator_t8652 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m63975(__this, method) (( void (*) (Enumerator_t8652 *, const MethodInfo*))Enumerator_VerifyCurrent_m63975_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m63976_gshared (Enumerator_t8652 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m63976(__this, method) (( void (*) (Enumerator_t8652 *, const MethodInfo*))Enumerator_Dispose_m63976_gshared)(__this, method)
