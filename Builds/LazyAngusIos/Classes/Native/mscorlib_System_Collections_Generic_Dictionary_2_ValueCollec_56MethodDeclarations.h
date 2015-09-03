#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct ValueCollection_t6864;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct Dictionary_2_t1548;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t836;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct IEnumerator_1_t9746;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>[]
struct IDictionary_2U5BU5D_t6701;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_138.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_8MethodDeclarations.h"
#define ValueCollection__ctor_m39711(__this, ___dictionary, method) (( void (*) (ValueCollection_t6864 *, Dictionary_2_t1548 *, const MethodInfo*))ValueCollection__ctor_m26286_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m39712(__this, ___item, method) (( void (*) (ValueCollection_t6864 *, Object_t*, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m26287_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.Generic.ICollection<TValue>.Clear()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m39713(__this, method) (( void (*) (ValueCollection_t6864 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m26288_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m39714(__this, ___item, method) (( bool (*) (ValueCollection_t6864 *, Object_t*, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m26289_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m39715(__this, ___item, method) (( bool (*) (ValueCollection_t6864 *, Object_t*, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m26290_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m39716(__this, method) (( Object_t* (*) (ValueCollection_t6864 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m26291_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ValueCollection_System_Collections_ICollection_CopyTo_m39717(__this, ___array, ___index, method) (( void (*) (ValueCollection_t6864 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m26292_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m39718(__this, method) (( Object_t * (*) (ValueCollection_t6864 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m26293_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m39719(__this, method) (( bool (*) (ValueCollection_t6864 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m26294_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m39720(__this, method) (( bool (*) (ValueCollection_t6864 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m26295_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.ICollection.get_SyncRoot()
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m39721(__this, method) (( Object_t * (*) (ValueCollection_t6864 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m26296_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::CopyTo(TValue[],System.Int32)
#define ValueCollection_CopyTo_m39722(__this, ___array, ___index, method) (( void (*) (ValueCollection_t6864 *, IDictionary_2U5BU5D_t6701*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m26297_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::GetEnumerator()
#define ValueCollection_GetEnumerator_m39723(__this, method) (( Enumerator_t9823  (*) (ValueCollection_t6864 *, const MethodInfo*))ValueCollection_GetEnumerator_m26298_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::get_Count()
#define ValueCollection_get_Count_m39724(__this, method) (( int32_t (*) (ValueCollection_t6864 *, const MethodInfo*))ValueCollection_get_Count_m26299_gshared)(__this, method)
