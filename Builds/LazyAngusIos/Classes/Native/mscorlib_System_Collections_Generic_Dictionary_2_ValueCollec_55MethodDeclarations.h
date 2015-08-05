#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct ValueCollection_t6225;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct Dictionary_2_t1482;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t767;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct IEnumerator_1_t9022;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>[]
struct IDictionary_2U5BU5D_t6061;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_132.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_8MethodDeclarations.h"
#define ValueCollection__ctor_m34339(__this, ___dictionary, method) (( void (*) (ValueCollection_t6225 *, Dictionary_2_t1482 *, const MethodInfo*))ValueCollection__ctor_m21700_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m34340(__this, ___item, method) (( void (*) (ValueCollection_t6225 *, Object_t*, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m21701_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.Generic.ICollection<TValue>.Clear()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m34341(__this, method) (( void (*) (ValueCollection_t6225 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m21702_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m34342(__this, ___item, method) (( bool (*) (ValueCollection_t6225 *, Object_t*, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m21703_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m34343(__this, ___item, method) (( bool (*) (ValueCollection_t6225 *, Object_t*, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m21704_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m34344(__this, method) (( Object_t* (*) (ValueCollection_t6225 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m21705_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ValueCollection_System_Collections_ICollection_CopyTo_m34345(__this, ___array, ___index, method) (( void (*) (ValueCollection_t6225 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m21706_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m34346(__this, method) (( Object_t * (*) (ValueCollection_t6225 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m21707_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m34347(__this, method) (( bool (*) (ValueCollection_t6225 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m21708_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m34348(__this, method) (( bool (*) (ValueCollection_t6225 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m21709_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.ICollection.get_SyncRoot()
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m34349(__this, method) (( Object_t * (*) (ValueCollection_t6225 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m21710_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::CopyTo(TValue[],System.Int32)
#define ValueCollection_CopyTo_m34350(__this, ___array, ___index, method) (( void (*) (ValueCollection_t6225 *, IDictionary_2U5BU5D_t6061*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m21711_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::GetEnumerator()
#define ValueCollection_GetEnumerator_m34351(__this, method) (( Enumerator_t9099  (*) (ValueCollection_t6225 *, const MethodInfo*))ValueCollection_GetEnumerator_m21712_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::get_Count()
#define ValueCollection_get_Count_m34352(__this, method) (( int32_t (*) (ValueCollection_t6225 *, const MethodInfo*))ValueCollection_get_Count_m21713_gshared)(__this, method)
