#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
struct Enumerator_t5536;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t5531;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_24.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m23886_gshared (Enumerator_t5536 * __this, Dictionary_2_t5531 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m23886(__this, ___dictionary, method) (( void (*) (Enumerator_t5536 *, Dictionary_2_t5531 *, const MethodInfo*))Enumerator__ctor_m23886_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m23887_gshared (Enumerator_t5536 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m23887(__this, method) (( Object_t * (*) (Enumerator_t5536 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m23887_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m23888_gshared (Enumerator_t5536 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m23888(__this, method) (( void (*) (Enumerator_t5536 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m23888_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2139  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m23889_gshared (Enumerator_t5536 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m23889(__this, method) (( DictionaryEntry_t2139  (*) (Enumerator_t5536 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m23889_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m23890_gshared (Enumerator_t5536 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m23890(__this, method) (( Object_t * (*) (Enumerator_t5536 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m23890_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m23891_gshared (Enumerator_t5536 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m23891(__this, method) (( Object_t * (*) (Enumerator_t5536 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m23891_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m23892_gshared (Enumerator_t5536 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m23892(__this, method) (( bool (*) (Enumerator_t5536 *, const MethodInfo*))Enumerator_MoveNext_m23892_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t5532  Enumerator_get_Current_m23893_gshared (Enumerator_t5536 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m23893(__this, method) (( KeyValuePair_2_t5532  (*) (Enumerator_t5536 *, const MethodInfo*))Enumerator_get_Current_m23893_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m23894_gshared (Enumerator_t5536 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m23894(__this, method) (( Object_t * (*) (Enumerator_t5536 *, const MethodInfo*))Enumerator_get_CurrentKey_m23894_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m23895_gshared (Enumerator_t5536 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m23895(__this, method) (( int32_t (*) (Enumerator_t5536 *, const MethodInfo*))Enumerator_get_CurrentValue_m23895_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Reset()
extern "C" void Enumerator_Reset_m23896_gshared (Enumerator_t5536 * __this, const MethodInfo* method);
#define Enumerator_Reset_m23896(__this, method) (( void (*) (Enumerator_t5536 *, const MethodInfo*))Enumerator_Reset_m23896_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m23897_gshared (Enumerator_t5536 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m23897(__this, method) (( void (*) (Enumerator_t5536 *, const MethodInfo*))Enumerator_VerifyState_m23897_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m23898_gshared (Enumerator_t5536 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m23898(__this, method) (( void (*) (Enumerator_t5536 *, const MethodInfo*))Enumerator_VerifyCurrent_m23898_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m23899_gshared (Enumerator_t5536 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m23899(__this, method) (( void (*) (Enumerator_t5536 *, const MethodInfo*))Enumerator_Dispose_m23899_gshared)(__this, method)
