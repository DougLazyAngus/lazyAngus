#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String[]>
struct KeyCollection_t3341;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,System.String[]>
struct Dictionary_2_t74;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t4135;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.String[]
struct StringU5BU5D_t45;
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.String[]>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_53.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String[]>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_9MethodDeclarations.h"
#define KeyCollection__ctor_m17416(__this, ___dictionary, method) (( void (*) (KeyCollection_t3341 *, Dictionary_2_t74 *, const MethodInfo*))KeyCollection__ctor_m16973_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String[]>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m17417(__this, ___item, method) (( void (*) (KeyCollection_t3341 *, String_t*, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m16974_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String[]>::System.Collections.Generic.ICollection<TKey>.Clear()
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m17418(__this, method) (( void (*) (KeyCollection_t3341 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m16975_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String[]>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m17419(__this, ___item, method) (( bool (*) (KeyCollection_t3341 *, String_t*, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m16976_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String[]>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m17420(__this, ___item, method) (( bool (*) (KeyCollection_t3341 *, String_t*, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m16977_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String[]>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m17421(__this, method) (( Object_t* (*) (KeyCollection_t3341 *, const MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m16978_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String[]>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define KeyCollection_System_Collections_ICollection_CopyTo_m17422(__this, ___array, ___index, method) (( void (*) (KeyCollection_t3341 *, Array_t *, int32_t, const MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m16979_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String[]>::System.Collections.IEnumerable.GetEnumerator()
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m17423(__this, method) (( Object_t * (*) (KeyCollection_t3341 *, const MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m16980_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String[]>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m17424(__this, method) (( bool (*) (KeyCollection_t3341 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m16981_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String[]>::System.Collections.ICollection.get_IsSynchronized()
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m17425(__this, method) (( bool (*) (KeyCollection_t3341 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_IsSynchronized_m16982_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String[]>::System.Collections.ICollection.get_SyncRoot()
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m17426(__this, method) (( Object_t * (*) (KeyCollection_t3341 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m16983_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String[]>::CopyTo(TKey[],System.Int32)
#define KeyCollection_CopyTo_m17427(__this, ___array, ___index, method) (( void (*) (KeyCollection_t3341 *, StringU5BU5D_t45*, int32_t, const MethodInfo*))KeyCollection_CopyTo_m16984_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String[]>::GetEnumerator()
#define KeyCollection_GetEnumerator_m17428(__this, method) (( Enumerator_t4145  (*) (KeyCollection_t3341 *, const MethodInfo*))KeyCollection_GetEnumerator_m16985_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String[]>::get_Count()
#define KeyCollection_get_Count_m17429(__this, method) (( int32_t (*) (KeyCollection_t3341 *, const MethodInfo*))KeyCollection_get_Count_m16986_gshared)(__this, method)
