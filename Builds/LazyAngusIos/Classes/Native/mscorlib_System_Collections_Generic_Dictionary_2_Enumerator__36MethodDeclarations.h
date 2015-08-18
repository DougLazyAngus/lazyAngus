#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>
struct Enumerator_t6077;
// System.Object
struct Object_t;
// System.Tuple`2<System.Type,System.Type>
struct Tuple_2_t1441;
// System.Func`3<System.Object,System.Object,System.Object>
struct Func_3_t1194;
// System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>
struct Dictionary_2_t1444;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_41.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__14MethodDeclarations.h"
#define Enumerator__ctor_m31902(__this, ___dictionary, method) (( void (*) (Enumerator_t6077 *, Dictionary_2_t1444 *, const MethodInfo*))Enumerator__ctor_m21926_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
#define Enumerator_System_Collections_IEnumerator_get_Current_m31903(__this, method) (( Object_t * (*) (Enumerator_t6077 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m21927_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.IEnumerator.Reset()
#define Enumerator_System_Collections_IEnumerator_Reset_m31904(__this, method) (( void (*) (Enumerator_t6077 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m21928_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Entry()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m31905(__this, method) (( DictionaryEntry_t2139  (*) (Enumerator_t6077 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m21929_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Key()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m31906(__this, method) (( Object_t * (*) (Enumerator_t6077 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m21930_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Value()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m31907(__this, method) (( Object_t * (*) (Enumerator_t6077 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m21931_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::MoveNext()
#define Enumerator_MoveNext_m31908(__this, method) (( bool (*) (Enumerator_t6077 *, const MethodInfo*))Enumerator_MoveNext_m21932_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::get_Current()
#define Enumerator_get_Current_m31909(__this, method) (( KeyValuePair_2_t6074  (*) (Enumerator_t6077 *, const MethodInfo*))Enumerator_get_Current_m21933_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::get_CurrentKey()
#define Enumerator_get_CurrentKey_m31910(__this, method) (( Tuple_2_t1441 * (*) (Enumerator_t6077 *, const MethodInfo*))Enumerator_get_CurrentKey_m21934_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::get_CurrentValue()
#define Enumerator_get_CurrentValue_m31911(__this, method) (( Func_3_t1194 * (*) (Enumerator_t6077 *, const MethodInfo*))Enumerator_get_CurrentValue_m21935_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::Reset()
#define Enumerator_Reset_m31912(__this, method) (( void (*) (Enumerator_t6077 *, const MethodInfo*))Enumerator_Reset_m21936_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::VerifyState()
#define Enumerator_VerifyState_m31913(__this, method) (( void (*) (Enumerator_t6077 *, const MethodInfo*))Enumerator_VerifyState_m21937_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::VerifyCurrent()
#define Enumerator_VerifyCurrent_m31914(__this, method) (( void (*) (Enumerator_t6077 *, const MethodInfo*))Enumerator_VerifyCurrent_m21938_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::Dispose()
#define Enumerator_Dispose_m31915(__this, method) (( void (*) (Enumerator_t6077 *, const MethodInfo*))Enumerator_Dispose_m21939_gshared)(__this, method)
