#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
struct Enumerator_t4014;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t4009;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_42.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m27365_gshared (Enumerator_t4014 * __this, Dictionary_2_t4009 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m27365(__this, ___dictionary, method) (( void (*) (Enumerator_t4014 *, Dictionary_2_t4009 *, const MethodInfo*))Enumerator__ctor_m27365_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m27366_gshared (Enumerator_t4014 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m27366(__this, method) (( Object_t * (*) (Enumerator_t4014 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m27366_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1685  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m27367_gshared (Enumerator_t4014 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m27367(__this, method) (( DictionaryEntry_t1685  (*) (Enumerator_t4014 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m27367_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m27368_gshared (Enumerator_t4014 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m27368(__this, method) (( Object_t * (*) (Enumerator_t4014 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m27368_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m27369_gshared (Enumerator_t4014 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m27369(__this, method) (( Object_t * (*) (Enumerator_t4014 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m27369_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool Enumerator_MoveNext_m27370_gshared (Enumerator_t4014 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m27370(__this, method) (( bool (*) (Enumerator_t4014 *, const MethodInfo*))Enumerator_MoveNext_m27370_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_Current()
extern "C" KeyValuePair_2_t4010  Enumerator_get_Current_m27371_gshared (Enumerator_t4014 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m27371(__this, method) (( KeyValuePair_2_t4010  (*) (Enumerator_t4014 *, const MethodInfo*))Enumerator_get_Current_m27371_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m27372_gshared (Enumerator_t4014 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m27372(__this, method) (( Object_t * (*) (Enumerator_t4014 *, const MethodInfo*))Enumerator_get_CurrentKey_m27372_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentValue()
extern "C" uint8_t Enumerator_get_CurrentValue_m27373_gshared (Enumerator_t4014 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m27373(__this, method) (( uint8_t (*) (Enumerator_t4014 *, const MethodInfo*))Enumerator_get_CurrentValue_m27373_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyState()
extern "C" void Enumerator_VerifyState_m27374_gshared (Enumerator_t4014 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m27374(__this, method) (( void (*) (Enumerator_t4014 *, const MethodInfo*))Enumerator_VerifyState_m27374_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m27375_gshared (Enumerator_t4014 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m27375(__this, method) (( void (*) (Enumerator_t4014 *, const MethodInfo*))Enumerator_VerifyCurrent_m27375_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::Dispose()
extern "C" void Enumerator_Dispose_m27376_gshared (Enumerator_t4014 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m27376(__this, method) (( void (*) (Enumerator_t4014 *, const MethodInfo*))Enumerator_Dispose_m27376_gshared)(__this, method)
