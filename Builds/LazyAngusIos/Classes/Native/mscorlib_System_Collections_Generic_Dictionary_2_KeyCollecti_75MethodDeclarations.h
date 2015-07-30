#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseRole>
struct KeyCollection_t7102;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,Parse.ParseRole>
struct Dictionary_2_t7100;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t1407;
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
#define KeyCollection__ctor_m45479(__this, ___dictionary, method) (( void (*) (KeyCollection_t7102 *, Dictionary_2_t7100 *, const MethodInfo*))KeyCollection__ctor_m21634_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseRole>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m45480(__this, ___item, method) (( void (*) (KeyCollection_t7102 *, String_t*, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m21635_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseRole>::System.Collections.Generic.ICollection<TKey>.Clear()
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m45481(__this, method) (( void (*) (KeyCollection_t7102 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m21636_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseRole>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m45482(__this, ___item, method) (( bool (*) (KeyCollection_t7102 *, String_t*, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m21637_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseRole>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m45483(__this, ___item, method) (( bool (*) (KeyCollection_t7102 *, String_t*, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m21638_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseRole>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m45484(__this, method) (( Object_t* (*) (KeyCollection_t7102 *, const MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m21639_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseRole>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define KeyCollection_System_Collections_ICollection_CopyTo_m45485(__this, ___array, ___index, method) (( void (*) (KeyCollection_t7102 *, Array_t *, int32_t, const MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m21640_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseRole>::System.Collections.IEnumerable.GetEnumerator()
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m45486(__this, method) (( Object_t * (*) (KeyCollection_t7102 *, const MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m21641_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseRole>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m45487(__this, method) (( bool (*) (KeyCollection_t7102 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m21642_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseRole>::System.Collections.ICollection.get_IsSynchronized()
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m45488(__this, method) (( bool (*) (KeyCollection_t7102 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_IsSynchronized_m21643_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseRole>::System.Collections.ICollection.get_SyncRoot()
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m45489(__this, method) (( Object_t * (*) (KeyCollection_t7102 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m21644_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseRole>::CopyTo(TKey[],System.Int32)
#define KeyCollection_CopyTo_m45490(__this, ___array, ___index, method) (( void (*) (KeyCollection_t7102 *, StringU5BU5D_t75*, int32_t, const MethodInfo*))KeyCollection_CopyTo_m21645_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseRole>::GetEnumerator()
#define KeyCollection_GetEnumerator_m45491(__this, method) (( Enumerator_t9254  (*) (KeyCollection_t7102 *, const MethodInfo*))KeyCollection_GetEnumerator_m21646_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseRole>::get_Count()
#define KeyCollection_get_Count_m45492(__this, method) (( int32_t (*) (KeyCollection_t7102 *, const MethodInfo*))KeyCollection_get_Count_m21647_gshared)(__this, method)
