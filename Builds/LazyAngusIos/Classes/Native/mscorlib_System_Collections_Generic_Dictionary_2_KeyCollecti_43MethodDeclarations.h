#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>
struct KeyCollection_t6004;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>
struct Dictionary_2_t1395;
// System.Tuple`2<System.Type,System.Type>
struct Tuple_2_t1392;
// System.Collections.Generic.IEnumerator`1<System.Tuple`2<System.Type,System.Type>>
struct IEnumerator_1_t8997;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Tuple`2<System.Type,System.Type>[]
struct Tuple_2U5BU5D_t5999;
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_121.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_12MethodDeclarations.h"
#define KeyCollection__ctor_m31201(__this, ___dictionary, method) (( void (*) (KeyCollection_t6004 *, Dictionary_2_t1395 *, const MethodInfo*))KeyCollection__ctor_m21665_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m31202(__this, ___item, method) (( void (*) (KeyCollection_t6004 *, Tuple_2_t1392 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m21666_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.Generic.ICollection<TKey>.Clear()
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m31203(__this, method) (( void (*) (KeyCollection_t6004 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m21667_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m31204(__this, ___item, method) (( bool (*) (KeyCollection_t6004 *, Tuple_2_t1392 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m21668_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m31205(__this, ___item, method) (( bool (*) (KeyCollection_t6004 *, Tuple_2_t1392 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m21669_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m31206(__this, method) (( Object_t* (*) (KeyCollection_t6004 *, const MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m21670_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define KeyCollection_System_Collections_ICollection_CopyTo_m31207(__this, ___array, ___index, method) (( void (*) (KeyCollection_t6004 *, Array_t *, int32_t, const MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m21671_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m31208(__this, method) (( Object_t * (*) (KeyCollection_t6004 *, const MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m21672_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m31209(__this, method) (( bool (*) (KeyCollection_t6004 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m21673_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m31210(__this, method) (( bool (*) (KeyCollection_t6004 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_IsSynchronized_m21674_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m31211(__this, method) (( Object_t * (*) (KeyCollection_t6004 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m21675_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::CopyTo(TKey[],System.Int32)
#define KeyCollection_CopyTo_m31212(__this, ___array, ___index, method) (( void (*) (KeyCollection_t6004 *, Tuple_2U5BU5D_t5999*, int32_t, const MethodInfo*))KeyCollection_CopyTo_m21676_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::GetEnumerator()
#define KeyCollection_GetEnumerator_m31213(__this, method) (( Enumerator_t8998  (*) (KeyCollection_t6004 *, const MethodInfo*))KeyCollection_GetEnumerator_m21677_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::get_Count()
#define KeyCollection_get_Count_m31214(__this, method) (( int32_t (*) (KeyCollection_t6004 *, const MethodInfo*))KeyCollection_get_Count_m21678_gshared)(__this, method)
