#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>
struct KeyCollection_t8463;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Int64>
struct Dictionary_2_t2797;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t1461;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.String[]
struct StringU5BU5D_t75;
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_146.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_81MethodDeclarations.h"
#define KeyCollection__ctor_m61343(__this, ___dictionary, method) (( void (*) (KeyCollection_t8463 *, Dictionary_2_t2797 *, const MethodInfo*))KeyCollection__ctor_m61262_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m61344(__this, ___item, method) (( void (*) (KeyCollection_t8463 *, String_t*, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m61263_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::System.Collections.Generic.ICollection<TKey>.Clear()
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m61345(__this, method) (( void (*) (KeyCollection_t8463 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m61264_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m61346(__this, ___item, method) (( bool (*) (KeyCollection_t8463 *, String_t*, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m61265_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m61347(__this, ___item, method) (( bool (*) (KeyCollection_t8463 *, String_t*, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m61266_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m61348(__this, method) (( Object_t* (*) (KeyCollection_t8463 *, const MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m61267_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define KeyCollection_System_Collections_ICollection_CopyTo_m61349(__this, ___array, ___index, method) (( void (*) (KeyCollection_t8463 *, Array_t *, int32_t, const MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m61268_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m61350(__this, method) (( Object_t * (*) (KeyCollection_t8463 *, const MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m61269_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m61351(__this, method) (( bool (*) (KeyCollection_t8463 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m61270_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::System.Collections.ICollection.get_IsSynchronized()
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m61352(__this, method) (( bool (*) (KeyCollection_t8463 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_IsSynchronized_m61271_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::System.Collections.ICollection.get_SyncRoot()
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m61353(__this, method) (( Object_t * (*) (KeyCollection_t8463 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m61272_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::CopyTo(TKey[],System.Int32)
#define KeyCollection_CopyTo_m61354(__this, ___array, ___index, method) (( void (*) (KeyCollection_t8463 *, StringU5BU5D_t75*, int32_t, const MethodInfo*))KeyCollection_CopyTo_m61273_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::GetEnumerator()
#define KeyCollection_GetEnumerator_m61355(__this, method) (( Enumerator_t9626  (*) (KeyCollection_t8463 *, const MethodInfo*))KeyCollection_GetEnumerator_m61274_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::get_Count()
#define KeyCollection_get_Count_m61356(__this, method) (( int32_t (*) (KeyCollection_t8463 *, const MethodInfo*))KeyCollection_get_Count_m61275_gshared)(__this, method)
