#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
struct Enumerator_t5492;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t5487;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_24.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m23640_gshared (Enumerator_t5492 * __this, Dictionary_2_t5487 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m23640(__this, ___dictionary, method) (( void (*) (Enumerator_t5492 *, Dictionary_2_t5487 *, const MethodInfo*))Enumerator__ctor_m23640_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m23641_gshared (Enumerator_t5492 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m23641(__this, method) (( Object_t * (*) (Enumerator_t5492 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m23641_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m23642_gshared (Enumerator_t5492 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m23642(__this, method) (( void (*) (Enumerator_t5492 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m23642_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2090  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m23643_gshared (Enumerator_t5492 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m23643(__this, method) (( DictionaryEntry_t2090  (*) (Enumerator_t5492 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m23643_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m23644_gshared (Enumerator_t5492 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m23644(__this, method) (( Object_t * (*) (Enumerator_t5492 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m23644_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m23645_gshared (Enumerator_t5492 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m23645(__this, method) (( Object_t * (*) (Enumerator_t5492 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m23645_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m23646_gshared (Enumerator_t5492 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m23646(__this, method) (( bool (*) (Enumerator_t5492 *, const MethodInfo*))Enumerator_MoveNext_m23646_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t5488  Enumerator_get_Current_m23647_gshared (Enumerator_t5492 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m23647(__this, method) (( KeyValuePair_2_t5488  (*) (Enumerator_t5492 *, const MethodInfo*))Enumerator_get_Current_m23647_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m23648_gshared (Enumerator_t5492 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m23648(__this, method) (( Object_t * (*) (Enumerator_t5492 *, const MethodInfo*))Enumerator_get_CurrentKey_m23648_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m23649_gshared (Enumerator_t5492 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m23649(__this, method) (( int32_t (*) (Enumerator_t5492 *, const MethodInfo*))Enumerator_get_CurrentValue_m23649_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Reset()
extern "C" void Enumerator_Reset_m23650_gshared (Enumerator_t5492 * __this, const MethodInfo* method);
#define Enumerator_Reset_m23650(__this, method) (( void (*) (Enumerator_t5492 *, const MethodInfo*))Enumerator_Reset_m23650_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m23651_gshared (Enumerator_t5492 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m23651(__this, method) (( void (*) (Enumerator_t5492 *, const MethodInfo*))Enumerator_VerifyState_m23651_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m23652_gshared (Enumerator_t5492 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m23652(__this, method) (( void (*) (Enumerator_t5492 *, const MethodInfo*))Enumerator_VerifyCurrent_m23652_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m23653_gshared (Enumerator_t5492 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m23653(__this, method) (( void (*) (Enumerator_t5492 *, const MethodInfo*))Enumerator_Dispose_m23653_gshared)(__this, method)
