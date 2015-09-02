#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>
struct Enumerator_t8684;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t4141;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_143.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m64328_gshared (Enumerator_t8684 * __this, Dictionary_2_t4141 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m64328(__this, ___dictionary, method) (( void (*) (Enumerator_t8684 *, Dictionary_2_t4141 *, const MethodInfo*))Enumerator__ctor_m64328_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m64329_gshared (Enumerator_t8684 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m64329(__this, method) (( Object_t * (*) (Enumerator_t8684 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m64329_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m64330_gshared (Enumerator_t8684 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m64330(__this, method) (( void (*) (Enumerator_t8684 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m64330_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2156  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m64331_gshared (Enumerator_t8684 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m64331(__this, method) (( DictionaryEntry_t2156  (*) (Enumerator_t8684 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m64331_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m64332_gshared (Enumerator_t8684 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m64332(__this, method) (( Object_t * (*) (Enumerator_t8684 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m64332_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m64333_gshared (Enumerator_t8684 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m64333(__this, method) (( Object_t * (*) (Enumerator_t8684 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m64333_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m64334_gshared (Enumerator_t8684 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m64334(__this, method) (( bool (*) (Enumerator_t8684 *, const MethodInfo*))Enumerator_MoveNext_m64334_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t8680  Enumerator_get_Current_m64335_gshared (Enumerator_t8684 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m64335(__this, method) (( KeyValuePair_2_t8680  (*) (Enumerator_t8684 *, const MethodInfo*))Enumerator_get_Current_m64335_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m64336_gshared (Enumerator_t8684 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m64336(__this, method) (( int32_t (*) (Enumerator_t8684 *, const MethodInfo*))Enumerator_get_CurrentKey_m64336_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m64337_gshared (Enumerator_t8684 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m64337(__this, method) (( int32_t (*) (Enumerator_t8684 *, const MethodInfo*))Enumerator_get_CurrentValue_m64337_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::Reset()
extern "C" void Enumerator_Reset_m64338_gshared (Enumerator_t8684 * __this, const MethodInfo* method);
#define Enumerator_Reset_m64338(__this, method) (( void (*) (Enumerator_t8684 *, const MethodInfo*))Enumerator_Reset_m64338_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m64339_gshared (Enumerator_t8684 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m64339(__this, method) (( void (*) (Enumerator_t8684 *, const MethodInfo*))Enumerator_VerifyState_m64339_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m64340_gshared (Enumerator_t8684 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m64340(__this, method) (( void (*) (Enumerator_t8684 *, const MethodInfo*))Enumerator_VerifyCurrent_m64340_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m64341_gshared (Enumerator_t8684 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m64341(__this, method) (( void (*) (Enumerator_t8684 *, const MethodInfo*))Enumerator_Dispose_m64341_gshared)(__this, method)
