#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct ValueCollection_t6870;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct Dictionary_2_t1552;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t840;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct IEnumerator_1_t9752;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>[]
struct IDictionary_2U5BU5D_t6707;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_138.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_8MethodDeclarations.h"
#define ValueCollection__ctor_m39736(__this, ___dictionary, method) (( void (*) (ValueCollection_t6870 *, Dictionary_2_t1552 *, const MethodInfo*))ValueCollection__ctor_m26299_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m39737(__this, ___item, method) (( void (*) (ValueCollection_t6870 *, Object_t*, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m26300_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.Generic.ICollection<TValue>.Clear()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m39738(__this, method) (( void (*) (ValueCollection_t6870 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m26301_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m39739(__this, ___item, method) (( bool (*) (ValueCollection_t6870 *, Object_t*, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m26302_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m39740(__this, ___item, method) (( bool (*) (ValueCollection_t6870 *, Object_t*, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m26303_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m39741(__this, method) (( Object_t* (*) (ValueCollection_t6870 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m26304_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ValueCollection_System_Collections_ICollection_CopyTo_m39742(__this, ___array, ___index, method) (( void (*) (ValueCollection_t6870 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m26305_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m39743(__this, method) (( Object_t * (*) (ValueCollection_t6870 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m26306_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m39744(__this, method) (( bool (*) (ValueCollection_t6870 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m26307_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m39745(__this, method) (( bool (*) (ValueCollection_t6870 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m26308_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.ICollection.get_SyncRoot()
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m39746(__this, method) (( Object_t * (*) (ValueCollection_t6870 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m26309_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::CopyTo(TValue[],System.Int32)
#define ValueCollection_CopyTo_m39747(__this, ___array, ___index, method) (( void (*) (ValueCollection_t6870 *, IDictionary_2U5BU5D_t6707*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m26310_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::GetEnumerator()
#define ValueCollection_GetEnumerator_m39748(__this, method) (( Enumerator_t9829  (*) (ValueCollection_t6870 *, const MethodInfo*))ValueCollection_GetEnumerator_m26311_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::get_Count()
#define ValueCollection_get_Count_m39749(__this, method) (( int32_t (*) (ValueCollection_t6870 *, const MethodInfo*))ValueCollection_get_Count_m26312_gshared)(__this, method)
