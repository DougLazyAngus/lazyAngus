#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseObject>
struct KeyCollection_t7127;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,Parse.ParseObject>
struct Dictionary_2_t1489;
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
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,Parse.ParseObject>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_138.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseObject>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_12MethodDeclarations.h"
#define KeyCollection__ctor_m45512(__this, ___dictionary, method) (( void (*) (KeyCollection_t7127 *, Dictionary_2_t1489 *, const MethodInfo*))KeyCollection__ctor_m21928_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseObject>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m45513(__this, ___item, method) (( void (*) (KeyCollection_t7127 *, String_t*, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m21929_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseObject>::System.Collections.Generic.ICollection<TKey>.Clear()
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m45514(__this, method) (( void (*) (KeyCollection_t7127 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m21930_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseObject>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m45515(__this, ___item, method) (( bool (*) (KeyCollection_t7127 *, String_t*, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m21931_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseObject>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m45516(__this, ___item, method) (( bool (*) (KeyCollection_t7127 *, String_t*, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m21932_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseObject>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m45517(__this, method) (( Object_t* (*) (KeyCollection_t7127 *, const MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m21933_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseObject>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define KeyCollection_System_Collections_ICollection_CopyTo_m45518(__this, ___array, ___index, method) (( void (*) (KeyCollection_t7127 *, Array_t *, int32_t, const MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m21934_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseObject>::System.Collections.IEnumerable.GetEnumerator()
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m45519(__this, method) (( Object_t * (*) (KeyCollection_t7127 *, const MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m21935_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseObject>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m45520(__this, method) (( bool (*) (KeyCollection_t7127 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m21936_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseObject>::System.Collections.ICollection.get_IsSynchronized()
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m45521(__this, method) (( bool (*) (KeyCollection_t7127 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_IsSynchronized_m21937_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseObject>::System.Collections.ICollection.get_SyncRoot()
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m45522(__this, method) (( Object_t * (*) (KeyCollection_t7127 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m21938_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseObject>::CopyTo(TKey[],System.Int32)
#define KeyCollection_CopyTo_m45523(__this, ___array, ___index, method) (( void (*) (KeyCollection_t7127 *, StringU5BU5D_t75*, int32_t, const MethodInfo*))KeyCollection_CopyTo_m21939_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseObject>::GetEnumerator()
#define KeyCollection_GetEnumerator_m45524(__this, method) (( Enumerator_t9331  (*) (KeyCollection_t7127 *, const MethodInfo*))KeyCollection_GetEnumerator_m21940_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseObject>::get_Count()
#define KeyCollection_get_Count_m45525(__this, method) (( int32_t (*) (KeyCollection_t7127 *, const MethodInfo*))KeyCollection_get_Count_m21941_gshared)(__this, method)
