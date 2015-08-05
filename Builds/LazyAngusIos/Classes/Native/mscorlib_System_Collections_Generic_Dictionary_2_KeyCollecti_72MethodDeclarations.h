#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseFile>
struct KeyCollection_t7079;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,Parse.ParseFile>
struct Dictionary_2_t7077;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t1411;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.String[]
struct StringU5BU5D_t75;
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,Parse.ParseFile>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_138.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseFile>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_12MethodDeclarations.h"
#define KeyCollection__ctor_m45081(__this, ___dictionary, method) (( void (*) (KeyCollection_t7079 *, Dictionary_2_t7077 *, const MethodInfo*))KeyCollection__ctor_m21665_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseFile>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m45082(__this, ___item, method) (( void (*) (KeyCollection_t7079 *, String_t*, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m21666_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseFile>::System.Collections.Generic.ICollection<TKey>.Clear()
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m45083(__this, method) (( void (*) (KeyCollection_t7079 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m21667_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseFile>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m45084(__this, ___item, method) (( bool (*) (KeyCollection_t7079 *, String_t*, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m21668_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseFile>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m45085(__this, ___item, method) (( bool (*) (KeyCollection_t7079 *, String_t*, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m21669_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseFile>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m45086(__this, method) (( Object_t* (*) (KeyCollection_t7079 *, const MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m21670_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseFile>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define KeyCollection_System_Collections_ICollection_CopyTo_m45087(__this, ___array, ___index, method) (( void (*) (KeyCollection_t7079 *, Array_t *, int32_t, const MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m21671_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseFile>::System.Collections.IEnumerable.GetEnumerator()
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m45088(__this, method) (( Object_t * (*) (KeyCollection_t7079 *, const MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m21672_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseFile>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m45089(__this, method) (( bool (*) (KeyCollection_t7079 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m21673_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseFile>::System.Collections.ICollection.get_IsSynchronized()
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m45090(__this, method) (( bool (*) (KeyCollection_t7079 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_IsSynchronized_m21674_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseFile>::System.Collections.ICollection.get_SyncRoot()
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m45091(__this, method) (( Object_t * (*) (KeyCollection_t7079 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m21675_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseFile>::CopyTo(TKey[],System.Int32)
#define KeyCollection_CopyTo_m45092(__this, ___array, ___index, method) (( void (*) (KeyCollection_t7079 *, StringU5BU5D_t75*, int32_t, const MethodInfo*))KeyCollection_CopyTo_m21676_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseFile>::GetEnumerator()
#define KeyCollection_GetEnumerator_m45093(__this, method) (( Enumerator_t9240  (*) (KeyCollection_t7079 *, const MethodInfo*))KeyCollection_GetEnumerator_m21677_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseFile>::get_Count()
#define KeyCollection_get_Count_m45094(__this, method) (( int32_t (*) (KeyCollection_t7079 *, const MethodInfo*))KeyCollection_get_Count_m21678_gshared)(__this, method)
