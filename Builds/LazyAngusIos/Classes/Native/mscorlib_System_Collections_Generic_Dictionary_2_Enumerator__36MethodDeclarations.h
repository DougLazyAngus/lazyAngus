#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>
struct Enumerator_t6646;
// System.Object
struct Object_t;
// System.Tuple`2<System.Type,System.Type>
struct Tuple_2_t1458;
// System.Func`3<System.Object,System.Object,System.Object>
struct Func_3_t1211;
// System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>
struct Dictionary_2_t1461;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_41.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__14MethodDeclarations.h"
#define Enumerator__ctor_m36589(__this, ___dictionary, method) (( void (*) (Enumerator_t6646 *, Dictionary_2_t1461 *, const MethodInfo*))Enumerator__ctor_m26268_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
#define Enumerator_System_Collections_IEnumerator_get_Current_m36590(__this, method) (( Object_t * (*) (Enumerator_t6646 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m26269_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.IEnumerator.Reset()
#define Enumerator_System_Collections_IEnumerator_Reset_m36591(__this, method) (( void (*) (Enumerator_t6646 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m26270_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Entry()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m36592(__this, method) (( DictionaryEntry_t2156  (*) (Enumerator_t6646 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m26271_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Key()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m36593(__this, method) (( Object_t * (*) (Enumerator_t6646 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m26272_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Value()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m36594(__this, method) (( Object_t * (*) (Enumerator_t6646 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m26273_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::MoveNext()
#define Enumerator_MoveNext_m36595(__this, method) (( bool (*) (Enumerator_t6646 *, const MethodInfo*))Enumerator_MoveNext_m26274_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::get_Current()
#define Enumerator_get_Current_m36596(__this, method) (( KeyValuePair_2_t6643  (*) (Enumerator_t6646 *, const MethodInfo*))Enumerator_get_Current_m26275_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::get_CurrentKey()
#define Enumerator_get_CurrentKey_m36597(__this, method) (( Tuple_2_t1458 * (*) (Enumerator_t6646 *, const MethodInfo*))Enumerator_get_CurrentKey_m26276_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::get_CurrentValue()
#define Enumerator_get_CurrentValue_m36598(__this, method) (( Func_3_t1211 * (*) (Enumerator_t6646 *, const MethodInfo*))Enumerator_get_CurrentValue_m26277_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::Reset()
#define Enumerator_Reset_m36599(__this, method) (( void (*) (Enumerator_t6646 *, const MethodInfo*))Enumerator_Reset_m26278_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::VerifyState()
#define Enumerator_VerifyState_m36600(__this, method) (( void (*) (Enumerator_t6646 *, const MethodInfo*))Enumerator_VerifyState_m26279_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::VerifyCurrent()
#define Enumerator_VerifyCurrent_m36601(__this, method) (( void (*) (Enumerator_t6646 *, const MethodInfo*))Enumerator_VerifyCurrent_m26280_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::Dispose()
#define Enumerator_Dispose_m36602(__this, method) (( void (*) (Enumerator_t6646 *, const MethodInfo*))Enumerator_Dispose_m26281_gshared)(__this, method)
