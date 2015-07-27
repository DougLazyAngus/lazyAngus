#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>
struct KeyCollection_t3961;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Int64>
struct Dictionary_2_t1170;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t4230;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.String[]
struct StringU5BU5D_t45;
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_83.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_41MethodDeclarations.h"
#define KeyCollection__ctor_m26646(__this, ___dictionary, method) (( void (*) (KeyCollection_t3961 *, Dictionary_2_t1170 *, const MethodInfo*))KeyCollection__ctor_m26553_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m26647(__this, ___item, method) (( void (*) (KeyCollection_t3961 *, String_t*, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m26554_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::System.Collections.Generic.ICollection<TKey>.Clear()
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m26648(__this, method) (( void (*) (KeyCollection_t3961 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m26555_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m26649(__this, ___item, method) (( bool (*) (KeyCollection_t3961 *, String_t*, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m26556_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m26650(__this, ___item, method) (( bool (*) (KeyCollection_t3961 *, String_t*, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m26557_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m26651(__this, method) (( Object_t* (*) (KeyCollection_t3961 *, const MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m26558_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define KeyCollection_System_Collections_ICollection_CopyTo_m26652(__this, ___array, ___index, method) (( void (*) (KeyCollection_t3961 *, Array_t *, int32_t, const MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m26559_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m26653(__this, method) (( Object_t * (*) (KeyCollection_t3961 *, const MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m26560_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m26654(__this, method) (( bool (*) (KeyCollection_t3961 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m26561_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::System.Collections.ICollection.get_IsSynchronized()
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m26655(__this, method) (( bool (*) (KeyCollection_t3961 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_IsSynchronized_m26562_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::System.Collections.ICollection.get_SyncRoot()
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m26656(__this, method) (( Object_t * (*) (KeyCollection_t3961 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m26563_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::CopyTo(TKey[],System.Int32)
#define KeyCollection_CopyTo_m26657(__this, ___array, ___index, method) (( void (*) (KeyCollection_t3961 *, StringU5BU5D_t45*, int32_t, const MethodInfo*))KeyCollection_CopyTo_m26564_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::GetEnumerator()
#define KeyCollection_GetEnumerator_m26658(__this, method) (( Enumerator_t4606  (*) (KeyCollection_t3961 *, const MethodInfo*))KeyCollection_GetEnumerator_m26565_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::get_Count()
#define KeyCollection_get_Count_m26659(__this, method) (( int32_t (*) (KeyCollection_t3961 *, const MethodInfo*))KeyCollection_get_Count_m26566_gshared)(__this, method)
