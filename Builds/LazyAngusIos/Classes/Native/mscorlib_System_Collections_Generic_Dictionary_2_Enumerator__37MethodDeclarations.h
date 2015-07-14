#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
struct Enumerator_t4031;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t4026;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_42.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m27396_gshared (Enumerator_t4031 * __this, Dictionary_2_t4026 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m27396(__this, ___dictionary, method) (( void (*) (Enumerator_t4031 *, Dictionary_2_t4026 *, const MethodInfo*))Enumerator__ctor_m27396_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m27397_gshared (Enumerator_t4031 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m27397(__this, method) (( Object_t * (*) (Enumerator_t4031 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m27397_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1708  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m27398_gshared (Enumerator_t4031 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m27398(__this, method) (( DictionaryEntry_t1708  (*) (Enumerator_t4031 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m27398_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m27399_gshared (Enumerator_t4031 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m27399(__this, method) (( Object_t * (*) (Enumerator_t4031 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m27399_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m27400_gshared (Enumerator_t4031 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m27400(__this, method) (( Object_t * (*) (Enumerator_t4031 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m27400_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool Enumerator_MoveNext_m27401_gshared (Enumerator_t4031 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m27401(__this, method) (( bool (*) (Enumerator_t4031 *, const MethodInfo*))Enumerator_MoveNext_m27401_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_Current()
extern "C" KeyValuePair_2_t4027  Enumerator_get_Current_m27402_gshared (Enumerator_t4031 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m27402(__this, method) (( KeyValuePair_2_t4027  (*) (Enumerator_t4031 *, const MethodInfo*))Enumerator_get_Current_m27402_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m27403_gshared (Enumerator_t4031 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m27403(__this, method) (( Object_t * (*) (Enumerator_t4031 *, const MethodInfo*))Enumerator_get_CurrentKey_m27403_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentValue()
extern "C" uint8_t Enumerator_get_CurrentValue_m27404_gshared (Enumerator_t4031 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m27404(__this, method) (( uint8_t (*) (Enumerator_t4031 *, const MethodInfo*))Enumerator_get_CurrentValue_m27404_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyState()
extern "C" void Enumerator_VerifyState_m27405_gshared (Enumerator_t4031 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m27405(__this, method) (( void (*) (Enumerator_t4031 *, const MethodInfo*))Enumerator_VerifyState_m27405_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m27406_gshared (Enumerator_t4031 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m27406(__this, method) (( void (*) (Enumerator_t4031 *, const MethodInfo*))Enumerator_VerifyCurrent_m27406_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::Dispose()
extern "C" void Enumerator_Dispose_m27407_gshared (Enumerator_t4031 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m27407(__this, method) (( void (*) (Enumerator_t4031 *, const MethodInfo*))Enumerator_Dispose_m27407_gshared)(__this, method)
