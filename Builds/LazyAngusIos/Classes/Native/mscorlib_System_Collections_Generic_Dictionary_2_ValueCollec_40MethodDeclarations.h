﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>
struct ValueCollection_t3961;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Int64>
struct Dictionary_2_t1169;
// System.Collections.Generic.IEnumerator`1<System.Int64>
struct IEnumerator_1_t4604;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Int64[]
struct Int64U5BU5D_t2846;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_83.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_38MethodDeclarations.h"
#define ValueCollection__ctor_m26653(__this, ___dictionary, method) (( void (*) (ValueCollection_t3961 *, Dictionary_2_t1169 *, const MethodInfo*))ValueCollection__ctor_m26581_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m26654(__this, ___item, method) (( void (*) (ValueCollection_t3961 *, int64_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m26582_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>::System.Collections.Generic.ICollection<TValue>.Clear()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m26655(__this, method) (( void (*) (ValueCollection_t3961 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m26583_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m26656(__this, ___item, method) (( bool (*) (ValueCollection_t3961 *, int64_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m26584_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m26657(__this, ___item, method) (( bool (*) (ValueCollection_t3961 *, int64_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m26585_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m26658(__this, method) (( Object_t* (*) (ValueCollection_t3961 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m26586_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ValueCollection_System_Collections_ICollection_CopyTo_m26659(__this, ___array, ___index, method) (( void (*) (ValueCollection_t3961 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m26587_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m26660(__this, method) (( Object_t * (*) (ValueCollection_t3961 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m26588_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m26661(__this, method) (( bool (*) (ValueCollection_t3961 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m26589_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>::System.Collections.ICollection.get_IsSynchronized()
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m26662(__this, method) (( bool (*) (ValueCollection_t3961 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m26590_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>::System.Collections.ICollection.get_SyncRoot()
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m26663(__this, method) (( Object_t * (*) (ValueCollection_t3961 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m26591_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>::CopyTo(TValue[],System.Int32)
#define ValueCollection_CopyTo_m26664(__this, ___array, ___index, method) (( void (*) (ValueCollection_t3961 *, Int64U5BU5D_t2846*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m26592_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>::GetEnumerator()
#define ValueCollection_GetEnumerator_m26665(__this, method) (( Enumerator_t4606  (*) (ValueCollection_t3961 *, const MethodInfo*))ValueCollection_GetEnumerator_m26593_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>::get_Count()
#define ValueCollection_get_Count_m26666(__this, method) (( int32_t (*) (ValueCollection_t3961 *, const MethodInfo*))ValueCollection_get_Count_m26594_gshared)(__this, method)
