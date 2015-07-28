#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseRole>
struct KeyCollection_t7095;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,Parse.ParseRole>
struct Dictionary_2_t7093;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t1401;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.String[]
struct StringU5BU5D_t75;
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,Parse.ParseRole>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_141.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseRole>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_12MethodDeclarations.h"
#define KeyCollection__ctor_m45432(__this, ___dictionary, method) (( void (*) (KeyCollection_t7095 *, Dictionary_2_t7093 *, const MethodInfo*))KeyCollection__ctor_m21587_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseRole>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m45433(__this, ___item, method) (( void (*) (KeyCollection_t7095 *, String_t*, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m21588_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseRole>::System.Collections.Generic.ICollection<TKey>.Clear()
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m45434(__this, method) (( void (*) (KeyCollection_t7095 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m21589_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseRole>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m45435(__this, ___item, method) (( bool (*) (KeyCollection_t7095 *, String_t*, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m21590_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseRole>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m45436(__this, ___item, method) (( bool (*) (KeyCollection_t7095 *, String_t*, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m21591_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseRole>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m45437(__this, method) (( Object_t* (*) (KeyCollection_t7095 *, const MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m21592_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseRole>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define KeyCollection_System_Collections_ICollection_CopyTo_m45438(__this, ___array, ___index, method) (( void (*) (KeyCollection_t7095 *, Array_t *, int32_t, const MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m21593_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseRole>::System.Collections.IEnumerable.GetEnumerator()
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m45439(__this, method) (( Object_t * (*) (KeyCollection_t7095 *, const MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m21594_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseRole>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m45440(__this, method) (( bool (*) (KeyCollection_t7095 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m21595_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseRole>::System.Collections.ICollection.get_IsSynchronized()
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m45441(__this, method) (( bool (*) (KeyCollection_t7095 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_IsSynchronized_m21596_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseRole>::System.Collections.ICollection.get_SyncRoot()
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m45442(__this, method) (( Object_t * (*) (KeyCollection_t7095 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m21597_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseRole>::CopyTo(TKey[],System.Int32)
#define KeyCollection_CopyTo_m45443(__this, ___array, ___index, method) (( void (*) (KeyCollection_t7095 *, StringU5BU5D_t75*, int32_t, const MethodInfo*))KeyCollection_CopyTo_m21598_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseRole>::GetEnumerator()
#define KeyCollection_GetEnumerator_m45444(__this, method) (( Enumerator_t9247  (*) (KeyCollection_t7095 *, const MethodInfo*))KeyCollection_GetEnumerator_m21599_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseRole>::get_Count()
#define KeyCollection_get_Count_m45445(__this, method) (( int32_t (*) (KeyCollection_t7095 *, const MethodInfo*))KeyCollection_get_Count_m21600_gshared)(__this, method)
