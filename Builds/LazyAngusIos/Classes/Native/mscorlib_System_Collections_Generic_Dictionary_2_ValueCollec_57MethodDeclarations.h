#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>
struct ValueCollection_t6983;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Single>
struct Dictionary_2_t6980;
// System.Collections.Generic.IEnumerator`1<System.Single>
struct IEnumerator_1_t6291;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Single[]
struct SingleU5BU5D_t542;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_134.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Single>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_58MethodDeclarations.h"
#define ValueCollection__ctor_m43826(__this, ___dictionary, method) (( void (*) (ValueCollection_t6983 *, Dictionary_2_t6980 *, const MethodInfo*))ValueCollection__ctor_m43827_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m43828(__this, ___item, method) (( void (*) (ValueCollection_t6983 *, float, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m43829_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>::System.Collections.Generic.ICollection<TValue>.Clear()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m43830(__this, method) (( void (*) (ValueCollection_t6983 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m43831_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m43832(__this, ___item, method) (( bool (*) (ValueCollection_t6983 *, float, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m43833_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m43834(__this, ___item, method) (( bool (*) (ValueCollection_t6983 *, float, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m43835_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m43836(__this, method) (( Object_t* (*) (ValueCollection_t6983 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m43837_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ValueCollection_System_Collections_ICollection_CopyTo_m43838(__this, ___array, ___index, method) (( void (*) (ValueCollection_t6983 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m43839_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>::System.Collections.IEnumerable.GetEnumerator()
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m43840(__this, method) (( Object_t * (*) (ValueCollection_t6983 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m43841_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m43842(__this, method) (( bool (*) (ValueCollection_t6983 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m43843_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>::System.Collections.ICollection.get_IsSynchronized()
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m43844(__this, method) (( bool (*) (ValueCollection_t6983 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m43845_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>::System.Collections.ICollection.get_SyncRoot()
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m43846(__this, method) (( Object_t * (*) (ValueCollection_t6983 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m43847_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>::CopyTo(TValue[],System.Int32)
#define ValueCollection_CopyTo_m43848(__this, ___array, ___index, method) (( void (*) (ValueCollection_t6983 *, SingleU5BU5D_t542*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m43849_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>::GetEnumerator()
#define ValueCollection_GetEnumerator_m43850(__this, method) (( Enumerator_t9210  (*) (ValueCollection_t6983 *, const MethodInfo*))ValueCollection_GetEnumerator_m43851_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>::get_Count()
#define ValueCollection_get_Count_m43852(__this, method) (( int32_t (*) (ValueCollection_t6983 *, const MethodInfo*))ValueCollection_get_Count_m43853_gshared)(__this, method)
