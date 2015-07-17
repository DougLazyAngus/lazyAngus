﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
struct Enumerator_t3509;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t3504;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_20.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m19768_gshared (Enumerator_t3509 * __this, Dictionary_2_t3504 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m19768(__this, ___dictionary, method) (( void (*) (Enumerator_t3509 *, Dictionary_2_t3504 *, const MethodInfo*))Enumerator__ctor_m19768_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m19769_gshared (Enumerator_t3509 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m19769(__this, method) (( Object_t * (*) (Enumerator_t3509 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m19769_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2179  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m19770_gshared (Enumerator_t3509 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m19770(__this, method) (( DictionaryEntry_t2179  (*) (Enumerator_t3509 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m19770_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m19771_gshared (Enumerator_t3509 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m19771(__this, method) (( Object_t * (*) (Enumerator_t3509 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m19771_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m19772_gshared (Enumerator_t3509 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m19772(__this, method) (( Object_t * (*) (Enumerator_t3509 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m19772_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m19773_gshared (Enumerator_t3509 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m19773(__this, method) (( bool (*) (Enumerator_t3509 *, const MethodInfo*))Enumerator_MoveNext_m19773_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t3505  Enumerator_get_Current_m19774_gshared (Enumerator_t3509 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m19774(__this, method) (( KeyValuePair_2_t3505  (*) (Enumerator_t3509 *, const MethodInfo*))Enumerator_get_Current_m19774_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m19775_gshared (Enumerator_t3509 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m19775(__this, method) (( Object_t * (*) (Enumerator_t3509 *, const MethodInfo*))Enumerator_get_CurrentKey_m19775_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m19776_gshared (Enumerator_t3509 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m19776(__this, method) (( int32_t (*) (Enumerator_t3509 *, const MethodInfo*))Enumerator_get_CurrentValue_m19776_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m19777_gshared (Enumerator_t3509 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m19777(__this, method) (( void (*) (Enumerator_t3509 *, const MethodInfo*))Enumerator_VerifyState_m19777_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m19778_gshared (Enumerator_t3509 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m19778(__this, method) (( void (*) (Enumerator_t3509 *, const MethodInfo*))Enumerator_VerifyCurrent_m19778_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m19779_gshared (Enumerator_t3509 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m19779(__this, method) (( void (*) (Enumerator_t3509 *, const MethodInfo*))Enumerator_Dispose_m19779_gshared)(__this, method)
