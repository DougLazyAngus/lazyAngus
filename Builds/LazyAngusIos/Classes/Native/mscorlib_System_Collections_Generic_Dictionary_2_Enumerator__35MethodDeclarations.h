#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>
struct Enumerator_t6002;
// System.Object
struct Object_t;
// System.Tuple`2<System.Type,System.Type>
struct Tuple_2_t1388;
// System.Func`3<System.Object,System.Object,System.Object>
struct Func_3_t1139;
// System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>
struct Dictionary_2_t1391;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_40.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__14MethodDeclarations.h"
#define Enumerator__ctor_m31198(__this, ___dictionary, method) (( void (*) (Enumerator_t6002 *, Dictionary_2_t1391 *, const MethodInfo*))Enumerator__ctor_m21654_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
#define Enumerator_System_Collections_IEnumerator_get_Current_m31199(__this, method) (( Object_t * (*) (Enumerator_t6002 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m21655_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.IEnumerator.Reset()
#define Enumerator_System_Collections_IEnumerator_Reset_m31200(__this, method) (( void (*) (Enumerator_t6002 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m21656_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Entry()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m31201(__this, method) (( DictionaryEntry_t2086  (*) (Enumerator_t6002 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m21657_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Key()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m31202(__this, method) (( Object_t * (*) (Enumerator_t6002 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m21658_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Value()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m31203(__this, method) (( Object_t * (*) (Enumerator_t6002 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m21659_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::MoveNext()
#define Enumerator_MoveNext_m31204(__this, method) (( bool (*) (Enumerator_t6002 *, const MethodInfo*))Enumerator_MoveNext_m21660_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::get_Current()
#define Enumerator_get_Current_m31205(__this, method) (( KeyValuePair_2_t5999  (*) (Enumerator_t6002 *, const MethodInfo*))Enumerator_get_Current_m21661_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::get_CurrentKey()
#define Enumerator_get_CurrentKey_m31206(__this, method) (( Tuple_2_t1388 * (*) (Enumerator_t6002 *, const MethodInfo*))Enumerator_get_CurrentKey_m21662_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::get_CurrentValue()
#define Enumerator_get_CurrentValue_m31207(__this, method) (( Func_3_t1139 * (*) (Enumerator_t6002 *, const MethodInfo*))Enumerator_get_CurrentValue_m21663_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::Reset()
#define Enumerator_Reset_m31208(__this, method) (( void (*) (Enumerator_t6002 *, const MethodInfo*))Enumerator_Reset_m21664_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::VerifyState()
#define Enumerator_VerifyState_m31209(__this, method) (( void (*) (Enumerator_t6002 *, const MethodInfo*))Enumerator_VerifyState_m21665_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::VerifyCurrent()
#define Enumerator_VerifyCurrent_m31210(__this, method) (( void (*) (Enumerator_t6002 *, const MethodInfo*))Enumerator_VerifyCurrent_m21666_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::Dispose()
#define Enumerator_Dispose_m31211(__this, method) (( void (*) (Enumerator_t6002 *, const MethodInfo*))Enumerator_Dispose_m21667_gshared)(__this, method)
