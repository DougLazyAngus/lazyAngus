#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
struct Enumerator_t5355;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2801;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_18.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m20975_gshared (Enumerator_t5355 * __this, Dictionary_2_t2801 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m20975(__this, ___dictionary, method) (( void (*) (Enumerator_t5355 *, Dictionary_2_t2801 *, const MethodInfo*))Enumerator__ctor_m20975_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m20976_gshared (Enumerator_t5355 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m20976(__this, method) (( Object_t * (*) (Enumerator_t5355 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m20976_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m20977_gshared (Enumerator_t5355 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m20977(__this, method) (( void (*) (Enumerator_t5355 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m20977_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2086  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m20978_gshared (Enumerator_t5355 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m20978(__this, method) (( DictionaryEntry_t2086  (*) (Enumerator_t5355 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m20978_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m20979_gshared (Enumerator_t5355 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m20979(__this, method) (( Object_t * (*) (Enumerator_t5355 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m20979_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m20980_gshared (Enumerator_t5355 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m20980(__this, method) (( Object_t * (*) (Enumerator_t5355 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m20980_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m20981_gshared (Enumerator_t5355 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m20981(__this, method) (( bool (*) (Enumerator_t5355 *, const MethodInfo*))Enumerator_MoveNext_m20981_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" KeyValuePair_2_t5347  Enumerator_get_Current_m20982_gshared (Enumerator_t5355 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m20982(__this, method) (( KeyValuePair_2_t5347  (*) (Enumerator_t5355 *, const MethodInfo*))Enumerator_get_Current_m20982_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m20983_gshared (Enumerator_t5355 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m20983(__this, method) (( int32_t (*) (Enumerator_t5355 *, const MethodInfo*))Enumerator_get_CurrentKey_m20983_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m20984_gshared (Enumerator_t5355 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m20984(__this, method) (( Object_t * (*) (Enumerator_t5355 *, const MethodInfo*))Enumerator_get_CurrentValue_m20984_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Reset()
extern "C" void Enumerator_Reset_m20985_gshared (Enumerator_t5355 * __this, const MethodInfo* method);
#define Enumerator_Reset_m20985(__this, method) (( void (*) (Enumerator_t5355 *, const MethodInfo*))Enumerator_Reset_m20985_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m20986_gshared (Enumerator_t5355 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m20986(__this, method) (( void (*) (Enumerator_t5355 *, const MethodInfo*))Enumerator_VerifyState_m20986_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m20987_gshared (Enumerator_t5355 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m20987(__this, method) (( void (*) (Enumerator_t5355 *, const MethodInfo*))Enumerator_VerifyCurrent_m20987_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m20988_gshared (Enumerator_t5355 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m20988(__this, method) (( void (*) (Enumerator_t5355 *, const MethodInfo*))Enumerator_Dispose_m20988_gshared)(__this, method)
