#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>
struct Enumerator_t4064;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1653;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_44.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m27672_gshared (Enumerator_t4064 * __this, Dictionary_2_t1653 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m27672(__this, ___dictionary, method) (( void (*) (Enumerator_t4064 *, Dictionary_2_t1653 *, const MethodInfo*))Enumerator__ctor_m27672_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m27673_gshared (Enumerator_t4064 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m27673(__this, method) (( Object_t * (*) (Enumerator_t4064 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m27673_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1718  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m27674_gshared (Enumerator_t4064 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m27674(__this, method) (( DictionaryEntry_t1718  (*) (Enumerator_t4064 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m27674_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m27675_gshared (Enumerator_t4064 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m27675(__this, method) (( Object_t * (*) (Enumerator_t4064 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m27675_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m27676_gshared (Enumerator_t4064 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m27676(__this, method) (( Object_t * (*) (Enumerator_t4064 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m27676_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m27677_gshared (Enumerator_t4064 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m27677(__this, method) (( bool (*) (Enumerator_t4064 *, const MethodInfo*))Enumerator_MoveNext_m27677_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t4060  Enumerator_get_Current_m27678_gshared (Enumerator_t4064 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m27678(__this, method) (( KeyValuePair_2_t4060  (*) (Enumerator_t4064 *, const MethodInfo*))Enumerator_get_Current_m27678_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m27679_gshared (Enumerator_t4064 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m27679(__this, method) (( int32_t (*) (Enumerator_t4064 *, const MethodInfo*))Enumerator_get_CurrentKey_m27679_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m27680_gshared (Enumerator_t4064 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m27680(__this, method) (( int32_t (*) (Enumerator_t4064 *, const MethodInfo*))Enumerator_get_CurrentValue_m27680_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m27681_gshared (Enumerator_t4064 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m27681(__this, method) (( void (*) (Enumerator_t4064 *, const MethodInfo*))Enumerator_VerifyState_m27681_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m27682_gshared (Enumerator_t4064 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m27682(__this, method) (( void (*) (Enumerator_t4064 *, const MethodInfo*))Enumerator_VerifyCurrent_m27682_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m27683_gshared (Enumerator_t4064 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m27683(__this, method) (( void (*) (Enumerator_t4064 *, const MethodInfo*))Enumerator_Dispose_m27683_gshared)(__this, method)
