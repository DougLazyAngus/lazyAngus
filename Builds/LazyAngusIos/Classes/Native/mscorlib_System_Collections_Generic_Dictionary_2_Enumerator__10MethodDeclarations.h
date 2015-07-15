#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
struct Enumerator_t3386;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1175;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_13.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m17959_gshared (Enumerator_t3386 * __this, Dictionary_2_t1175 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m17959(__this, ___dictionary, method) (( void (*) (Enumerator_t3386 *, Dictionary_2_t1175 *, const MethodInfo*))Enumerator__ctor_m17959_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m17960_gshared (Enumerator_t3386 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m17960(__this, method) (( Object_t * (*) (Enumerator_t3386 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m17960_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1710  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m17961_gshared (Enumerator_t3386 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m17961(__this, method) (( DictionaryEntry_t1710  (*) (Enumerator_t3386 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m17961_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m17962_gshared (Enumerator_t3386 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m17962(__this, method) (( Object_t * (*) (Enumerator_t3386 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m17962_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m17963_gshared (Enumerator_t3386 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m17963(__this, method) (( Object_t * (*) (Enumerator_t3386 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m17963_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m17964_gshared (Enumerator_t3386 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m17964(__this, method) (( bool (*) (Enumerator_t3386 *, const MethodInfo*))Enumerator_MoveNext_m17964_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" KeyValuePair_2_t3382  Enumerator_get_Current_m17965_gshared (Enumerator_t3386 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m17965(__this, method) (( KeyValuePair_2_t3382  (*) (Enumerator_t3386 *, const MethodInfo*))Enumerator_get_Current_m17965_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m17966_gshared (Enumerator_t3386 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m17966(__this, method) (( int32_t (*) (Enumerator_t3386 *, const MethodInfo*))Enumerator_get_CurrentKey_m17966_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m17967_gshared (Enumerator_t3386 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m17967(__this, method) (( Object_t * (*) (Enumerator_t3386 *, const MethodInfo*))Enumerator_get_CurrentValue_m17967_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m17968_gshared (Enumerator_t3386 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m17968(__this, method) (( void (*) (Enumerator_t3386 *, const MethodInfo*))Enumerator_VerifyState_m17968_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m17969_gshared (Enumerator_t3386 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m17969(__this, method) (( void (*) (Enumerator_t3386 *, const MethodInfo*))Enumerator_VerifyCurrent_m17969_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m17970_gshared (Enumerator_t3386 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m17970(__this, method) (( void (*) (Enumerator_t3386 *, const MethodInfo*))Enumerator_Dispose_m17970_gshared)(__this, method)
