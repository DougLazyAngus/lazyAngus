#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseUser>
struct KeyCollection_t7093;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,Parse.ParseUser>
struct Dictionary_2_t7091;
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
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,Parse.ParseUser>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_140.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseUser>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_12MethodDeclarations.h"
#define KeyCollection__ctor_m45336(__this, ___dictionary, method) (( void (*) (KeyCollection_t7093 *, Dictionary_2_t7091 *, const MethodInfo*))KeyCollection__ctor_m21634_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseUser>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m45337(__this, ___item, method) (( void (*) (KeyCollection_t7093 *, String_t*, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m21635_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseUser>::System.Collections.Generic.ICollection<TKey>.Clear()
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m45338(__this, method) (( void (*) (KeyCollection_t7093 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m21636_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseUser>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m45339(__this, ___item, method) (( bool (*) (KeyCollection_t7093 *, String_t*, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m21637_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseUser>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m45340(__this, ___item, method) (( bool (*) (KeyCollection_t7093 *, String_t*, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m21638_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseUser>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m45341(__this, method) (( Object_t* (*) (KeyCollection_t7093 *, const MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m21639_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseUser>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define KeyCollection_System_Collections_ICollection_CopyTo_m45342(__this, ___array, ___index, method) (( void (*) (KeyCollection_t7093 *, Array_t *, int32_t, const MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m21640_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseUser>::System.Collections.IEnumerable.GetEnumerator()
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m45343(__this, method) (( Object_t * (*) (KeyCollection_t7093 *, const MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m21641_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseUser>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m45344(__this, method) (( bool (*) (KeyCollection_t7093 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m21642_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseUser>::System.Collections.ICollection.get_IsSynchronized()
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m45345(__this, method) (( bool (*) (KeyCollection_t7093 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_IsSynchronized_m21643_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseUser>::System.Collections.ICollection.get_SyncRoot()
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m45346(__this, method) (( Object_t * (*) (KeyCollection_t7093 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m21644_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseUser>::CopyTo(TKey[],System.Int32)
#define KeyCollection_CopyTo_m45347(__this, ___array, ___index, method) (( void (*) (KeyCollection_t7093 *, StringU5BU5D_t75*, int32_t, const MethodInfo*))KeyCollection_CopyTo_m21645_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseUser>::GetEnumerator()
#define KeyCollection_GetEnumerator_m45348(__this, method) (( Enumerator_t9248  (*) (KeyCollection_t7093 *, const MethodInfo*))KeyCollection_GetEnumerator_m21646_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseUser>::get_Count()
#define KeyCollection_get_Count_m45349(__this, method) (( int32_t (*) (KeyCollection_t7093 *, const MethodInfo*))KeyCollection_get_Count_m21647_gshared)(__this, method)
