#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>
struct Enumerator_t6006;
// System.Object
struct Object_t;
// System.Tuple`2<System.Type,System.Type>
struct Tuple_2_t1392;
// System.Func`3<System.Object,System.Object,System.Object>
struct Func_3_t1143;
// System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>
struct Dictionary_2_t1395;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_40.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__14MethodDeclarations.h"
#define Enumerator__ctor_m31229(__this, ___dictionary, method) (( void (*) (Enumerator_t6006 *, Dictionary_2_t1395 *, const MethodInfo*))Enumerator__ctor_m21685_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
#define Enumerator_System_Collections_IEnumerator_get_Current_m31230(__this, method) (( Object_t * (*) (Enumerator_t6006 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m21686_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.IEnumerator.Reset()
#define Enumerator_System_Collections_IEnumerator_Reset_m31231(__this, method) (( void (*) (Enumerator_t6006 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m21687_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Entry()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m31232(__this, method) (( DictionaryEntry_t2090  (*) (Enumerator_t6006 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m21688_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Key()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m31233(__this, method) (( Object_t * (*) (Enumerator_t6006 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m21689_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Value()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m31234(__this, method) (( Object_t * (*) (Enumerator_t6006 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m21690_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::MoveNext()
#define Enumerator_MoveNext_m31235(__this, method) (( bool (*) (Enumerator_t6006 *, const MethodInfo*))Enumerator_MoveNext_m21691_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::get_Current()
#define Enumerator_get_Current_m31236(__this, method) (( KeyValuePair_2_t6003  (*) (Enumerator_t6006 *, const MethodInfo*))Enumerator_get_Current_m21692_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::get_CurrentKey()
#define Enumerator_get_CurrentKey_m31237(__this, method) (( Tuple_2_t1392 * (*) (Enumerator_t6006 *, const MethodInfo*))Enumerator_get_CurrentKey_m21693_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::get_CurrentValue()
#define Enumerator_get_CurrentValue_m31238(__this, method) (( Func_3_t1143 * (*) (Enumerator_t6006 *, const MethodInfo*))Enumerator_get_CurrentValue_m21694_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::Reset()
#define Enumerator_Reset_m31239(__this, method) (( void (*) (Enumerator_t6006 *, const MethodInfo*))Enumerator_Reset_m21695_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::VerifyState()
#define Enumerator_VerifyState_m31240(__this, method) (( void (*) (Enumerator_t6006 *, const MethodInfo*))Enumerator_VerifyState_m21696_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::VerifyCurrent()
#define Enumerator_VerifyCurrent_m31241(__this, method) (( void (*) (Enumerator_t6006 *, const MethodInfo*))Enumerator_VerifyCurrent_m21697_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::Dispose()
#define Enumerator_Dispose_m31242(__this, method) (( void (*) (Enumerator_t6006 *, const MethodInfo*))Enumerator_Dispose_m21698_gshared)(__this, method)
