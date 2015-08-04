#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>
struct Enumerator_t6004;
// System.Object
struct Object_t;
// System.Tuple`2<System.Type,System.Type>
struct Tuple_2_t1390;
// System.Func`3<System.Object,System.Object,System.Object>
struct Func_3_t1141;
// System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>
struct Dictionary_2_t1393;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_40.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__14MethodDeclarations.h"
#define Enumerator__ctor_m31214(__this, ___dictionary, method) (( void (*) (Enumerator_t6004 *, Dictionary_2_t1393 *, const MethodInfo*))Enumerator__ctor_m21670_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
#define Enumerator_System_Collections_IEnumerator_get_Current_m31215(__this, method) (( Object_t * (*) (Enumerator_t6004 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m21671_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.IEnumerator.Reset()
#define Enumerator_System_Collections_IEnumerator_Reset_m31216(__this, method) (( void (*) (Enumerator_t6004 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m21672_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Entry()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m31217(__this, method) (( DictionaryEntry_t2088  (*) (Enumerator_t6004 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m21673_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Key()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m31218(__this, method) (( Object_t * (*) (Enumerator_t6004 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m21674_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Value()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m31219(__this, method) (( Object_t * (*) (Enumerator_t6004 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m21675_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::MoveNext()
#define Enumerator_MoveNext_m31220(__this, method) (( bool (*) (Enumerator_t6004 *, const MethodInfo*))Enumerator_MoveNext_m21676_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::get_Current()
#define Enumerator_get_Current_m31221(__this, method) (( KeyValuePair_2_t6001  (*) (Enumerator_t6004 *, const MethodInfo*))Enumerator_get_Current_m21677_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::get_CurrentKey()
#define Enumerator_get_CurrentKey_m31222(__this, method) (( Tuple_2_t1390 * (*) (Enumerator_t6004 *, const MethodInfo*))Enumerator_get_CurrentKey_m21678_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::get_CurrentValue()
#define Enumerator_get_CurrentValue_m31223(__this, method) (( Func_3_t1141 * (*) (Enumerator_t6004 *, const MethodInfo*))Enumerator_get_CurrentValue_m21679_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::Reset()
#define Enumerator_Reset_m31224(__this, method) (( void (*) (Enumerator_t6004 *, const MethodInfo*))Enumerator_Reset_m21680_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::VerifyState()
#define Enumerator_VerifyState_m31225(__this, method) (( void (*) (Enumerator_t6004 *, const MethodInfo*))Enumerator_VerifyState_m21681_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::VerifyCurrent()
#define Enumerator_VerifyCurrent_m31226(__this, method) (( void (*) (Enumerator_t6004 *, const MethodInfo*))Enumerator_VerifyCurrent_m21682_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::Dispose()
#define Enumerator_Dispose_m31227(__this, method) (( void (*) (Enumerator_t6004 *, const MethodInfo*))Enumerator_Dispose_m21683_gshared)(__this, method)
